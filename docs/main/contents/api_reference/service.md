# Service

`ll/api/service/` · **Common / Server / Client**

## Overview

The Service module provides a service registry for dependency injection and access to Bedrock engine internals like `Minecraft`, `Level`, `ServerInstance`, and `CommandRegistry`.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/service/Service.h` | Service base class |
| `ll/api/service/ServiceManager.h` | Service registry |
| `ll/api/service/Bedrock.h` | Bedrock engine accessors |

## Key Classes

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

### Bedrock Accessors

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

## Usage

### Accessing Bedrock Instances

```cpp
#include "ll/api/service/Bedrock.h"

void accessBedrock() {
    auto level = ll::service::getLevel();
    if (level) {
        // Use level
    }

    auto serverInstance = ll::service::getServerInstance();
    if (serverInstance) {
        // Use server instance
    }
}
```

### Registering a Service

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

### Consuming a Service

```cpp
#include "ll/api/service/ServiceManager.h"

void useService() {
    auto service = ll::service::ServiceManager::getInstance().getService<MyService>();
    if (service) {
        (*service)->doSomething();
    }
}
```

## Related

- [Event](event.md) — `ServiceRegisterEvent`, `ServiceUnregisterEvent`
