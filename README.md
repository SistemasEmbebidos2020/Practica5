# Practica5 :white_check_mark:
# EEPROM.ino 
## El comando EEPROM.put es una variante del comando EEPROM.write
Su ventaja es que únicamente escribe el dato en esa dirección si es un dato diferente al ya existente en dicha dirección.

## El comando EEPROM.get es una variante del comando EEPROM.read
Su ventaja es que puede mostrar los datos almacenado desde ese espacio de memoria hasta acabar la cadena de caracteres en caso de serlo,
sin importar el tamaño, la función get calcula el tamaño.

:anger:
**Nunca colocar las funciones read, write, get o put en un loop infinito, ya que podría
rápidamente llegar al límite de veces que admite la memoria EEPROM**

# Flashmemory.c

la memoria FLASH es para almacenar el
código fuente, también se le puede dar uso para almacenar valores siempre y
cuando sean valores constantes.

# CLONE
- git status
- git clone https://github.com/SistemasEmbebidos2020/Practica5.git
