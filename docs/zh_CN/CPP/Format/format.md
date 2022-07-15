# LiteLoaderBDS 项目 C++ 编写标准

## 介绍

&emsp;&emsp;本文档描述了 `LiteLoaderBDS` 项目（以下简称 **LL**）中使用的编写标准。LL 项目内的代码都应遵循此标准。对于其他基于 LL 编写的插件，并不作任何要求，但编写标准对于编写大规模的插件项目尤为重要。

&emsp;&emsp;请注意，某些外部库有会偏离编码标准。被引用的外部库应当尽量保持其原有形态，不做任何修改，尤其是格式修改。

&emsp;&emsp;这些指南的最终目标是提高我们公共源代码库的可读性和可维护性。

> 欢迎参与到 LL 的开发中来！

## 语言、库和 C++ 标准

&emsp;&emsp;LL 中绝大部分为 C++ 代码，在使用外部库时，请尽量选择现代的，具有 C++ 面向对象接口的库，非必要尽量不要暴露 C 形式的代码。如果引用 C 库，请进行适当的封装。LL 目前使用 C++20 标准，并会随着 BDS 的标准更新，引用其代码或者 SDK 的子项目请注意这一点。

&emsp;&emsp;我们鼓励使用 C++ 标准库，而不是实现自定义数据结构。使用容器的第一步是明确你自己的目的：你想要一个顺序容器，一个类似集合的容器，还是一个类似键值对的容器？选择容器时最重要的是您计划如何访问容器的算法属性。基于此，您应该使用：

- `map/unordered_map` - 如果您需要基于另一个值有效查找一个值，则可以使用类似 `map` 的容器。类似 `map` 的容器还支持有效的包含查询（键是否在 `map` 中）。类映射容器通常不支持有效的反向映射（值到键）。如果需要，请使用两张 `map` 。例如 `MC/Types.hpp` 内的 `BidirectionalUnorderedMap` 。一些类似 `map` 的容器还支持按排序顺序通过键进行有效迭代。 `map` 通常要慢于 `unordered_map` 。使用 `unordered_map` 时，你需要为键实现 std::hash 的模板特化，或者自定义哈希函数。用 `map` 时，你需要为键实现比较函数。需要注意的是，普通 `map` 的键具有唯一性，如果你需要许多相同的键，请使用类似 `multimap` 的容器。

- `set/unordered_set` - 如果您需要将一堆东西放入自动消除重复项的容器中，则可以使用类似 `set` 的容器。一些类似 `set` 的容器支持按排序顺序通过元素进行有效迭代。类似 `set` 的容器比顺序容器更昂贵。当然，此结构也有对应的 multi 版本。

- `vector` - 顺序容器提供了添加元素的最有效方法，并跟踪它们添加到其中的顺序。它们允许重复并支持有效的迭代，但不支持基于键的有效查找。类似的还有队列，在编写 BFS 等算法时，请尽量使用类似 `queue` 的容器。当需要储存多维数据时，使用一个 `vector` ，讲多维坐标变换到 1 维进行存储访问，通常比 `vector` 嵌套的速度快。

- `string` - 字符串容器是用于字符或字节数组的专用顺序容器或引用结构。请不要暴露类 C 的 char* 接口。

## 代码格式

### 注释
&emsp;&emsp;注释对于可读性和可维护性很重要。写注释时，用英文，使用适当的大小写、标点符号等。旨在描述代码试图做什么以及为什么，而不是在微观层面上它是如何做到的。但对于某些算法中的魔法数字，请注明。

### 头文件

&emsp;&emsp;介于目前编译器对 `module` 的支持并不完善，我们依旧使用头文件而非 `module` 的形式。请确保所有头文件的开头都写有：
```cpp
#pragma once
```
&emsp;&emsp;以保证头文件不被重复编译。头文件内的函数尽量全部使用 `inline` 使得编译器在头文件循环引用时可以忽略多重定义，选取其中一个。除模板外，函数的定义尽量与实现分开。

### 命名

&emsp;&emsp;文件与文件夹的名称应当遵循大驼峰命名，类同样如此，通常来说，一个类会搭配一个头文件与实现文件，类名与头文件名和实现文件名应当一致。

&emsp;&emsp;函数与变量采用小驼峰命名，对于代码内子块的临时变量，可采用在大驼峰前加上小写字母 `m` 的写法。也就是匈牙利命名法。

&emsp;&emsp;需要注意的是，对于不利于人类识别的定义方法请不要使用。例如，在同一行定义某个类的变量与变量指针。

### 缩进

&emsp;&emsp;目前 LL 采用 120 格的代码宽度，并且使用 4 个空格为一个单元的缩进方式，请勿使用 tab 缩进。

### 警告

&emsp;&emsp;将编译器警告视为错误，而不是 `disable` ，除非它由外部库引起。这样有利于寻找代码中的隐含错误。

### 格式化

&emsp;&emsp;LL 内附带了 `.clang-format` 文件，请使用此文件对代码进行格式化，而不是自己自创一套新的格式化方案，任何不符合代码格式的提交都有可能被拒绝。

### 可移植性

&emsp;&emsp;BDS 任何情况下，请考虑代码的可移植性，对于非必要的偏移，请不要使用。所有使用可能发生变化的偏移的部分都应当写有统一格式的注释：

```cpp
/*_CHANGEABLE_OFFSET_LV240_16*/
```
&emsp;&emsp;此处的 16 为偏移的数值，LV240代表最后一次更改偏移的版本为 2.4.0 。每当 LL 进行 BDS 版本兼容升级时，应当对所有使用可能发生变化的偏移的代码部分进行测试。

### 可读性

&emsp;&emsp;请 “ 几乎总是 ” 使用 `auto` ，包括一些简短的模板，也可以使用 C++17 以后的 `auto` 形式。

#### 小心不必要的副本auto

&emsp;&emsp;`auto`的便利性让人很容易忘记它的默认行为是复制。特别是在基于范围的 `for` 循环中，粗心的复制造成的代价十分高昂。除非您需要复制，否则请使用 `auto&` ，`auto*`

### 减少不必要的 include

&emsp;&emsp;include 稍有不慎就会导致很多错误，请不要进行多余的 include 操作。

### 不要编写全局命名空间函数

&emsp;&emsp;所有函数，都应当处于 LL 的命名空间内，命名空间采用全部小写的形式，除非太长，否则不采用蛇形命名。

### 使用提前 return/continue 简化代码

```cpp
bool *Player::eat(ItemStack* item) {
  if (!item->isTerminator() &&
      item->isFood() && this->isHungry()) {
    ... some long code ....
  }

  return false;
}
```
&emsp;&emsp;相较于上述代码，我们更推荐下面的。

```cpp
bool *Player::eat(ItemStack* item) {

  if (item->isTerminator()) {
  return false;
  }
  if (!item->isFood()) {
  return false;
  }
  if (!this->isHungry()) {
  return false;
  }

    ... some long code ....
}
```

&emsp;&emsp;长代码放在 if 内，会使得可用缩进变小，并且过长的翻阅过程也会是你分不清大括号的嵌套。

&emsp;&emsp;编写代码时，请尽量试着减少缩进。

### 无论如何，都要使用大括号

&emsp;&emsp;无论 if ，for ，while 等语句下面的代码有多么简短，都必须使用大括号包住。

### 将操作拆分

&emsp;&emsp;使用宏定义或新增函数的方式，将冗长的代码块变成小单元，例如：
```cpp
bool *Player::canEat() {

  ... some code ....

    bool FoundFood = false;
    for (unsigned I = 0, E = BarList.size(); I != E; ++I){
        if (BarList[I]->isFood()) {
        FoundFood = true;
        break;
        }
    }

if (FoundFood) {
  ...
}

  ... some code ....

}
```
&emsp;&emsp;相较于上述代码，我们更推荐下面的。

```cpp

static bool containsFood(const std::vector<ItemStack*> &List) {
    for (unsigned I = 0, E = List.size(); I != E; ++I){
        if (List[I]->isFood()){
            return true;
        }
    }
  return false;
}

bool *Player::canEat() {

  ... some code ....

if (containsFood(BarList)) {
  ...
}

  ... some code ....

}

```

### 不要使用 using namespace std

&emsp;&emsp;不要使用 using namespace std ，尤其是头文件内。

### 不要end()每次都通过循环进行评估

&emsp;&emsp;在for不能使用基于范围的循环并且需要编写显式的基于迭代器的循环的情况下，请密切注意是否 end() 在每次循环迭代时重新评估。一个常见的错误是以这种风格编写循环：

```cpp
auto blocks = ...
for (auto I = blocks->begin(); I != blocks->end(); ++I){
    Level::setBlock(getPos(I),blocks[I]);
}
```
&emsp;&emsp;相较于上述代码，我们更推荐下面的。

```cpp
auto blocks = ...
for (auto I = blocks->begin(), E = blocks->end(); I != E; ++I){
    Level::setBlock(getPos(I),blocks[I]);
}
```

&emsp;&emsp;观察者可能很快指出这两个循环可能有不同的语义：如果容器正在发生增删，那么 `BB->end()` 可能会在每次循环中改变它的值，而第二个循环实际上可能不会是正确的。如果您确实依赖此行为，请以第一种形式编写循环并添加注释，表明您是故意这样做的。

&emsp;&emsp;为什么我们更喜欢第二种形式（正确时）？以第一种形式编写循环有两个问题。首先，它可能比在循环开始时评估它的效率低。在这种情况下，成本可能很小——每次循环都会增加一些额外的负载。但是，如果基础表达式更复杂，则成本会迅速上升。某些结束表达式实际上类似于：`SomeMap[X]->end()` 的循环。通过始终如一地以第二种形式编写它，您可以完全消除此问题，甚至不必考虑它。

&emsp;&emsp;第二个（甚至更大）的问题是，以第一种形式编写循环会向读者暗示循环正在改变容器（注释很容易证实这一事实！）。如果您以第二种形式编写循环，则无需查看循环体就可以立即看出容器没有被修改，这使得阅读代码和理解它的作用更容易。

### 避免使用 std::endl
```cpp
std::cout << std::endl;
```
&emsp;&emsp;上述代码等价于以下代码。
```cpp
std::cout << '\n' << std::flush;
```
&emsp;&emsp;多数情况下，你可能并不需要刷新输出流，因此最好使用 '\n' 。

### 首选 ++I

&emsp;&emsp;多数情况下，++I 要比 I++ 快很多。

### 类型转换

&emsp;&emsp;不要使用 C 形式的类型转换，而是选用 static_cast<>() 之类的 C++ 类型转换形式。

## 代码审查

&emsp;&emsp;开发者在对 LL 进行维护时，不可擅自提交至 beta ，尤其是 main 仓库，应当以 pull request 的形式，先对代码进行编译确认代码无编译错误，并由至少 2 名开发者审查后，才可合并到 beta 分支。

## 单元测试

&emsp;&emsp;所有可能发生变化的偏移，在对应的 BDS 版本更新后，都应当对其进行单元测试，确保不会引发错误后才可上线。对于被内联掉的函数，应当尽量在头文件内进行复现并添加 inline 标识。切勿直接搬运 IDA 代码。在先前的版本进行单元测试确认原版实现与此实现结果完全一致后，才可上线。
