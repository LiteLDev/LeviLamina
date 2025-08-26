#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/EntityId.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

// EntityContext 类定义，它是一个“实体上下文”或“实体句柄”
// 它不代表实体本身，而是提供了一个访问和操作特定实体及其组件的接口
// 它继承自 EnableGetWeakRef，意味着可以从中获取一个安全的弱引用，防止悬垂指针问题
class EntityContext : public ::EnableGetWeakRef<::EntityContext> {
public:
    // EntityContext 内部类型声明
    // clang-format off
    struct Hash; // 用于将 EntityContext 作为哈希表（如 std::unordered_map）的键
    // clang-format on

    // EntityContext 内部类型定义
    struct Hash {}; // 定义是空的，具体实现可能在 .cpp 文件中

public:
    // 获取底层的 EnTT 注册表（非 const 版本）
    // EnTT 是一个流行的第三方 C++ ECS 库，被基岩版广泛使用
    [[nodiscard]] inline entt::basic_registry<EntityId>& getRegistry() noexcept { return mEnTTRegistry; }

    // 获取底层的 EnTT 注册表（const 版本）
    [[nodiscard]] inline entt::basic_registry<EntityId> const& getRegistry() const noexcept { return mEnTTRegistry; }

    // 尝试获取实体的一个组件（const 版本）
    // 如果实体没有该类型的组件，返回一个空的 optional_ref
    template <class T>
    [[nodiscard]] inline optional_ref<T const> tryGetComponent() const {
        return getRegistry().try_get<T>(mEntity);
    }

    // 尝试获取实体的一个组件（非 const 版本）
    template <class T>
    [[nodiscard]] inline optional_ref<T> tryGetComponent() {
        // 通过 const_cast 移除 const，这是一种常见的在 const 成员函数中提供非 const 访问的技巧
        return const_cast<T*>(std::as_const(getRegistry()).try_get<T>(mEntity));
    }

    // 检查实体是否拥有特定类型的组件
    template <class T>
    [[nodiscard]] inline bool hasComponent() const {
        return getRegistry().all_of<T>(mEntity);
    }

    // 从实体上移除一个组件
    template <class T>
    inline bool removeComponent() {
        return getRegistry().remove<T>(mEntity);
    }

    // 获取或添加一个组件。
    // 如果实体已有该组件，则返回它；如果没有，则使用提供的参数(args)创建一个新组件，并返回。
    // 这是一个非常方便的函数，避免了 "if has then get, else add" 的繁琐写法。
    template <class T, typename... Args>
    [[nodiscard]] inline T& getOrAddComponent(Args&&... args) {
        return getRegistry().get_or_emplace<T>(mEntity, std::forward<Args>(args)...);
    }

public:
    // 成员变量
    // NOLINTBEGIN
    ::EntityRegistry&                   mRegistry;     // 对高层实体注册表的引用
    ::entt::basic_registry<::EntityId>& mEnTTRegistry; // 对底层 EnTT ECS 注册表的引用
    ::EntityId const                    mEntity;       // 此上下文关联的实体ID。是 const 的，意味着一个 EntityContext 对象终生绑定一个实体。
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    // 获取指向此 EntityContext 的弱引用。
    MCAPI ::WeakRef<::EntityContext> getWeakRef() const;

    // 检查此上下文是否仍然有效（即，它所引用的实体是否还存在于世界上）
    MCAPI bool isValid() const;
    // NOLINTEND
};