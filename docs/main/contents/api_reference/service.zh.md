# Service（服务系统）

`ll/api/service/` · **通用 / 服务端 / 客户端**

## 概述

Service 模块是一个**带版本的服务注册表**。它让一个 mod 通过稳定接口暴露功能，
让其他 mod 在不直接链接提供方实现的前提下拿到这份功能，并允许提供方同时发布同一
逻辑服务的多个 ABI 不兼容版本。

整个注册表围绕三个概念：

- **`Service`**：所有服务的基类。
- **`ServiceId`**：由 `(name, version)` 组成、唯一标识一个服务的键。
- **`ServiceManager`**：进程级单例，协调注册、查找、查询与生命周期事件。
  注册服务的 mod 卸载时，它也会自动清理对应服务。

`ll/api/service/Bedrock.h` 另外提供了对引擎单例（`Minecraft`、`Level`、
`ServerInstance`、`CommandRegistry` 等）的访问器。它和用户态注册表互不相关，
本文末尾单独说明。

## 为什么要用 Service

直接 `#include "other_mod/SomeApi.h"` 调另一个 mod，会带来三个问题：

1. **ABI 耦合。** 提供方一改接口，消费方即使不关心这个改动也得跟着重编。
2. **加载顺序耦合。** 消费方必须自己判断提供方是否已加载、何时加载。
3. **无法做版本协商。** 两个提供方无法用同一个逻辑名字暴露不同版本。

注册表把这三个问题都解决了：

- 消费方只依赖 `Service` 接口（或版本化的包装类型），不依赖提供方实现。
- 消费方调用 `getService<T>()` 时不需要知道提供方是否在场；提供方缺失、延迟
  加载或卸载时，通过 `Expected` 得到失败结果，而不是链接错误。
- 同一逻辑服务的多个版本可以共存，并被显式选择。

如果你的“服务”是没有状态、也不需要版本化的纯静态工具，那就不需要这个模块，
一个普通头文件就够了。

## 核心概念

### Service

```cpp
class Service : public std::enable_shared_from_this<Service> {
public:
    virtual ~Service() = default;

    [[nodiscard]] virtual ServiceId getServiceId() const noexcept = 0;

    // 服务从 ServiceManager 被移除时调用。
    virtual void invalidate() {}

    static constexpr ServiceIdView ServiceId{EmptyServiceId};
    ...
};
```

要点：

- 服务必须由 `std::shared_ptr` 管理——基类继承了 `enable_shared_from_this`。
- `invalidate()` 是**唯一**的生命周期钩子。`ServiceManager::unregisterService`
  移除服务时调用它。资源释放、引用清理、取消订阅、关闭句柄都放这里。
- 基类上的 `Service::ServiceId` 是 `EmptyServiceId`，不要依赖它；派生服务应当
  重新定义 `ServiceId`（见下面的 `ServiceImpl`）。

### ServiceId 与 ServiceIdView

`ServiceId` 就是 `(name, version)`，外加一个预计算的组合 hash：

```cpp
class ServiceId {
public:
    size_t      version;
    std::string name;
    ...
};

class ServiceIdView {
public:
    size_t           version;
    std::string_view name;
    ...
};
```

- `ServiceId` 拥有 name 字符串，`ServiceIdView` 借用它。注册表内部存 `ServiceId`，
  外部查询一般用 `ServiceIdView`。
- 相等与 hash 都基于**二元组**而非只有名字。这正是“同名不同版本可以共存”的
  根本原因。
- `EmptyServiceId` 是 `{"", 0}`。若 `getServiceId<T>` 得到与它相等的
  `ServiceId`，会产生编译期错误，因此每个可用的服务都必须提供真实 ID。

### ServiceImpl

`ServiceImpl` 是一个帮你填好 `ServiceId` 的便捷基类：

```cpp
template <class T, size_t version>
class ServiceImpl : public Service {
public:
    static constexpr ServiceIdView ServiceId{auto_name_t<T>{}, version};

    ServiceId getServiceId() const noexcept override { return ServiceId; }
};
```

关键细节：**`T` 是服务*名字*的来源，不是派生类本身**。`auto_name_t<T>` 使用
编译器对 `T` 的类型拼写；下文中未限定命名空间的示例得到 `MyService`。

由此得到两条规则：

- `class MyService : public ServiceImpl<MyService, 1>`：服务名就是
  `MyService`，版本 `1`。这是最简单的写法。
- `class BackendServiceV1 : public ServiceImpl<Backend, 1>` 和
  `class BackendServiceV2 : public ServiceImpl<Backend, 2>`：两者**都叫**
  `Backend`，只有版本不同。这才是版本化服务的正确形状。

如果你误写成 `ServiceImpl<BackendServiceV1, 1>` 和
`ServiceImpl<BackendServiceV2, 2>`，得到的是**两个不同的名字**，不是同一个
名字的两个版本。这是最常见的误用点。

当类型拼写本身就是预期契约时，`ServiceImpl` 很方便。如果外部服务需要固定且不依赖
编译器类型拼写的 ID，应直接定义 `ServiceId` 和 `getServiceId()`。

### ServiceManager

进程级单例，所有状态均为全局。由 mod 注册的服务会在该 mod 卸载时自动移除。

```cpp
ServiceManager& ServiceManager::getInstance();

template <IsService T>
Expected<std::shared_ptr<T>> getService();

Expected<std::shared_ptr<Service>> getService(ServiceIdView const& id);

template <IsService T>
event::ListenerPtr subscribeService(
    std::function<void(std::shared_ptr<T> const&)> const& fn);

std::optional<QueryServiceResult>       queryService(std::string_view name);
std::vector<QueryServiceResult>         queryServices(std::string_view name);

bool registerService(std::shared_ptr<Service> const&  service,
                     std::shared_ptr<mod::Mod> const& mod = mod::NativeMod::current());

bool unregisterService(ServiceIdView const& id);
void unregisterService(mod::Mod const& mod);
```

`IsService` concept 要求 `std::is_base_of_v<Service, T>` **且** `T::ServiceId`
的类型是 `ServiceId` 或 `ServiceIdView`。`ServiceImpl` 同时满足这两条。

注册表只按 `ServiceId` 索引；`getService<T>()` 不会验证存储对象的动态 C++ 类型。
应把 `(name, version)` 视为接口契约，绝不能为不兼容的类型复用它。

## 快速开始

### 定义服务

最简、非版本化的写法：

```cpp
#include "ll/api/service/Service.h"

class MyService : public ll::service::ServiceImpl<MyService, 1> {
public:
    void doSomething() {}

    void invalidate() override {
        // 释放引用、取消订阅等
    }
};
```

若这些声明位于全局作用域，此时 `MyService::ServiceId` 就是
`{"MyService", 1}`。

### 注册服务

```cpp
#include <memory>

#include "ll/api/service/ServiceManager.h"
#include "ll/api/mod/NativeMod.h"

auto service = std::make_shared<MyService>();
bool ok = ll::service::ServiceManager::getInstance()
              .registerService(service);
```

若精确的 `(name, version)` 已被占用，注册返回 `false`。同名不同版本彼此独立，
互不影响。`service` 参数不能为空。

注册成功后，注册表会持有该服务的 `shared_ptr`。你不必仅为维持注册状态而额外保留
一份引用。由 mod 注册的服务会在该 mod 卸载时自动移除。

### 使用服务

```cpp
#include "ll/api/service/ServiceManager.h"

auto& sm = ll::service::ServiceManager::getInstance();
if (auto res = sm.getService<MyService>(); res) {
    (*res)->doSomething();
} else {
    // 处理“不存在”或“版本不匹配”，见“错误处理”。
}
```

不要把 `getService` 的返回值跨重载长期缓存，除非你同时订阅了生命周期事件（见
“订阅服务变化”）。

## 版本化服务

### 问题

假设你发布 `Backend`，接口是 `add(int, int)`。后来需要 `add(int, int, int)`。
如果两个版本共用名字 `Backend` 和同一个版本号，第二次注册会失败，消费方也无法
表达“我要带 `add(int, int)` 的那一个”。

注册表用 `(name, version)` 做键来解决这个问题：你可以同时发布 `Backend@1` 和
`Backend@2`，消费方按自己编译时对应的精确类型去取。

### 设计版本化服务

用共享的命名类型作为 `T`，每个版本一个包装：

```cpp
#include "ll/api/service/Service.h"

struct Backend {}; // 仅用于命名，不是服务基类。

class BackendServiceV1 : public ll::service::ServiceImpl<Backend, 1> {
public:
    int add(int a, int b) { ... }
    void invalidate() override { ... }
};

class BackendServiceV2 : public ll::service::ServiceImpl<Backend, 2> {
public:
    int add(int a, int b, int bias) { ... }
    void invalidate() override { ... }
};
```

这些声明位于全局作用域时，两者的名字都是 `Backend`，只是版本不同。`Backend`
只提供稳定的名字；包装类可以转发到共享实现，但不必继承 `Backend`。再加一层
selector，让调用方写 `BackendService<2>` 而不是具体类名：

```cpp
template <size_t Version> struct BackendServiceSelector;
template <> struct BackendServiceSelector<1> { using type = BackendServiceV1; };
template <> struct BackendServiceSelector<2> { using type = BackendServiceV2; };

template <size_t Version>
using BackendService = typename BackendServiceSelector<Version>::type;

using BackendServiceLatest = BackendService<2>;
```

消费方就可以写：

```cpp
auto v1 = sm.getService<BackendService<1>>();
auto v2 = sm.getService<BackendService<2>>();
```

两次调用解析到不同的 `ServiceId`（`Backend@1`、`Backend@2`），所以可以共存。

> **不要**把每个具体版本同时用作类名和名字来源：
> `class BackendV1 : public ServiceImpl<BackendV1, 1>` 得到的是名字 `BackendV1`，
> 不是 `Backend`。这种形状下做不到同名共存。

### 批量注册

版本一多，手工注册容易漏。常见做法是用“编译期探测 + 上限断言”：

```cpp
#include <memory>

#include "ll/api/base/Meta.h"
#include "ll/api/service/ServiceManager.h"

constexpr size_t kVersionProbeLimit = 5;

auto& sm = ll::service::ServiceManager::getInstance();

auto registerVersions = [&]<template <size_t> class ServiceTemplate>() {
    ll::meta::unroll<kVersionProbeLimit>([&]<size_t Index> {
        constexpr size_t version = Index + 1;   // 探测 1 .. kVersionProbeLimit
        if constexpr (requires { typename ServiceTemplate<version>; }) {
            static_assert(
                version < kVersionProbeLimit,
                "探测到了 kVersionProbeLimit，请在新版本加入时调高上限"
            );
            auto service = std::make_shared<ServiceTemplate<version>>();
            if (!sm.registerService(service)) {
                // 处理 ID 重复或注册失败。
            }
        }
    });
};

registerVersions.template operator()<WidgetService>();
registerVersions.template operator()<GadgetService>();
// ...
```

行为说明：

- `ll::meta::unroll<N>` 展开 `Index = 0 .. N-1`，所以 `version = 1 .. N`。
- `if constexpr (requires { typename ServiceTemplate<version>; })` 会跳过
  不存在的版本。
- 当你新增的版本等于 `kVersionProbeLimit` 时，`requires` 变为真，`static_assert`
  触发，强制你调高上限。这样“版本 5 从来没被注册”会变成编译错误，而不是静默 bug。

注册成功后注册表会持有一份引用，局部的 `shared_ptr` 可以离开作用域。在 mod
加载阶段注册服务，以便在卸载时自动清理；只有需要早于 mod 卸载移除服务时，才保留
显式 ID。

## 生命周期与失效

完整生命周期：

1. `registerService(service, mod)`：插入服务，发出 `ServiceRegisterEvent`。
2. 消费方通过 `getService<T>()` / `subscribeService<T>()` 使用。
3. `unregisterService(id)`：发出 `ServiceUnregisterEvent`，调用
   `service->invalidate()`，然后从注册表移除服务。
4. `unregisterService(mod)`：对该 mod 名下的所有服务做同样的事。
5. mod 卸载：自动对该 mod 名下的所有服务执行同样的移除流程。

`invalidate()` 是唯一的清理钩子。不要依赖析构函数：注册表持有 `shared_ptr`，
对象很可能比你自己的那份引用存活得久得多。资源释放写进 `invalidate()`，
不要写进 `~T`。

## 订阅服务变化

`subscribeService<T>(fn)` 会先**立即**投递当前服务实例（如果已存在），然后持续
投递该精确 `ServiceId` 的注册/注销事件：

```cpp
auto listener = sm.subscribeService<MyService>(
    [&](std::shared_ptr<MyService> const& s) {
        if (s) {
            // 已注册（或订阅时已经存在）。
            current = s;
        } else {
            // 已注销。清掉任何缓存的指针。
            current.reset();
        }
    });
```

细节：

- 若服务已注册，初始回调会在 `subscribeService` 内部同步执行一次。
- 注销时回调收到 `nullptr`，这就是“可以丢弃缓存引用”的信号。
  `ServiceUnregisterEvent` 在 `invalidate()` 之前发出。
- 返回的 `event::ListenerPtr` 指向这次订阅，但事件总线也持有该监听器。只销毁
  自己的指针不会取消订阅；必须显式调用
  `ll::event::EventBus::getInstance().removeListener(listener)`。
- 只投递 `T::ServiceId` 对应的事件；订阅是版本精确的。
- 初始查找与监听器安装是两个独立操作。不要在与注册或注销并发时订阅；应在 mod
  初始化阶段完成订阅。

这是唯一安全的“长期持有服务引用”的方式。裸 `getService<T>()` 的结果随时可能在
某个注销边界失效。

## 查询服务

两个查询 API，语义不同：

```cpp
std::optional<QueryServiceResult>       queryService(std::string_view name);
std::vector<QueryServiceResult>         queryServices(std::string_view name);
```

`QueryServiceResult` 是 `{ name, version, modName, service }`。

- `queryService(name)`：返回该名字下**最高**的已注册版本；名字不存在则返回
  `std::nullopt`。这是兼容性接口：“这个名字下最新的是哪个”。
- `queryServices(name)`：返回该名字下的**全部**版本，按版本号升序。用于诊断、
  展示 UI，或显式选择兼容版本。

两者都返回 `optional` / 空数组而不是 `Expected`，因为对查询而言“名字不存在”
不是错误，是正常的空结果。

`QueryServiceResult::service` 只是查询瞬间的快照，不是持续有效的租约。查询返回后
服务仍可能因注销而失效；如果需要跨生命周期保持引用，请使用 `subscribeService`。

## 错误处理

`getService<T>()` 返回 `Expected<std::shared_ptr<T>>`，失败时是
`GetServiceError`：

```cpp
struct GetServiceError : ErrorInfoBase {
    enum class ErrorType : char {
        NotExist        = 0,
        VersionMismatch = 1,
    };
    ErrorType code;
    size_t    version;   // 仅对 VersionMismatch 有意义
};
```

语义：

- **`NotExist`**：该名字下完全没有注册任何服务。
- **`VersionMismatch`**：名字存在，但请求的版本不存在。`error.version` 携带该
  名字下**当前最高**的已注册版本，方便你打日志“你请求的是 v3，目前只有 v2”。

这个区分在实践中很重要：

```cpp
auto res = sm.getService(ServiceIdView{"Backend", 3});
if (!res) {
    auto& e = res.error().as<GetServiceError>();
    if (e.code == GetServiceError::NotExist) {
        // 提供方 mod 没装。
    } else if (e.code == GetServiceError::VersionMismatch) {
        // 提供方装了，但只到 v{e.version}。
        // 可以考虑回退到 v{e.version}，或报告不兼容。
    }
}
```

不要把 `VersionMismatch` 当成“没装”：它通常意味着提供方在场，消费方应当优雅降级。

## 最佳实践

- **长期持有的引用一律走 `subscribeService`，不要裸用 `getService`。** 缓存的
  `shared_ptr` 会活过注销边界，然后在已失效的服务上继续调用。
- **清理逻辑写进 `invalidate()`。** 析构函数触发得太晚、太不可控，因为注册表自己
  也持有 `shared_ptr`。
- **在 mod 加载阶段注册服务。** mod 卸载时会自动移除；只有需要提前移除时才显式
  调用 `unregisterService`。
- **名字来源要选对。** 单个服务用 `ServiceImpl<Self, N>` 没问题；版本化服务要用
  一个共享的命名类型作为 `T`，让所有版本同名。
- **版本数量要克制。** 每个版本都是整个服务器生命周期内的活对象。发布到 v7 就意味着
  同时付七份成本。
- **把服务名和版本视为公开契约。** 使用稳定且带提供方标识的名字，绝不为不兼容的
  接口复用同一个 `(name, version)`；第一次成功注册的实例会胜出。
- **纯静态工具不要包 service。** 在这里增加版本化和生命周期管理只会增加复杂度。
- **不要跨事件缓存 `getService` 结果。** 只在 `subscribeService` 回调里缓存，并在
  收到注销时置空。

## Bedrock 访问器

`ll/api/service/Bedrock.h` 提供了对引擎实例的访问器。它们独立于
`ServiceManager`：

```cpp
namespace ll::service::inline bedrock {
optional_ref<Minecraft>              getMinecraft(bool isClientSide = false);
optional_ref<Level>                  getLevel();
optional_ref<ServerInstance>         getServerInstance();
optional_ref<ServerNetworkHandler>   getServerNetworkHandler(bool isClientSide = false);
optional_ref<CommandRegistry>        getCommandRegistry(bool isClientSide = false);
optional_ref<RakNet::RakPeer>        getRakPeer();
optional_ref<NetworkSystem>          getNetworkSystem(bool isClientSide = false);
optional_ref<DBStorage>              getDBStorage();
optional_ref<ResourcePackRepository> getResourcePackRepository(bool isClientSide = false);
}
```

每个访问器返回一个 `optional_ref`；在对应引擎子系统就绪之前，或在当前客户端/
服务端目标上不可用时是空的。使用前请检查是否为空，不要假设某个 mod 生命周期
阶段它一定存在。

## 相关模块

- [Event（事件系统）](event.zh.md) — `ServiceRegisterEvent`、`ServiceUnregisterEvent`
- [Mod（模组系统）](mod.zh.md) — `mod::Mod`，作为 `registerService` 的 mod 参数和
  自动或手动清理的目标
