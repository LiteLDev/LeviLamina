# 📋 LLSE - Multi development Language Support

## 🌏 Current Status

With the support of the [ScriptX](https://github.com/Tencent/ScriptX) project, LLSE adapts to multiple development languages using the same set of source code.    
At the same time, the API remains consistent, allowing various languages to share the same development document. It greatly reducing maintenance difficulties.

Currently, LLSE supports writing plugins in the following languages：

| Language backend | Remarks                                                      |
| ---------------- | ------------------------------------------------------------ |
| `JavaScript`     | Using QuickJs engine, with support for ES Modules            |
| `Lua`            | Using CLua engine                                            |
| `NodeJs`         | Modify NodeJs to work with embedding, with support for npm package management |
| `Python`（WIP）  | Using CPython engine, with support for pip package management |

> [!INFO]
>
> If you need to write plugins in compiled languages such as C++, GoLang, .NET, etc., please go to [Home](zh_CN/) for other language documentation

## JavaScript language support description

- Support for simple Javascript plugins using the QuickJs engine, a lightweight engine with a low resource footprint
- The current version of QuickJs supports up to ES2020, and natively supports ES Modules which allows developers to easily manage projects.
- Package management is not yet supported. If needed, you can use NodeJs for plugin development and use npm for package management

## Lua language support description

- Use the CLua engine, support require
- Since the Rocks package management mechanism requires the introduction of a compiler, the implementation is not available at this time. If you need to depend on extensions, you can compile them manually and introduce them into your project (e.g. SQLite)

## NodeJs support description

- LLSE makes it possible to work in embedded mode by implementing the NodeJs starter code itself, and isolates the execution environment for different plugins
- Created interface to implement programmic support for npm

##### ⭐ **NodeJs Plugin Packaging & Deployment**

- After the plugin is written, please package **package.json** and all the plugin source code into a zip archive and **change the file name suffix to .llplugin**
- The **node_modules** directory should not be packed in the archive
- Distribute the **.llplugin** file as a plugin. When installing the plugin, just place this file directly into the plugins directory
- LLSE will automatically recognize the **.llplugin** file when BDS launch, extract it to the `plugins/nodejs/<PluginName>` directory, and automatically execute `npm install` in the directory to install the dependency packages. No manual intervention is needed for the whole process

## Python language support description

（Under development... Stay tuned!🚀）
