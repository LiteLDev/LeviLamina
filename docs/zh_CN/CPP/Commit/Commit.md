# Git使用以及Commit规范

## Git版本管理控制使用原则

- 如果您是一位不拥有write权限的开发者，建议将项目fork到个人账号下进行修改
- 请从git中排除在项目生成过程中的中间文件
- 实现大型功能的时候建立独立分支并在其中完成工作
- 在新分支内时常rebase，追踪来自上游分支的修改，方便后期合并过程的进行
- 合并到上游分支前，通过pull request功能发起code review要求其他参与者共同检查
- 当一个功能分支已经合并时，请尽快清除

## 创建新功能

- 首先，我们需要基于beta分支创建一个新的分支（feature branch）

```bash
git checkout beta
git pull
git checkout -b feature/<FeatureName>
```

此时我们获得了一个基于beta创建的工作分支，接下来的工作请在此分支内完成

- 在完成工作的同时，建议经常性的与上游分支同步

```bash
git fetch origin
git rebase origin/beta
```

同步上游的过程实际上就是对冲突（conflict）的解决过程，任何冲突的解决都应在进行时尽快解决，避免大型工程中冲突过多导致合并时出现困难

- 将文件的改动添加进入git修改区内

```bash
git add <files>
```

自git2.0，all是git add的默认值

- 检查待提交修改并创建commit

```bash
git add --all        #将所有修改的文件添加到暂存区
git status           #查看修改的文件列表
git commit --verbose #查看具体修改内容
```

- 合并重复commit，修正提交信息

在进行新功能的开发过程中难免遇到问题，进行修复后会出现多个重复commit，通过使用git rebase，对commit进行合并操作（squash），有助于更好的追踪修改
通过变基操作（rebase）我们可以轻松实现此类操作

```bash
git rebase -i HEAD~5 #以当前HEAD往前5个commit，执行交互式rebase
```

> Rebase操作过后，若之前的commit已经推送到远端，可能需要`--force`参数以强制远端更新
> 具体细节操作可以参考 [Keep your branch clean guide](https://fle.github.io/git-tip-keep-your-branch-clean-with-fixup-and-autosquash.html)

## Feature分支合并至Beta分支

使用pull request的方式，将feature分支的修改根据需要合并或原样提交至beta分支，待ci测试成功后合并进入main分支，同时，beta分支的任何合并操作，应该由1个或以上拥有write权限的成员进行code review

## Beta分支合并至Main分支

使用pull request的方式，将beta分支的修改**原样**提交至main分支，待ci测试成功后合并进入main分支

## Commit的三原则

在提交commit时，您需要遵循以下原则:

- 仅使用英语(English Only)
- 简洁而准确的说明
- 将多个反复修改的commit通过squash的方式合并为一个

## Commit Message

关于commit message不同的人有不同的写法，但是为了方便协作者理解提交意图，保持commit记录整洁易回溯，在为本项目提交时请遵守以下的规范

> 本项目中由于前期的开发过程较为随意，遗留了不少的问题
> 尽管如此，为了将来长期维护此项目请从现在开始统一规范的书写commit message

### 准确而简洁的描述提交信息

- 提交信息应以大写字母开头，控制在50个字符以内为佳
- 提交信息应准确描述进行的更改，避免`Update xxx.cpp`等类似提交

### 统一的语言规范

- 统一的语言可以帮助在大量git log中迅速查找
- 使用动词时，尽量选择原型
- 使用名词时，尽量避免使用复数形式
- 非特殊名词，请使用小写开头
- 遇到长名词或者引用内容时，请使用标点符号包裹

> 以下为几个范例
> `Fixed Bugs about xxx`->`Fix bug about xxx`
> `Fix typo destory`->`Fix typo 'destroy(destory)'`

## 依赖管理

### 原则

> 本项目中由于前期的开发过程较为随意，仓库内留下了大量的二进制文件，将逐步替换

- 不直接引入二进制依赖
- 引入大型依赖时，使用git submodule等形式管理依赖
- 对于源码量级较小的依赖，应放入对应使用项目中编译，或创建静态库
- 大型依赖请尽量保留原项目结构，小型项目请确保分类明确

以下为外部依赖结构示例
|-- third_party
    |-- libname
    |   |-- include
    |   |   |-- lib.h
    |   |-- src
    |   |   |-- lib.cpp
    |-- header_only_libname
    |   |-- header_only.hpp
