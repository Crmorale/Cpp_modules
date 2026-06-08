# ex02 — AForm (abstract) y Forms derivadas

Descripción
- Refactorización de `Form` a `AForm` (clase abstracta) y creación de tres formularios derivados:
  - `ShrubberyCreationForm`
  - `RobotomyRequestForm`
  - `PresidentialPardonForm`

Qué se ha hecho
- `AForm` define interfaz común: `beSigned()` y `execute()` además de las excepciones y getters.
- Cada form implementa `executeAction()` (método protegido virtual puro en `AForm`):
  - `ShrubberyCreationForm`: escribe un árbol ASCII en `<target>_shrubbery` (I/O en ficheros).
  - `RobotomyRequestForm`: simula robotomización (mensajes aleatorios de éxito/fracaso).
  - `PresidentialPardonForm`: imprime mensaje de indulto.
- `main.cpp` de pruebas: crea forms, intenta firmar con burócratas de distintos grados y ejecutarlos.

Conceptos trabajados
- Herencia y polimorfismo (métodos virtuales y clase abstracta).
- Separación de interfaz (`AForm`) y comportamiento específico (forms derivadas).
- Manejo de ficheros (`std::ofstream`) y operaciones I/O.
- Gestión de errores en tiempo de ejecución y excepciones en `execute()`.

Cómo compilar y ejecutar
1. `cd ex02`
2. `make`
3. Ejecutable: `./aform`

Notas
- Revisa permisos de escritura para `ShrubberyCreationForm` (crea archivos en el directorio actual).
- Asegúrate de que `execute()` lanza `FormNotSignedException` si no está firmado y `GradeTooLowException` si el ejecutor tiene grado insuficiente.
