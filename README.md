# Velmora Game Engine

## Overview

This is a high-performance game engine written in C with Vulkan, designed for flexibility, modularity, and real-time code iteration. The project is still in its early stages and is not yet feature-complete. The engine consists of a lightweight core DLL that can be leveraged by both the included Editor and the Test Bed executable, allowing developers to preview real-time code changes dynamically.

## Features

**Note:** These features are **planned** and not yet fully implemented.

- **Lightweight Build System** – Minimal dependencies for ease of compilation and deployment.
- **Low-Level Utilities** – Dynamic arrays, string handling, and other essential utilities.
- **Platform Layer Abstraction** – Handles windowing, input, and console interactions across different operating systems.
- **Logger** – Supports both file-based and console logging for debugging and analysis.
- **File I/O** – Efficient handling of file operations.
- **Application Layer** – Implements the main game loop for structured execution.
- **Renderer (API Abstraction)** – Vulkan-based rendering with potential future support for other APIs.
- **Physics System** – Core physics calculations and integrations.
- **Memory Management** – Custom allocation strategies for efficient memory usage.
- **Scenegraph** – Hierarchical scene management system.
- **Profiling** – Integrated performance monitoring tools.
- **High-Level Scripting** – Enables hot-swapping of code at runtime to iterate quickly.

## Components

### **Editor**

The engine ships with an **Editor**, allowing real-time scene editing, asset management, and debugging tools.

### **Test Bed**

A separate **Test Bed** executable is included to view real-time code changes, enabling quick iteration and debugging.

### **Core Engine (DLL)**

The engine is designed as a **DLL**, allowing for modular integration into both the **Editor** and **Test Bed** while enabling runtime code hot-swapping.

## Build Instructions

### **Prerequisites**

- Clang/GCC
- Vulkan SDK
- Visual Studio Code

### **Building the Engine**

1. Clone the repository:
   ```sh
   git clone <repository_url>
   cd <repository_name>
   ```
2. Compile the engine:
   ```sh
   build-all.bat
   ```

### **Running the Test Bed**

Once built, you can run the test bed application to verify real-time changes:

```sh
./bin/testbed.exe
```

## Contributing

Contributions are closed at this time! Please feel free to fork the repository for your own use

## License

This project is licensed under Apache License 2.0. Please see LICENSE for more information.

## Contact

For inquiries and support, please contact renegadeactual on discord. Or make a new issue here on the Github!

