Project contributing guide. The **contributors list** is at the bottom of this file.

项目贡献指引。**贡献者名单**在该文件最后，中文指引在英文指引之后。

---

## 1. Prepare for development environment

Please execute the command after cloning project code.

```bash
.devtools/install.sh
```

1. This command will install git pre-commit hook, which will automatically execute clang-format before commit and add related open source license headers.

2. Install clang-format tool

Installation method
```
mac -> brew install clang-format
windows -> http://llvm.org/builds/
ubuntu -> sudo apt install clang-format
```

note: for windows, please also add clang-format to Environment Veriable `PATH`

## 2. Configure the project

Please configure your CMake project according to [QuickStart Guide](docs/en/QuickStart.md) and open the UnitTests project.

## 3. Read the documentation

Please read the [Design Document](docs/en/TOC.md) of ScriptX in detail to understand the design philosophy.

When you want to implement a new backend, please create it through [Template Project](backend/Template).

## 4. Initiate PR

Initiate a PR on github and pass the pipeline inspection.
In addition, we welcome you to add your own information to the **contributors list**.

---

## 1. 开发环境准备

clone项目代码之后请执行

```bash
.devtools/install.sh
```

1. 安装git pre-commit hook，该hook会在commit之前自动执行clang-format，并添加相关开源协议头。

2. 安装clang-format工具

安装方法
```
mac     -> brew install clang-format
windows -> http://llvm.org/builds/
ubuntu  -> sudo apt install clang-format
```

注意：windows用户还需要将clang-format配置到环境变量`PATH`里

## 2. 配置工程

请根据[快速上手指南](docs/zh/QuickStart.md)配置你的CMake工程，并打开UnitTests工程。

## 3. 阅读文档

请详细阅读ScriptX的[设计文档](docs/zh/TOC.md)，以了解设计哲学。

当你要实现一个新的backend时，请通过[模板工程](backend/Template)创建之。

## 4. 发起PR

在github上发起PR，并通过流水线检查。
另外，我们欢迎您在 **贡献者名单** 中加入自己的信息。

---

# Project Contributors (项目贡献者)

This section contains a list fo people who has contributed to this project.
They have all licensed their contributions to this project under the
licensing terms detailed in LICENSE, while still keep copyright of their contributions.
People who commit code to this project are encouraged to append their names here.

|    name    |           email           |               copyright             | note |
|    :--:    |           :---:           |                 :---:               | :--: |
| Yang Chao  | <taylorcyang@tencent.com> | THL A29 Limited, a Tencent company. |      |
| Yang Chao  | <landerlyoung@gmail.com>  |                                     | Implement the Lua backend with comprehensive docs. |
| Yangsen Fang | <renefang@outlook.com>  |                                     |      |
