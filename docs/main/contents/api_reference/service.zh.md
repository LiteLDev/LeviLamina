# Service（服务系统）

`ll/api/service/` · **通用 / 服务端 / 客户端**

## 概述

Service 模块提供了用于依赖注入的服务注册表，以及访问 Bedrock 引擎内部组件的接口，如 `Minecraft`、`Level`、`ServerInstance` 和 `CommandRegistry`。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/service/Service.h` | 服务基类 |
| `ll/api/service/ServiceManager.h` | 服务注册表 |
| `ll/api/service/Bedrock.h` | Bedrock 引擎访问器 |

## 核心类

### ServiceManager

```cpp
namespace ll::service {
class ServiceManager {
public:
    static ServiceManager& getInstance();

    template <IsService T>
    Expected<std::shared_ptr<T>> getService();

    template <IsService T>
    event::ListenerPtr subscribeService(std::function<void(std::shared_ptr<T> const&)> const& fn);

    bool registerService(std::shared_ptr<Service> const& service, std::shared_ptr<mod::Mod> const& mod);
    bool unregisterService(ServiceIdView const& id);
};
}
```

### Bedrock 访问器

```cpp
namespace ll::service::inline bedrock {
optional_ref<Minecraft> getMinecraft(bool isClientSide = false);
optional_ref<Level> getLevel();
optional_ref<ServerInstance> getServerInstance();
optional_ref<ServerNetworkHandler> getServerNetworkHandler(bool isClientSide = false);
optional_ref<CommandRegistry> getCommandRegistry(bool isClientSide = false);
optional_ref<RakNet::RakPeer> getRakPeer();
optional_ref<NetworkSystem> getNetworkSystem(bool isClientSide = false);
optional_ref<DBStorage> getDBStorage();
optional_ref<ResourcePackRepository> getResourcePackRepository(bool isClientSide = false);
}
```

## 使用方法

### 访问 Bedrock 实例

```cpp
#include "ll/api/service/Bedrock.h"

void accessBedrock() {
    auto level = ll::service::getLevel();
    if (level) {
        // 使用 level
    }

    auto serverInstance = ll::service::getServerInstance();
    if (serverInstance) {
        // 使用服务器实例
    }
}
```

### 注册服务

```cpp
#include "ll/api/service/Service.h"
#include "ll/api/service/ServiceManager.h"

class MyService : public ll::service::ServiceImpl<MyService, 1> {
public:
    void doSomething() {}
    void invalidate() override {}
};

void registerMyService() {
    auto service = std::make_shared<MyService>();
    ll::service::ServiceManager::getInstance().registerService(service, ll::mod::NativeMod::current());
}
```

### 使用服务

```cpp
#include "ll/api/service/ServiceManager.h"

void useService() {
    auto service = ll::service::ServiceManager::getInstance().getService<MyService>();
    if (service) {
        (*service)->doSomething();
    }
}
```

## 相关模块

- [Event（事件系统）](event.zh.md) — `ServiceRegisterEvent`、`ServiceUnregisterEvent`
