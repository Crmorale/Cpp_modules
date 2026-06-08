# ex03 — Intern + Factory

Descripción
- Implementación de la clase `Intern` que actúa como fábrica de formularios (`makeForm`).

Qué se ha hecho
- `Intern::makeForm(const std::string &name, const std::string &target)` devuelve un puntero a `AForm` creado dinámicamente (o `NULL` si el nombre no existe).
- Se reutilizan las forms de `ex02` (Shrubbery, Robotomy, Presidential).
- `main.cpp` prueba la creación mediante `Intern`, manejo de formularios devueltos y casos de nombre inválido.

Conceptos trabajados
- Patrón Factory (creación encapsulada de objetos según un identificador).
- Gestión de memoria dinámica (`new` / `delete`) y responsabilidad de liberar recursos.
- Polimorfismo con punteros a `AForm` y uso seguro al comprobar `NULL`.
- Buenas prácticas: informar cuando un `Intern` no reconoce el tipo de formulario.

Cómo compilar y ejecutar
1. `cd ex03`
2. `make`
3. Ejecutable: `./intern`

Notas
- Asegúrate de eliminar (`delete`) cualquier `AForm*` devuelto por `Intern::makeForm` para evitar fugas.
- Si quieres, puedo convertir `makeForm` para devolver `std::unique_ptr<AForm>` (C++11/14+), pero la evaluación pide C++98.
