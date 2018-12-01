# Motorsteuerung
Mit diesem Code lässt sich ein Motor mithilfe eines Arduinos und einer sogenannten H-Bridge [L293D] (Nicht Wasserstoffbrücke :wink:) steuern.

## Konsolenbefehle:
- speed: Erlaubt es die Geschwindigkeit in einem Bereich von 0 - 255 zu ändern.
         Hierbei ist 0 ein Ausschalten des Motors und 255 eine Verdoppelung der Drehgeschwindigkeit, was daran liegt, dass der        Startwert 128 ist.

- mode : Erlaubt es den Modus in einem Bereich von 0 - 2 zu ändern.

| Modus  | outputOne | outputTwo|
| ------ |:---------:| --------:|
| 0      | LOW       | LOW      |
| 1      | LOW       | HIGH     |
| 2      | HIGH      | LOW      |

## Aufbau der Schaltung:

![image](https://github.com/JackboyPlay/Motorsteuerung/blob/master/Schaltung.png)

Rote Kabel: Liefern eine Spannung beziehungsweise einen Strom.
Türkise Kabel: Verbunden mit der Masse (Potenzial 0V).
Lila Kabel: Verbindung zwischen dem Motor und der H-Bridge. (Signalübermittlung)
Rosa Kabel: Verbindung zwischen dem Arduino und der H-Bridge. (Signalübermittlung)
Grüne Kabel: Spannung, welche die Geschwindigkeit des Motors vorgibt.
