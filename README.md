# Test Proyecto SSOO

Plantilla de proyecto que vamos a usar para el TP de Sistemas Operativos

## 🐳 Entorno de Desarrollo

Este proyecto está diseñado específicamente para ser compilado y
ejecutado en **Linux Ubuntu**.

El entorno oficial utiliza:

-   Un **Dev Container** basado en una imagen de Ubuntu.
-   Un script `setup.sh` que prepara el entorno automáticamente.

El Dev Container ejecuta `setup.sh` al iniciarse y deja el sistema listo
para compilar.

Si no se utiliza el Dev Container, el entorno puede prepararse
manualmente en:

- WSL
- Máquina Virtual
- Ubuntu Nativo

Ejecutando:

```bash
./setup.sh
```

## Preparar el Dev Container

Se necesita tener Docker instalado

Si estás en Windows se necesita instalar:
- WSL
- Una distribución de Linux (Ubuntu es la más popular)
- Docker Desktop

Luego se tiene configurar Docker Desktop para que use la distribución de Linux instalada

También se necesita tener instalada la extensión de Visual Studio Code llamada:
```bash
ms-vscode-remote.remote-containers
```

## 🏗 Comandos Disponibles

<table>
    <thead>
        <tr>
            <th>
                Comando
            </th>
            <th>
                Descripción
            </th>
            <th>
                Ejecutable generado
            </th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>
                <code>make</code>
            </td>
            <td>
                Compila en modo debug (por defecto)
            </td>
            <td>
                <code>bin/TestProyectoSSOO</code>
            </td>
        </tr>
        <tr>
            <td>
                <code>make debug</code>
            </td>
            <td>
                Compila en modo debug
            </td>
            <td>
                <code>bin/TestProyectoSSOO</code>
            </td>
        </tr>
        <tr>
            <td>
                <code>make release</code>
            </td>
            <td>
                Compila en modo release optimizado
            </td>
            <td>
                <code>bin/TestProyectoSSOO</code>
            </td>
        </tr>
        <tr>
            <td>
                <code>make test</code>
            </td>
            <td>
                Compila los tests del proyecto
            </td>
            <td>
                <code>bin/TestProyectoSSOO_tests</code>
            </td>
        </tr>
        <tr>
            <td>
                <code>make clean</code>
            </td>
            <td>
                Elimina los archivos generados (<code>obj/</code> y <code>bin/</code>)
            </td>
            <td>
                ---
            </td>
        </tr>
        <tr>
            <td>
                <code>make format</code>
            </td>
            <td>
                Formatea el código con <code>clang-format</code> (estilo Google)
            </td>
            <td>
                ---
            </td>
        </tr>
    </tbody>
</table>


## Debug desde Visual Studio Code

Para importar el proyecto en Visual Studio Code, alcanza con abrir la carpeta
del proyecto. Luego, se puede compilar y ejecutar moviéndonos a la pestaña de
"Run and Debug" y seleccionando "run":

![vscode-run-debug](https://github.com/sisoputnfrba/c-base-project/assets/39303639/d83bf45a-d32e-4762-bdc2-57854dc13926)

## Guías útiles

- [Cómo interpretar errores de compilación](https://docs.utnso.com.ar/primeros-pasos/primer-proyecto-c#errores-de-compilacion)
- [Cómo utilizar el debugger](https://docs.utnso.com.ar/guias/herramientas/debugger)
- [Cómo configuramos Visual Studio Code](https://docs.utnso.com.ar/guias/herramientas/code)
