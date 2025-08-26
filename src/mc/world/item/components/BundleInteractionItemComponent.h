#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

// BundleInteractionItemComponent 类定义
// 这个类代表了“捆绑包（Bundle）”物品的交互组件。
// 它采用的是实体-组件-系统（ECS）设计模式，将物品的特定行为（与捆绑包交互）封装在一个可重用的组件中。
//
// 它继承自 NetworkedItemComponent<BundleInteractionItemComponent>，这是一个使用
// “奇异递归模板模式”(CRTP) 的基类。这提供了两个关键功能：
// 1. 自动网络同步：此组件的任何成员变量（只要在bindType中注册）都会在服务器和客户端之间自动同步。
// 2. 数据驱动支持：提供了与JSON文件绑定的基础结构。
class BundleInteractionItemComponent : public ::NetworkedItemComponent<::BundleInteractionItemComponent> {
public:
    // 成员变量
    // NOLINTBEGIN
    // `mNumViewableSlots` 定义了当玩家与捆绑包交互时，UI界面中应该显示多少个物品槽位。
    // 这个值可以从物品的JSON定义文件中直接加载。
    ::ll::TypedStorage<4, 4, int> mNumViewableSlots;
    // NOLINTEND

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 0 - 默认的虚析构函数。这是作为多态基类的良好实践。
    virtual ~BundleInteractionItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // 静态函数 - 这些函数是类的元数据，用于将C++代码与游戏的数据驱动系统连接起来。
    // NOLINTBEGIN
    
    // bindType 是这个组件最重要的函数。它在游戏启动时被调用，作用是：
    // 1. 将这个 C++ 类注册到游戏的数据驱动系统中。
    // 2. 告诉系统这个组件在JSON文件中叫什么名字（通过 getIdentifier()）。
    // 3. 定义如何从JSON加载数据到C++成员变量中（通过cereal::ReflectionCtx）。
    // 4. 指定此组件需要哪些实验性开关(requiredToggles)才能被启用。
    // 5. 指定此组件适用的最低格式版本(releasedMinFormatVersion)。
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,                      // 反射上下文，用于定义JSON和C++成员的映射关系。
        ::std::vector<::AllExperiments> const& requiredToggles,      // 此组件需要启用的实验性功能列表。
        ::std::optional<::SemVersion>          releasedMinFormatVersion  // 最低支持的游戏资源版本。
    );

    // 获取此组件在JSON文件中的唯一标识符。
    // 返回值通常是 "minecraft:bundle" 或类似的 HashedString。
    // 游戏通过这个标识符来将JSON中的组件定义与这个C++类关联起来。
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
