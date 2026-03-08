# API Reference

Welcome to the LeviLamina API Reference. This section provides detailed documentation for every module under `ll/api`, including class descriptions, method signatures, usage examples, and platform notes.

## Module Overview

LeviLamina's API is organized into the following modules:

### Foundation

| Module | Description | Scope |
|--------|-------------|-------|
| [Base](base.md) | Fundamental types, macros, concepts, and metaprogramming utilities | Common |
| [Expected](expected.md) | Error handling with `Expected<T>` and `Error` types | Common |
| [Config](config.md) | Configuration loading and saving with JSON serialization | Common |
| [Reflection](reflection.md) | Compile-time reflection, serialization, and deserialization | Common |

### Core Systems

| Module | Description | Scope |
|--------|-------------|-------|
| [Mod](mod.md) | Mod lifecycle management, manifest, and mod manager | Common |
| [Event](event.md) | Event bus, listeners, and built-in events (player, world, entity, server, client) | Common / Server / Client |
| [Command](command.md) | Command registration, overloads, enums, and execution | Common |
| [Service](service.md) | Service registration, discovery, and Bedrock engine accessors | Common / Server / Client |
| [Form](form.md) | Interactive UI forms (Simple, Modal, Custom) | Common |

### I/O & Logging

| Module | Description | Scope |
|--------|-------------|-------|
| [IO & Logger](io.md) | Logger, sinks, formatters, and file utilities | Common |
| [I18n](i18n.md) | Internationalization and localization support | Common |

### Async & Threading

| Module | Description | Scope |
|--------|-------------|-------|
| [Coroutine](coro.md) | Coroutine tasks, generators, executors, and async/await | Common |
| [Thread](thread.md) | Thread pool, server thread executor, and synchronization | Common |
| [Chrono](chrono.md) | Game tick clock, server clock, and time utilities | Common |

### Data & Utilities

| Module | Description | Scope |
|--------|-------------|-------|
| [Data](data.md) | Key-value database, dependency graph, version, and containers | Common |
| [Utils](utils.md) | System, string, hash, random, file, base64, and error utilities | Common |

### Low-Level

| Module | Description | Scope |
|--------|-------------|-------|
| [Memory & Hook](memory.md) | Memory manipulation, function hooking, and signatures | Common |
| [Network](network.md) | Custom packet registration and handling | Common |

### Client-Only

| Module | Description | Scope |
|--------|-------------|-------|
| [Input](input.md) | Keyboard/mouse input binding and input events | Client Only |

## Scope Legend

- **Common** — Available in both server and client builds. Headers located in `src/ll/api/`.
- **Server** — Server-specific extensions. Headers located in `src-server/ll/api/`.
- **Client** — Client-specific extensions. Headers located in `src-client/ll/api/`.

## Conventions

All code examples in this reference:

- Include the necessary `#include` directives
- Use fully qualified namespaces on first mention
- Are compilable with C++20 and the LeviLamina build environment
- Use `LLAPI` / `LLNDAPI` macros for exported functions (see [Base](base.md) for details)
