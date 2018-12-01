# Motorsteuerung
Mit diesem Code lässt sich ein Motor mithilfe eines Arduinos und einer sogenannten H-Bridge [L293D] (Nicht Wasserstoffbrücke :wink:) steuern.

## Konsolenbefehle:
- speed: Erlaubt es die Geschwindigkeit in einem Bereich von 0 - 255 zu ändern.

- mode : Erlaubt es den Modus in einem Bereich von 0 - 2 zu ändern.

| Modus  | outputOne | outputTwo|
| ------ |:---------:| --------:|
| 0      | LOW       | LOW      |
| 1      | LOW       | HIGH     |
| 2      | HIGH      | LOW      |

## Aufbau der Schaltung:

![image](https://github.com/JackboyPlay/Motorsteuerung/blob/master/Schaltung.png)
