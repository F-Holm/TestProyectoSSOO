# Guía de Contribución

Como colaborador directo, sigue estas pautas para mantener la integridad y consistencia del proyecto.

---

## 🛠️ Convenciones de Código
Seguimos la **Google C++ Style Guide** adaptada a C. El formato (espacios, llaves, indentación) se gestiona automáticamente vía `clang-format`, por lo que solo debes enfocarte en la nomenclatura:

### Nomenclatura (Naming)
| Elemento | Formato | Ejemplo |
| :--- | :--- | :--- |
| **Archivos** | Minúsculas y guiones bajos | `data_parser.c` |
| **Tipos (structs, typedefs)** | PascalCase | `UserSession` |
| **Variables** | snake_case | `retry_count` |
| **Funciones** | PascalCase | `InitializeModule()` |
| **Macros / Constantes** | MAYÚSCULAS | `MAX_LENGTH` |

Para más información, acá está la [guia de estilo compleata de Google para C++](https://google.github.io/styleguide/cppguide.html)

> **Nota:** Los miembros de una estructura (campos) deben usar `snake_case` al igual que las variables comunes.

### Orden específico de includes

En un archivo como:

    dir/archivo.cc

que implementa o testea:

    dir2/archivo.h

El orden debe ser:

1.  `dir2/archivo.h`
2.  Línea en blanco
3.  Headers C del sistema y otros headers con extensión `.h` incluidos
    con `<>`
4.  Línea en blanco
5.  Headers `.h` de otras librerías (commons)
6.  Línea en blanco
7.  Headers `.h` del propio proyecto

Dentro de cada sección, los includes deben ordenarse
**alfabéticamente**.

### Ejemplo completo de includes

```cpp
#include "foo/server/fooserver.h"

#include <sys/types.h>
#include <unistd.h>

#include <commons/txt.h>

#include "foo/server/db.h"
```

---

## 📑 Mensajes de Commit
Adoptamos **Conventional Commits** especificando obligatoriamente el área o módulo afectado entre paréntesis.

### Formato
`<tipo>(<módulo>): <descripción corta en minúsculas>`

### Tipos de Commit
| Tipo | Categoría | Descripción |
| :--- | :--- | :--- |
| `feat` | Features | Nueva funcionalidad |
| `fix` | Bug Fixes | Corrección de un error |
| `perf` | Performance | Mejoras de rendimiento |
| `refactor` | Refactoring | Cambios que no añaden funciones ni arreglan bugs |
| `test` | Tests | Añadir o modificar pruebas |
| `docs` | Documentation | README, comentarios, guías |
| `build` | Build System | CMake, dependencias, toolchains |
| `ci` | CI/CD | GitHub Actions, pipelines |
| `style` | Formatting | Cambios de formato que no afectan la lógica |
| `chore` | Maintenance | Limpieza, scripts, herramientas de desarrollo |

**Ejemplo:** `fix(core/crypto): fix memory leak in SecureClear`

---

## 🚀 Flujo de Trabajo
1. **Ramas:** Crea una rama descriptiva: `git checkout -b feature/login-system`.
2. **Calidad:** El código debe compilar sin advertencias (`-Wall -Werror`).
3. **Revisión:** Sube tus cambios y solicita una revisión de otro colaborador en el Pull Request antes de integrar a `main`.
