# ex00 — Bureaucrat

Descripción
- Implementación de la clase `Bureaucrat` y un `main` de pruebas.

Qué se ha hecho
- Constructores (por defecto, parametrizado, copia), operador= y destructor.
- Gestión de `grade` con `incrementGrade()` y `decrementGrade()`.
- Excepciones: `GradeTooHighException` y `GradeTooLowException` (sobrescriben `what()`).
- Sobrecarga de `operator<<` para salida legible.

Conceptos trabajados
- Encapsulación y miembros `const`.
- Excepciones en C++ y su uso en validaciones de invariantes.
- Control de errores con `throw`/`catch`.

Cómo compilar y ejecutar
1. Entrar en el directorio: `cd ex00`
2. `make`
3. Ejecutable: `./bureaucrat`

Notas
- Revisa mensajes de excepción y límites (1..150). Asegúrate de no modificar la semántica para la evaluación.
