# ACTUADORES

## 1. PLANTEAMIENTO
Trabajar con los diferentes dispositivos que nos ofrece la plataforma Thinkercad como un motor de corriente continua, control remoto por infrarrojo, servomotor, motor de vibración, LCD y un anillo de 12 neopixeles los cuales deberán ser implementados en un programa que nos demuestre su funcionamiento mediante una simulación de los mismos.


## 2. OBJETIVOS
### **Objetivo General**
Implementar en Thinkercad un programa en Arduino (para comprender el funcionamiento de actuadores básicos)por cada uno de los sensores utilizados en la demostración del programa, en el cual lo principal es verificar la transmisión de datos desde la tarjeta antes mencionada hasta los periféricos usados en la práctica.

### **Objetivos específicos**
-	Constatar que son los motores CC, como se alimentan, tipo de torque que poseen y tipo de velocidades alcanzan. 
-	Estudiar el funcionamiento del control remoto por infrarrojo, el cual posee un sensor y un receptor de infrarrojo.
-	Observar como se conecta un microservomotor, la utilización correcta de los distintos pines, que es cada pin, los pines de la señal de reloj, de polarización y de tierra.
-	Comparar el motor de vibración con el motor CC los cuales son muy parecidos en su funcionamiento solo de encendido y apagado
-	Configurar el LCD, los pines utilizados, cuales son los pines para regular y alimentar el dispositivo.
# ***-	Instalar un anillo de 12 neopixeles que básicamente es una matriz de leds.***


## 3. ESTADO DEL ARTE
Los controles clásicos PI, PD y PID han sido estudiados por Madill y Wang (1998), Reynaerts y Van Brussel (1991) e Ikuta et al. (1988). Específicamente, Ikuta et al. (1988) usaron un sistema de control PID con una señal de salida PWM (modulada por ancho de pulso).
Hirose diseñó un actuador que empleaba una configuración de los elementos SMA llamada ‘’array’’. En esta configuración los elementos activos, que consisten en un conjunto de muelles helicoidales, están conectados eléctricamente en serie. Estos muelles trabajan mecánicamente en paralelo contra un pistón móvil. La configuración ‘’array’’ fue utilizada por Ikuta en el desarrollo de un servomotor basado en el uso de SMAs. Este sistema usa la resistencia eléctrica como realimentación para controlarlo ya que esta varía con el porcentaje de austenita en la aleación, y por tanto varía con la temperatura. Con este servomotor se fabricó un endoscopio activo. El uso de la propia resistencia del cable para la realimentación, no es viable. La variación de la resistencia con la deformación del material no es lineal y no permite un control preciso. Así lo demuestra en un estudio de la universidad politécnica de Valencia.
Luego, Troisfontaine et al. en 1997 estudiaron un controlador PI que incluía una realimentación de temperatura. En ese mismo año, Grant y Hayward, usando un control de estructura variable (VSC) con modulación discreta de corriente, controlaron un par de actuadores de nitinol antagonistas compuestos por múltiples fibras organizadas en un patrón helicoidal, de tal manera que se lograra superar los límites Estudio e implementación de actuadores basados en aleaciones SMA de deformación de las fibras de nitinol y su velocidad de actuación. El control usaba la señal de realimentación para corregir el error de desplazamiento, y ajustar el valor de la corriente según la posición. Así lograron diseñar un control preciso con una baja complejidad relativa.
Kuribayashi diseñó un actuador formado por dos alambres de Nitinol. Para este sistema desarrolló un modelo matemático tanto del mecanismo de actuación como del sistema de control y demostró la validez de estos modelos con una serie de pruebas experimentales.


## 4. MARCO TEORIÓCO
### Arduino
Arduino es una plataforma de hardware de código abierto, basada en una placa de circuito impreso que contiene un microcontrolador de marca ATMEL que cuenta con entradas y salidas, analógicas y digitales, en un entorno de desarrollo que está basado en el lenguaje de programación procesing. El dispositivo conecta el mundo físico con el mundo virtual, o el mundo analógico con el digital controlando, sensores, alarmas, sistemas de luces, motores, y actuadores. (Tapia & Manzano, 2013)

Hay muchas otros microcontroladores y plataformas disponibles para la computación física donde las funcionalidades y herramientas son muy complicadas de programar, Arduino simplifica el proceso de trabajar con microcontroladores, ofrece algunas ventajas y características respecto a otros sistemas. (Tapia & Manzano, 2013)

### Tinkercad
# imagen
[*Tinkercard*](https://www.tinkercad.com/) es una colección gratuita en línea de herramientas de software que ayudan a las personas de todo el mundo a pensar, crear y crear. Somos la introducción ideal a Autodesk, el líder en diseño 3D, ingeniería y software de entretenimiento.

### Anillo de 12 Neopixeles

# anillos

Los tecnología NeoPixel nos permite enlazar multitud LEDs RGB y controlarlos con un solo cable de datos, ahorrándonos multitud de cables y simplificando la instalación.

LEDs RGB (rojo, verde y azul) están integrados junto con un chip driver en una pequeña superficie a través de un cable. NeoPixel viene de diferentes formas y tamaño, en esta ocasión nos enfocaremos en el aro de 12 Leds.

NeoPixels no se iluminan por si solos, necesitan de un microcontrolador para que estos funcionen. En este tutorial usaremos código en Arduino para empezar con NeoPixel, una vez que nos familiaricemos con el código podemos crear nuestros propios efectos y animaciones.

Como nota importante NeoPixels funciona para la mayoría de microcontroladores pero se le dificulta cuando trabaja con plataformas como Raspberry Pi, pues la señal de control es muy estricta.

Para controlar cada uno de LEDs tendremos que usar biblioteca específica de Adafruit.

### Control remoto por IR

# img

El control remoto IR (infrarrojos) o mando a distancia de infrarrojos funciona emitiendo pulsos de luz infrarroja (por debajo del visible). La señal infrarroja transmite el código correspondiente al botón del mando a distancia pulsado al dispositivo en forma de una serie de impulsos de luz infrarroja. El receptor recibe la serie de impulsos de infrarrojos y los pasa a un procesador que descodifica y activarán una determinada función del dispositivo.

Este tipo de de señal tiene muy poco alcance, apenas unos metros, comparada con la señal de radiofrecuencia. Es muy «direccional», es decir, es necesario que el emisor de la señal infrarroja apunte el receptor. Si la señal es muy débil, falta de batería en el mando, podemos ver que  es  muy necesario apuntar directamente e incluso acercarse al receptor. 

Los obstáculos entre el mando y el receptor incluyen mucho en la señal, no llegará a su destino. Esto seguro que has probado con el mando a distancia de la televisión, cuando alguien se pone entre el mando y la televisión no llega la señal.

Podemos concluir con los mandos a distancia por infrarrojos son buenos para los casos que tengamos un solo dispositivo ya que no abre tanto la señal que emite como para alcanzar varios dispositivos. 

### Display LCD

# img lcd

Las siglas LCD significan “Liquid Cristal Display” ó pantalla de cristal líquido. Es una pantalla plana basada en el uso de una sustancia liquida atrapada entre dos placas de vidrio, haciendo pasar por este una corriente eléctrica a una zona especifica, para que así esta se vuelva opaca, y además cuenta (generalmente) con iluminación trasera.

Las pantallas LCD de color, cada pixel individual se divide en tres cédulas o sub pixeles con los colores RGB (Rojo, Verde y Azul) respectivamente. Y así cada pixel puede controlarse para  producir una gran variedad de colores distintos.

Estos displays se controlan muy facilmente con una placa Arduino o un PIC y muy pocas lineas de código. Acontinuación sus pines para su conexión:

# imagenes

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
# micro serv
Un servomotor es un tipo especial de motor que permite controlar la posición del eje en un momento dado. Esta diseñado para moverse determinada cantidad de grados y luego mantenerse fijo en una posición

Un servomotor (o servo) es un tipo especial de motor con características especiales de control de posición. Al hablar de un servomotor se hace referencia a un sistema compuesto por componentes electromecánicos y electrónicos.

# img servo

El motor en el interior de un servomotor es un motor DC común y corriente. El eje del motor se acopla a una caja de engranajes similar a una transmisión. Esto se hace para potenciar el torque del motor y permitir mantener una posición fija cuando se requiera. De forma similar a un automóvil, a menor mayor velocidad, menor torque. El circuito electrónico es el encargado de manejar el movimiento y la posición del motor.

# img servo 2

La presencia del sistema de engranajes como el que se muestra en la figura hace que cuando movemos el eje motor se sienta una inercia muy superior a la de un motor común y corriente. Observando las imágenes que hemos presentado nos podemos dar cuenta que un servo no es un motor como tal, sino un conjunto de partes (incluyendo un motor) que forman un sistema

**Funcionamiento:**
Los servomotores poseen tres cables, a diferencia de los motores comunes que sólo tienen dos. Estos tres cables casi siempre tienen los mismos colores, por lo que son fácilmente reconocibles.

# img colo

Colores comunes de los cables de un servomotor
Los colores dependerán del fabricante, pero difícilmente nos equivocaremos a la hora de reconocer los terminales del un servo.  La necesidad de una señal de control para el funcionamiento de este tipo de motores hace que sea imposible utilizarlos sin un circuito de control adecuado. Esto se debe a que para que el circuito de control interno funcione, es necesaria una señal de control modulada. Para esto se utiliza modulación por ancho de pulsos, es decir, PWM.

# img diag

El diagrama de bloque del servomotor representa de forma visual el servomotor como un sistema. El circuito electrónico es el encargado de recibir la señal PWM y traducirla en movimiento del Motor DC. El eje del motor DC está acoplado a un potenciómetro, el cual permite formar un divisor de voltaje. El voltaje en la salida del divisor varía en función de la posición del eje del motor DC.

### Motor de CC
# cc
El motor de corriente continua (motor DC) es una máquina que convierte la energía eléctrica en mecánica, provocando un movimiento rotatorio. En algunas modificaciones, ejercen tracción sobre un riel. Estos motores se conocen como motores lineales.

Una máquina de corriente continua (generador o motor) se compone principalmente de dos partes, un estator que da soporte mecánico al aparato y tiene un hueco en el centro generalmente de forma cilíndrica. En el estator además se encuentran los polos, que pueden ser de imanes permanentes o devanados con hilo de cobre sobre núcleo de hierro. El rotor es generalmente de forma cilíndrica, también devanado y con núcleo, al que llega la corriente mediante dos escobillas.

**Partes de un motor de corriente directa:**

# img cc partes

**Funcionamiento**

Se basa en la repulsión que ejercen los polos magnéticos de un imán permanente de acuerdo con la Ley de Lorentz, interactúan con los polos magnéticos de un electroimán que se encuentra montado en el rotor.

Cuando la corriente eléctrica circula por la bobina de este electroimán giratorio, el campo electromagnético que se genera interactúa con el campo magnético del imán permanente o devanado. Si los polos del imán permanente o devanado y los polos del electroimán giratorio coinciden, se produce un rechazo y un torque magnético (par de fuerza que provoca que el rotor rompa la inercia y comience a girar sobre su eje) en sentido a la forma que se encuentre conectado el motor al circuito o la pila.

**CURVA TORQUE - VELOCIDAD**
La siguiente gráfica es una representación de los torques que un motor puede proporcionar a diferentes velocidades a los voltajes nominales.

# im cc tor

Para un dado torque proporcionado por el motor, se puede utilizar la curva corriente-torque para determinar la corriente requerida cuando se le aplica el voltaje nominal al motor.

Como regla general, los motores generan grandes torques a baja velocidad, y grandes torques implican una demanda mayor de corriente por parte del motor.

**El torque de arranque o torque crítico (Ts):** Es el torque máximo que puede proporcionar un motor a velocidad cero, asociado con el arranque o sobrecarga del motor.
**La velocidad de no carga (WMáx):** Es la máxima velocidad sostenida que puede lograr el motor. Esta velocidad sólo se puede lograr cuando no se aplica carga o torque al motor.

### Motor de vibración
# img mv


## 5. DIAGRAMAS
- Diagramas de bloques.
- Diagramas UML...(casos de uso-clase)
- Diagramas eléctricos.
- Diagramas esquemáticos.


## 6. LISTA DE COMPONENTES
| **COMPONENTE** | **DESCRIPCIÓN** |
| :---: | :---: |
| Computadora | Puede tener cualquier Sistema Operativo |
| Internet | Simluación de Arduino con *Tinkercad* |
| Arduino UNO | Es una placa electrónica basada en el microcontrolador ATmega328. Cuenta con 14 entradas/salidas digitales, de las cuales 6 se pueden utilizar como salidas PWM (Modulación por ancho de pulsos) y otras 6 son entradas analógicas. Además, incluye un resonador cerámico de 16 MHz, un conector USB, un conector de alimentación, una cabecera ICSP y un botón de reseteado. |
| Anillo de 12 Neopixeles | |
| Control Remoto por IR | |
| Sensor IR | |
| Display LCD | Es una pantalla delgada y plana formada por un número de píxeles en color o monocromos colocados delante de una fuente de luz o reflectora. |
| Micro Servomotor| |
| Motor de CC |  |
| Potenciómetro | Es un resistor eléctrico con un valor de resistencia variable y generalmente ajustable manualmente. |
| Motor de Vibración |  |
| LEDs | Un diodo emisor de luz. |
| Resistencias | Es un dispositivo cuya función es la de oponerse al paso de corriente eléctrica en un circuito. |
| Cables | es un cable con un conector en cada punta, que se usa normalmente para interconectar entre sí los componentes en una placa de pruebas. |
| ProtoBoard | Es una placa de pruebas en los que se pueden insertar elementos electrónicos y cables con los que se arman circuitos sin la necesidad de soldar ninguno de los componentes. |



## 7. MAPA DE VARIABLES


## 8.EXPLICACIÓN DEL CODIGO FUENTE


## 9. DESCRIPCIÓN DE PREREQUISITOS Y CONFIGURACIÓN


## 10. APORTACIONES


## 11. CONCLUSIONES
- Se implemento en Thinkercad un programa en Arduino por cada uno de los sensores utilizados en la demostración del programa, en el cual lo principal fue verificar la transmisión de datos desde la tarjeta antes mencionada hasta los periféricos usados en la práctica. 
- Se constato que son los motores CC, como se alimentan, tipo de torque que poseen y tipo de velocidades alcanzan. 
- Se estudio y entendió el funcionamiento del control remoto por infrarrojo, el cual posee un sensor y un receptor de infrarrojo.
- Se observo y aprendió cómo se conecta un microservomotor, la utilización correcta de los distintos pines, que es cada pin, los pines de la señal de reloj, de polarización y de tierra.
- Se comparo el motor de vibración con el motor CC los cuales son muy parecidos en su funcionamiento solo de encendido y apagado
- Se configuro el LCD, los pines utilizados, como se conectan, la configuración de 4 bytes, 8 bytes, cuáles son los pines para regular y alimentar el dispositivo.
# *- Se instalo un anillo de 12 neopixeles que básicamente es una matriz de leds.*


## 12. RECOMENDACIONES
Aunque TinkerCAD es perfecto para principiantes, no significa que aquellos que tienen más experiencia con el modelado 3D no apreciarán este software. Dado que se basa en CSG para crear modelos sólidos, siempre podemos dificultar el modelo agregando más formas. Además, el software permite agregar circuitos electrónicos a los diseños 3D para crear objetos con luz y movimiento. El resultado final incluso se puede simular en el software para verificar cómo responderán los componentes en la vida real. Otra capacidad de TinkerCAD es transformar un diseño 3D en modelos de ladrillo construibles, similar a la creación de legos. Finalmente, para aquellos que aman Minecraft, también incluye la capacidad de crear diseños compatibles con la aplicación.
TinkerCAD se puede utilizar para una gran variedad de aplicaciones, incluida la impresión 3D. Los modelos 3D se pueden guardar en tres formatos diferentes, STL, OBJ y SVG. Una vez que tengamos el archivo STL del modelo, continuaremos utilizando un software de laminado. El software de corte convierte el modelo 3D en una serie de capas delgadas y produce un archivo de código G que contiene instrucciones adaptadas a un tipo específico de impresora. En otras palabras, está dividiendo el objeto en una pila de capas planas y describe estas capas como movimientos lineales del extrusor de la impresora 3D.


## 13. CRONOGRAMA


## 14. BIBLIOGRAFIA
- Arduino, S. A. (2015). Arduino. Arduino LLC.
- Badamasi, Y. A. (2014, September). The working principle of an Arduino. In 2014 11th international conference on electronics, computer and computation (ICECCO) (pp. 1-4). IEEE.

