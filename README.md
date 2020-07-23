# ACTUADORES

## 1. PLANTEAMIENTO
Trabajar con los diferentes dispositivos que nos ofrece la plataforma Tinkercad como un motor de corriente continua, control remoto por infrarrojo, servomotor, motor de vibración, LCD y un anillo de 12 neopixeles los cuales deberán ser implementados en un programa que nos demuestre su funcionamiento mediante una simulación de los mismos.


## 2. OBJETIVOS
### **Objetivo General**
Implementar en Tinkercad un programa en Arduino (para comprender el funcionamiento de actuadores básicos)por cada uno de los sensores utilizados en la demostración del programa, en el cual lo principal es verificar la transmisión de datos desde la tarjeta antes mencionada hasta los periféricos usados en la práctica.

### **Objetivos específicos**
-	Constatar que son los motores CC, como se alimentan, tipo de torque que poseen y tipo de velocidades alcanzan. 
-	Estudiar el funcionamiento del control remoto por infrarrojo, el cual posee un sensor y un receptor de infrarrojo.
-	Observar como se conecta un microservomotor, la utilización correcta de los distintos pines, que es cada pin, los pines de la señal de reloj, de polarización y de tierra.
-	Configurar el LCD, los pines utilizados, cuales son los pines para regular y alimentar el dispositivo.
- Configurar los colores de un anillo de 12 neopixeles.


## 3. ESTADO DEL ARTE
Los controles clásicos PI, PD y PID han sido estudiados por Madill y Wang (1998), Reynaerts y Van Brussel (1991) e Ikuta et al. (1988). Específicamente, Ikuta et al. (1988) usaron un sistema de control PID con una señal de salida PWM (modulada por ancho de pulso).
Hirose diseñó un actuador que empleaba una configuración de los elementos SMA llamada ‘’array’’. En esta configuración los elementos activos, que consisten en un conjunto de muelles helicoidales, están conectados eléctricamente en serie. Estos muelles trabajan mecánicamente en paralelo contra un pistón móvil. La configuración ‘’array’’ fue utilizada por Ikuta en el desarrollo de un servomotor basado en el uso de SMAs. Este sistema usa la resistencia eléctrica como realimentación para controlarlo ya que esta varía con el porcentaje de austenita en la aleación, y por tanto varía con la temperatura. Con este servomotor se fabricó un endoscopio activo. El uso de la propia resistencia del cable para la realimentación, no es viable. La variación de la resistencia con la deformación del material no es lineal y no permite un control preciso. Así lo demuestra en un estudio de la universidad politécnica de Valencia.
Luego, Troisfontaine et al. en 1997 estudiaron un controlador PI que incluía una realimentación de temperatura. En ese mismo año, Grant y Hayward, usando un control de estructura variable (VSC) con modulación discreta de corriente, controlaron un par de actuadores de nitinol antagonistas compuestos por múltiples fibras organizadas en un patrón helicoidal, de tal manera que se lograra superar los límites Estudio e implementación de actuadores basados en aleaciones SMA de deformación de las fibras de nitinol y su velocidad de actuación. El control usaba la señal de realimentación para corregir el error de desplazamiento, y ajustar el valor de la corriente según la posición. Así lograron diseñar un control preciso con una baja complejidad relativa.
Kuribayashi diseñó un actuador formado por dos alambres de Nitinol. Para este sistema desarrolló un modelo matemático tanto del mecanismo de actuación como del sistema de control y demostró la validez de estos modelos con una serie de pruebas experimentales.


## 4. MARCO TEORIÓCO
### Arduino
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/placa-arduino-uno.jpg)

Arduino es una plataforma de hardware de código abierto, basada en una placa de circuito impreso que contiene un microcontrolador de marca ATMEL que cuenta con entradas y salidas, analógicas y digitales, en un entorno de desarrollo que está basado en el lenguaje de programación procesing. El dispositivo conecta el mundo físico con el mundo virtual, o el mundo analógico con el digital controlando, sensores, alarmas, sistemas de luces, motores, y actuadores. (Tapia & Manzano, 2013)

Hay muchas otros microcontroladores y plataformas disponibles para la computación física donde las funcionalidades y herramientas son muy complicadas de programar, Arduino simplifica el proceso de trabajar con microcontroladores, ofrece algunas ventajas y características respecto a otros sistemas. (Tapia & Manzano, 2013)

### Tinkercad
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/logo.png)

[*Tinkercard*](https://www.tinkercad.com/) es una colección gratuita en línea de herramientas de software que ayudan a las personas de todo el mundo a pensar, crear y crear. Somos la introducción ideal a Autodesk, el líder en diseño 3D, ingeniería y software de entretenimiento.

### Anillo de 12 Neopixeles
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/neopixel.png)

Los tecnología NeoPixel nos permite enlazar multitud LEDs RGB y controlarlos con un solo cable de datos, ahorrándonos multitud de cables y simplificando la instalación.

LEDs RGB (rojo, verde y azul) están integrados junto con un chip driver en una pequeña superficie a través de un cable. NeoPixel viene de diferentes formas y tamaño, en esta ocasión nos enfocaremos en el aro de 12 Leds.

NeoPixels no se iluminan por si solos, necesitan de un microcontrolador para que estos funcionen. En este tutorial usaremos código en Arduino para empezar con NeoPixel, una vez que nos familiaricemos con el código podemos crear nuestros propios efectos y animaciones.

Como nota importante NeoPixels funciona para la mayoría de microcontroladores pero se le dificulta cuando trabaja con plataformas como Raspberry Pi, pues la señal de control es muy estricta.

Para controlar cada uno de LEDs tendremos que usar biblioteca específica de Adafruit.

### Control remoto por IR
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/ir%20remote.png)

El control remoto IR (infrarrojos) o mando a distancia de infrarrojos funciona emitiendo pulsos de luz infrarroja (por debajo del visible). La señal infrarroja transmite el código correspondiente al botón del mando a distancia pulsado al dispositivo en forma de una serie de impulsos de luz infrarroja. El receptor recibe la serie de impulsos de infrarrojos y los pasa a un procesador que descodifica y activarán una determinada función del dispositivo.

Este tipo de de señal tiene muy poco alcance, apenas unos metros, comparada con la señal de radiofrecuencia. Es muy «direccional», es decir, es necesario que el emisor de la señal infrarroja apunte el receptor. Si la señal es muy débil, falta de batería en el mando, podemos ver que  es  muy necesario apuntar directamente e incluso acercarse al receptor. 

Los obstáculos entre el mando y el receptor incluyen mucho en la señal, no llegará a su destino. Esto seguro que has probado con el mando a distancia de la televisión, cuando alguien se pone entre el mando y la televisión no llega la señal.

Podemos concluir con los mandos a distancia por infrarrojos son buenos para los casos que tengamos un solo dispositivo ya que no abre tanto la señal que emite como para alcanzar varios dispositivos. 

### Display LCD
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/lcd.jpg)

Las siglas LCD significan “Liquid Cristal Display” ó pantalla de cristal líquido. Es una pantalla plana basada en el uso de una sustancia liquida atrapada entre dos placas de vidrio, haciendo pasar por este una corriente eléctrica a una zona especifica, para que así esta se vuelva opaca, y además cuenta (generalmente) con iluminación trasera.

Las pantallas LCD de color, cada pixel individual se divide en tres cédulas o sub pixeles con los colores RGB (Rojo, Verde y Azul) respectivamente. Y así cada pixel puede controlarse para  producir una gran variedad de colores distintos.

Estos displays se controlan muy facilmente con una placa Arduino o un PIC y muy pocas lineas de código. Acontinuación sus pines para su conexión:

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/LCD.png) 
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/LCD-pines.png)

- Pin 1 – **Vss:** GND o tierra.

- Pin 2 – **Vdd:** Alimentación Vcc o +5V.
(Algunos pueden alimentarse a 3 Vcc)

- Pin 3 – **V0:** Control del contraste del display, conectamos este pin al terminal variable de un potenciómetro conectado a Vcc y Masa en sus terminales extremos.

- Pin 4 – **RS:** Selección de Registro.
0 lógico: Registro de comandos (escritura),
1 lógico: Registro de datos (escritura, lectura)

- Pin 5 – **R/W:**
0 lógico: Escritura del LCD.
1 Lógico: Lectura del LCD.

- Pin 6 – **Enable**: El famoso Enable de casi todos los componentes de la electrónica digital. Un 1 lógico señala el inicio de escritura o lectura del LCD, un 0 lógico, desactiva todas las funciones.

- Pin 7-10 – **D0/D3:** Pines correspondientes al bus de datos.
D0 corresponde al bit menos significativo.
Estos pines no se utilizan si realizamos operaciones sobre el LCD de 4 bits.

- Pin 11-14 – **D4/D7:** Pines correspondientes al bus de datos.
D7 corresponde al bit más significativo y puede utilizarse como “Busy Flag”,
si leemos sobre este pin, un 1 lógico nos indicará que el LCD se encuentra ocupado,
no permitiendonos realizar ninguna operación hasta que se deshabilite.

- Pin 15 – **Ánodo de la retroiluminación :** R + 5V.
- Pin 16 – **Cátodo de la retroiluminación:** GND.

### Microservomotor
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/micro-servo-miniatura-sg90.jpg)

Un servomotor es un tipo especial de motor que permite controlar la posición del eje en un momento dado. Esta diseñado para moverse determinada cantidad de grados y luego mantenerse fijo en una posición

Un servomotor (o servo) es un tipo especial de motor con características especiales de control de posición. Al hablar de un servomotor se hace referencia a un sistema compuesto por componentes electromecánicos y electrónicos.

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/servo.jpg)

El motor en el interior de un servomotor es un motor DC común y corriente. El eje del motor se acopla a una caja de engranajes similar a una transmisión. Esto se hace para potenciar el torque del motor y permitir mantener una posición fija cuando se requiera. De forma similar a un automóvil, a menor mayor velocidad, menor torque. El circuito electrónico es el encargado de manejar el movimiento y la posición del motor.

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/servo2.jpg)

La presencia del sistema de engranajes como el que se muestra en la figura hace que cuando movemos el eje motor se sienta una inercia muy superior a la de un motor común y corriente. Observando las imágenes que hemos presentado nos podemos dar cuenta que un servo no es un motor como tal, sino un conjunto de partes (incluyendo un motor) que forman un sistema

**Funcionamiento:**

Los servomotores poseen tres cables, a diferencia de los motores comunes que sólo tienen dos. Estos tres cables casi siempre tienen los mismos colores, por lo que son fácilmente reconocibles.

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/servo%20color.png)

Colores comunes de los cables de un servomotor
Los colores dependerán del fabricante, pero difícilmente nos equivocaremos a la hora de reconocer los terminales del un servo.  La necesidad de una señal de control para el funcionamiento de este tipo de motores hace que sea imposible utilizarlos sin un circuito de control adecuado. Esto se debe a que para que el circuito de control interno funcione, es necesaria una señal de control modulada. Para esto se utiliza modulación por ancho de pulsos, es decir, PWM.

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/servo%20diagrama.png)

El diagrama de bloque del servomotor representa de forma visual el servomotor como un sistema. El circuito electrónico es el encargado de recibir la señal PWM y traducirla en movimiento del Motor DC. El eje del motor DC está acoplado a un potenciómetro, el cual permite formar un divisor de voltaje. El voltaje en la salida del divisor varía en función de la posición del eje del motor DC.

### Motor de CC
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/cc.jpg)

El motor de corriente continua (motor DC) es una máquina que convierte la energía eléctrica en mecánica, provocando un movimiento rotatorio. En algunas modificaciones, ejercen tracción sobre un riel. Estos motores se conocen como motores lineales.

Una máquina de corriente continua (generador o motor) se compone principalmente de dos partes, un estator que da soporte mecánico al aparato y tiene un hueco en el centro generalmente de forma cilíndrica. En el estator además se encuentran los polos, que pueden ser de imanes permanentes o devanados con hilo de cobre sobre núcleo de hierro. El rotor es generalmente de forma cilíndrica, también devanado y con núcleo, al que llega la corriente mediante dos escobillas.

**Partes de un motor de corriente directa:**

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/cc%20partes.jpg)

**Funcionamiento**

Se basa en la repulsión que ejercen los polos magnéticos de un imán permanente de acuerdo con la Ley de Lorentz, interactúan con los polos magnéticos de un electroimán que se encuentra montado en el rotor.

Cuando la corriente eléctrica circula por la bobina de este electroimán giratorio, el campo electromagnético que se genera interactúa con el campo magnético del imán permanente o devanado. Si los polos del imán permanente o devanado y los polos del electroimán giratorio coinciden, se produce un rechazo y un torque magnético (par de fuerza que provoca que el rotor rompa la inercia y comience a girar sobre su eje) en sentido a la forma que se encuentre conectado el motor al circuito o la pila.

**CURVA TORQUE - VELOCIDAD**

La siguiente gráfica es una representación de los torques que un motor puede proporcionar a diferentes velocidades a los voltajes nominales.

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/cc%20torque.png)

Para un dado torque proporcionado por el motor, se puede utilizar la curva corriente-torque para determinar la corriente requerida cuando se le aplica el voltaje nominal al motor.

Como regla general, los motores generan grandes torques a baja velocidad, y grandes torques implican una demanda mayor de corriente por parte del motor.

**El torque de arranque o torque crítico (Ts):** Es el torque máximo que puede proporcionar un motor a velocidad cero, asociado con el arranque o sobrecarga del motor.
**La velocidad de no carga (WMáx):** Es la máxima velocidad sostenida que puede lograr el motor. Esta velocidad sólo se puede lograr cuando no se aplica carga o torque al motor.

### Motor de vibración
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/mv.jpg)

Es un motor de CC sin núcleo de tamaño compacto que se utiliza para informar a los usuarios de recibir la señal mediante vibración, sin sonido. Los motores de vibración se utilizan ampliamente en una variedad de aplicaciones, incluidos teléfonos celulares, teléfonos, buscapersonas, etc. Las características principales del motor de vibración es que el motor de CC sin núcleo del imán es permanente, lo que significa que siempre tendrá sus propiedades magnéticas (a diferencia de un electroimán, que solo se comporta como un imán cuando una corriente eléctrica lo atraviesa); Otra característica principal es que el tamaño del motor es pequeño y, por lo tanto, ligero. Además, el ruido y el consumo de energía que produce el motor durante el uso son bajos. Basado en esas características, el rendimiento del motor es altamente confiable.


## 5. DIAGRAMAS
### Anillo de 12 Neopixeles
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/Actuadores/Anillo%20de%2012%20Neopixeles.png)

### Control Remoto por IR
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/Actuadores/Control%20Remoro%20por%20IR.png)

### Display LCD
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/Actuadores/Display%20LCD.png)

### Microservomotor
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/Actuadores/Microservomotor.png)

### Motor de CC
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/Actuadores/DC%20Motor.png)

### Motor de Vibracióon
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/Actuadores/Motor%20de%20Vibraci%C3%B3n.png)

### Aporte
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/Actuadores/IR-Decode%20Value.png)


## 6. LISTA DE COMPONENTES
| **COMPONENTE** | **DESCRIPCIÓN** |
| :---: | :---: |
| Computadora | Puede tener cualquier Sistema Operativo |
| Internet | Simluación de Arduino con *Tinkercad* |
| Arduino UNO | Es una placa electrónica basada en el microcontrolador ATmega328. Cuenta con 14 entradas/salidas digitales, de las cuales 6 se pueden utilizar como salidas PWM (Modulación por ancho de pulsos) y otras 6 son entradas analógicas. Además, incluye un resonador cerámico de 16 MHz, un conector USB, un conector de alimentación, una cabecera ICSP y un botón de reseteado. |
| Anillo de 12 Neopixeles | Es un aro conformado por 12 leds RGB (rojo, verde, azul) |
| Control Remoto por IR | Es un mando a distancia de infrarrojos funciona emitiendo pulsos de luz infrarroja. |
| Sensor IR | Es un instrumento electrónico que escanea señales IR en rangos de frecuencia específicos definidos por estándares y los convierte en señales eléctricas en su pin de salida. |
| Display LCD | Es una pantalla delgada y plana formada por un número de píxeles en color o monocromos colocados delante de una fuente de luz o reflectora. |
| Micro Servomotor| Es un tipo especial de motor que permite controlar la posición del eje en un momento dado. Esta diseñado para moverse determinada cantidad de grados y luego mantenerse fijo en una posición. |
| Motor de CC | Es una máquina que convierte la energía eléctrica en mecánica, provocando un movimiento rotatorio. |
| Potenciómetro | Es un resistor eléctrico con un valor de resistencia variable y generalmente ajustable manualmente. |
| Motor de Vibración | Es un motor de CC sin núcleo de tamaño compacto que se utiliza para informar a los usuarios de recibir la señal mediante vibración. |
| LEDs | Un diodo emisor de luz. |
| Resistencias | Es un dispositivo cuya función es la de oponerse al paso de corriente eléctrica en un circuito. |
| Cables | es un cable con un conector en cada punta, que se usa normalmente para interconectar entre sí los componentes en una placa de pruebas. |
| ProtoBoard | Es una placa de pruebas en los que se pueden insertar elementos electrónicos y cables con los que se arman circuitos sin la necesidad de soldar ninguno de los componentes. |


## 7. MAPA DE VARIABLES
| **VARIABLE** | **TIPO** | **DESCRIPCIÓN** |
| :---: | :---: | :---: |
| PIN | define | declara al pin 2 como salida del Neopixel|
| red | int | toma un valor entero |
| green| int  | toma un valor entero |
| blue | int | toma un valor entero |
| orange | int | declara al pin 5 como salida del LED |
| yellow | int | declara al pin 4 como salida del LED |
| green | int | declara al pin 3 como salida del LED |
| blue | int | declara al pin 2 como salida del LED |
| sns_IR | int | declara al pin pwm 11 como entrada del Sensor IR |
| pos | int | toma un valor entero |
| led | int | declara el pin 2 como salida del LED |
| motor | int | declara el pin 3 como salida del motor de CC |
| wiper | int | declara el pin A5 como entrada analago del potenciómetro |
| wiperVal | int | almacena el estado del potenciómetro |
| pwm3 | int | rpm del motor mapeado desde la lectura del potenciómetro |
| ledBlnk | int | nivel de luz mapeado desde la lectura del potenciómetro |
| motorV | int | declara al pin 3 como salida del motor de Vibración |


## 8.EXPLICACIÓN DEL CODIGO FUENTE
### Anillo de 12 Neopixeles
En este programa se utilizo la libreria *Adafruit_Neopixel* la cual nos perimite que la elaboración del codigo sea mas sencilla y con menos lineas de codigo. Este programa utiliza un modelo de color RGB (Red, Green, Blue), el cual se muestra un color en el anillo de leds en secuencia es decir que se prende cada Neopixel uno por uno con el mismo color que el programa escogio al azar y al terminar una vuelta, muestra otro color al azar que este dentro de los parametros de RGB que va desde 0 a 255 que define la intensidad del color.

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/leds.png)

### Control Remoto por IR
En este programa se utilizo la libreria *IRremote*, para este ejemplo al momento de aplastar los botones del 1 al 4 se va a encender el LED que se le designo a cada boton, al momento de aplastar el boton un LED, en sensor de IR el cual lee la señal y le manda una señal al arduino indicando que boton fue aplastado, como resultado se va a encender durante un periodo de tiempo y termina apagandose, lo mismo sucede con los otros botones.

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/encendido.png)

### Display LCD
En este programa se utilizó la libreria *LiquidCristal*, en este ejemplo se uso un display LCD de 16x2 el cual siginifica que tiene 16 columnas y 2 filas, lo que se hizo fue iniciar en el punto (16, 2) para que le texto aparazca en la parte superior y para la siguiente fila se uso como punto de inicio el (4, 1). Habiendo establecido nuestros puntos de inicio el texto que mandemos al programa se va a imprimir y se dezplazara a la izquierda hasta que desapareca por completo el texto y volvera a parecer desde el lado derecho.

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/display%20simu.png)

### Microservomotor
En este programa se utilizó la libreria *Servo*. El ejemplo empleado el servomotor parte desde 0  hasta 180 grados en un timepo establecido y va aumentando 1 grado hatsa que llegue a los 180 durante un tiempo establecido, el cual nos permite modificar la velocidad en el que va a llegar a 180, una vez que llego a los 180 grados el servo motor regresa restando 1 grado hasta llegar a 0; si el tiempo defino es corto el servo motor va a llegar al punto establecido en ese lapso y se puede ver que va rapido, mientras si el tiempo es mas largo, se va a demorar en llegar al punto establecido.

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/servosimu.png)

### Motor de CC
Con el uso de un potenciómetro se le va cambiando las revolciones que tiene el motor, para poder evidenciar la velocidad se le implemento un lED, este led parpadea ya sea rapido o lento dependiendo el potenciómetro, el cual es muy útil para poder ver que tan rapido esta yendo el motor de CC

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/revolu.png)

### Motor de Vibración
Para el motor de Vibración se uso un potenciómetro el cual nos servira para modificar la intensidad de vibración del motor.

![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/vibracion.png)
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/motor%20vibra.png)


## 9. DESCRIPCIÓN DE PREREQUISITOS Y CONFIGURACIÓN
Para la simulacion en Tinkercad lo unico que se necesito son las librerias para algunos programs que Tinkercad te ofrece, pero si queremo usar el programa de Arduino hay que revisar que dichas librerias esten instaladas, caso contrario se necesitaran intalarlas para que el porgrama no tenga errores

## 10. APORTACIONES
En las aportacion se hizo uso el Control Remoto IR, su respectivo sensor y un display LCD (16X2), este programa nos decodifica la señal enviada desde el control para que nos aparezca en el display en Hexadecimal la señal que se mando a traves del control, lo mismo sucede con cualquier boton, cada boton tiene una señal única, tambien funciona si usamos otros controles de IR, pero como son distintos nos van a mostrar un codigigo diferente.

## 11. CONCLUSIONES
Se implemento en Thinkercad un programa en Arduino por cada uno de los sensores utilizados en la demostración del programa, en el cual lo principal fue verificar la transmisión de datos desde la tarjeta antes mencionada hasta los periféricos usados en la práctica. 
Se constato que son los motores CC, como se alimentan, tipo de torque que poseen y tipo de velocidades alcanzan. 
Se estudio y entendió el funcionamiento del control remoto por infrarrojo, el cual posee un sensor y un receptor de infrarrojo.
Se observo y aprendió cómo se conecta un microservomotor, la utilización correcta de los distintos pines, que es cada pin, los pines de la señal de reloj, de polarización y de tierra.
Se configuro el LCD, los pines utilizados, como se conectan, cuáles son los pines para regular y alimentar el dispositivo.
Se configuró los leds de un anillo de 12 Neopixeles.


## 12. RECOMENDACIONES
Aunque TinkerCAD es perfecto para principiantes, no significa que aquellos que tienen más experiencia con el modelado 3D no apreciarán este software. Dado que se basa en CSG para crear modelos sólidos, siempre podemos dificultar el modelo agregando más formas. Además, el software permite agregar circuitos electrónicos a los diseños 3D para crear objetos con luz y movimiento. El resultado final incluso se puede simular en el software para verificar cómo responderán los componentes en la vida real. Otra capacidad de TinkerCAD es transformar un diseño 3D en modelos de ladrillo construibles, similar a la creación de legos. Finalmente, para aquellos que aman Minecraft, también incluye la capacidad de crear diseños compatibles con la aplicación.
TinkerCAD se puede utilizar para una gran variedad de aplicaciones, incluida la impresión 3D. Los modelos 3D se pueden guardar en tres formatos diferentes, STL, OBJ y SVG. Una vez que tengamos el archivo STL del modelo, continuaremos utilizando un software de laminado. El software de corte convierte el modelo 3D en una serie de capas delgadas y produce un archivo de código G que contiene instrucciones adaptadas a un tipo específico de impresora. En otras palabras, está dividiendo el objeto en una pila de capas planas y describe estas capas como movimientos lineales del extrusor de la impresora 3D.


## 13. CRONOGRAMA
![](https://github.com/Rafa1104/Trabajo-de-Investigacion-P2/blob/master/img/Cronogrma.png)


## 14. BIBLIOGRAFIA
- Arduino, S. A. (2015). Arduino. Arduino LLC.
- Badamasi, Y. A. (2014, September). The working principle of an Arduino. In 2014 11th international conference on electronics, computer and computation (ICECCO) (pp. 1-4). IEEE.
- Diferencias entre Control Remoto IR vs RF. (s. f.). LEDBOX. Recuperado 20 de julio de 2020, de https://blog.ledbox.es/noticias-y-novedades/curiosidades-led/diferencias-entre-control-remoto-ir-vs-rf#:~:text=El%20control%20remoto%20IR%20(infrarrojos,de%20impulsos%20de%20luz%20infrarroja.
- Dehara, Z. (2016, 2 abril). Tutorial de NeoPixel con Arduino. – T-Bem. TESLA BEM. https://teslabem.com/arduino/tutorial-de-neopixel-con-arduino/
- Introducción a las LCD. (s. f.). 5Hertz Electrónica. Recuperado 20 de julio de 2020, de https://www.5hertz.com/index.php?route=tutoriales/tutorial&tutorial_id=9
- J. (2014, 24 marzo). Caracteristicas de los Pines de la LCD 16X2. Jovanna Yepez. https://jovannayepez.wordpress.com/2014/03/24/caracteristicas-de-los-pines-de-la-lcd-16x2/
- González, A. G. (2016, 4 diciembre). ¿Qué es y cómo funciona un servomotor? Panama Hitek. http://panamahitek.com/que-es-y-como-funciona-un-servomotor/#:%7E:text=Un%20servomotor%20es%20un%20tipo,mantenerse%20fijo%20en%20una%20posici%C3%B3n.
- J. (2016, 18 diciembre). Sensores y Actuadores. Aprendiendo Arduino. https://aprendiendoarduino.wordpress.com/2016/12/18/sensores-y-actuadores/

