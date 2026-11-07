# Service

`ll/api/service/` · **Common / Server / Client**

## Overview

The Service module is a **versioned service registry**. It lets a mod expose
functionality through a stable interface, lets other mods obtain that
functionality without linking against the provider directly, and lets a
provider ship multiple ABI-incompatible versions of the same logical service
side by side.

The registry is built around three ideas:

- **`Service`** — the base class every service inherits from.
- **`ServiceId`** — a `(name, version)` pair that uniquely identifies a service.
- **`ServiceManager`** — a process-wide singleton that coordinates
  registration, lookup, querying, lifecycle events, and cleanup when a mod is
  unloaded.

`ll/api/service/Bedrock.h` additionally exposes accessors to engine singletons
(`Minecraft`, `Level`, `ServerInstance`, `CommandRegistry`, ...). Those are
independent of the user-facing registry and are covered at the end of this
document.

## Why Use Services

Hard-coding `#include "other_mod/SomeApi.h"` and calling into another mod
directly has three problems:

1. **ABI coupling.** The consuming mod is rebuilt whenever the provider changes
   its interface, even in a binary-incompatible way.
2. **Load-order coupling.** The consumer must know whether the provider is
   loaded, and when.
3. **No version negotiation.** Two providers cannot expose the same logical
   API at different versions.

The registry solves all three:

- Consumers depend only on the `Service` interface (or a versioned wrapper),
  never on the provider's implementation.
- Consumers can call `getService<T>()` without knowing whether the provider is
  present; an absent, delayed, or unloaded provider is reported through
  `Expected`.
- Multiple versions of the same logical service can coexist and be selected
  explicitly.

If your "service" is a pure static utility with no state and no versioning
need, you do not need this module — a plain header is fine.

## Core Concepts

### Service

```cpp
class Service : public std::enable_shared_from_this<Service> {
public:
    virtual ~Service() = default;

    [[nodiscard]] virtual ServiceId getServiceId() const noexcept = 0;

    // Called when the service is removed from the ServiceManager.
    virtual void invalidate() {}

    static constexpr ServiceIdView ServiceId{EmptyServiceId};
    ...
};
```

Key points:

- A service must be owned by a `std::shared_ptr` — the base class inherits
  `enable_shared_from_this`.
- `invalidate()` is the **only** lifecycle hook. It is called when
  `ServiceManager::unregisterService` removes the service. Use it to drop
  references, cancel subscriptions, close handles, etc.
- `Service::ServiceId` on the base class is `EmptyServiceId`. Do not rely on
  it; derived services are expected to redefine `ServiceId` (see `ServiceImpl`
  below).

### ServiceId and ServiceIdView

A `ServiceId` is `(name, version)` with a precomputed combined hash:

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

- `ServiceId` owns the name string; `ServiceIdView` borrows it. The registry
  stores `ServiceId`, external lookups usually use `ServiceIdView`.
- Equality and hashing are on the **pair**, not just the name. This is what
  makes same-name / different-version coexistence work.
- `EmptyServiceId` is `{"", 0}`. Using `getServiceId<T>` with a `ServiceId`
  equal to it produces a compile-time error, so every usable service must
  provide a real ID.

### ServiceImpl

`ServiceImpl` is a convenience base that fills in `ServiceId` for you:

```cpp
template <class T, size_t version>
class ServiceImpl : public Service {
public:
    static constexpr ServiceIdView ServiceId{auto_name_t<T>{}, version};

    ServiceId getServiceId() const noexcept override { return ServiceId; }
};
```

The critical detail: **`T` is the source of the service *name***, not the
derived class. `auto_name_t<T>` uses the compiler's type spelling of `T`; for
the unqualified example below, that is `MyService`.

Consequences:

- `class MyService : public ServiceImpl<MyService, 1>` — the service is named
  after `MyService`, version `1`. This is the simple case.
- `class BackendServiceV1 : public ServiceImpl<Backend, 1>` and
  `class BackendServiceV2 : public ServiceImpl<Backend, 2>` — **both** are
  named `Backend` and differ only in version. This is how versioned services
  share a logical name.

If you accidentally write `ServiceImpl<BackendServiceV1, 1>` and
`ServiceImpl<BackendServiceV2, 2>`, you get **two different names**, not two
versions of one name. Watch for this.

`ServiceImpl` is convenient when the type spelling is the intended contract.
If an external service needs a fixed, compiler-independent ID, define
`ServiceId` and `getServiceId()` explicitly instead.

### ServiceManager

A process-wide singleton. All state is global. Services registered by a mod
are removed automatically when that mod unloads.

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

The `IsService` concept requires `std::is_base_of_v<Service, T>` **and** a
`T::ServiceId` whose type is `ServiceId` or `ServiceIdView`. `ServiceImpl`
satisfies both.

The registry indexes services only by `ServiceId`; `getService<T>()` does not
verify the stored object's dynamic C++ type. Treat `(name, version)` as the
interface contract and never reuse it for incompatible types.

## Quick Start

### Defining a Service

The minimal, non-versioned form:

```cpp
#include "ll/api/service/Service.h"

class MyService : public ll::service::ServiceImpl<MyService, 1> {
public:
    void doSomething() {}

    void invalidate() override {
        // Drop references, cancel subscriptions, etc.
    }
};
```

With these declarations at global scope, `MyService::ServiceId` is
`{"MyService", 1}`.

### Registering a Service

```cpp
#include <memory>

#include "ll/api/service/ServiceManager.h"
#include "ll/api/mod/NativeMod.h"

auto service = std::make_shared<MyService>();
bool ok = ll::service::ServiceManager::getInstance()
              .registerService(service);
```

Registration fails (returns `false`) if the exact `(name, version)` is already
registered. Two services with the same name but different versions register
independently. The `service` argument must not be null.

After successful registration, the registry holds a `shared_ptr` reference.
You do not need to retain another reference merely to keep the service
registered. Services registered by a mod are removed automatically when that
mod is unloaded.

### Consuming a Service

```cpp
#include "ll/api/service/ServiceManager.h"

auto& sm = ll::service::ServiceManager::getInstance();
if (auto res = sm.getService<MyService>(); res) {
    (*res)->doSomething();
} else {
    // Handle absence or version mismatch. See "Error Handling".
}
```

Never cache the returned `shared_ptr` across a reload without also subscribing
to lifecycle events (see *Subscribing to Changes*).

## Versioned Services

### The Problem

Suppose you ship `Backend` with an `add(int, int)` API. Later you need
`add(int, int, int)`. If both versions share the name `Backend` and the same
version number, the second registration fails and consumers cannot express
"give me the one with `add(int, int)`".

The registry solves this by keying on `(name, version)`. You publish
`Backend@1` and `Backend@2` simultaneously; consumers ask for the exact type
they were compiled against.

### Designing a Versioned Service

Use a shared naming type as `T`, and one wrapper per version:

```cpp
#include "ll/api/service/Service.h"

struct Backend {}; // Naming token only; it is not a service base.

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

At global scope, both are named `Backend`; the versions differ. `Backend`
supplies only the stable name. The wrappers may forward to a shared
implementation, but they do not need to inherit from `Backend`. Then add a
selector so callers can write `BackendService<2>` instead of the concrete class
name:

```cpp
template <size_t Version> struct BackendServiceSelector;
template <> struct BackendServiceSelector<1> { using type = BackendServiceV1; };
template <> struct BackendServiceSelector<2> { using type = BackendServiceV2; };

template <size_t Version>
using BackendService = typename BackendServiceSelector<Version>::type;

using BackendServiceLatest = BackendService<2>;
```

Consumers then write:

```cpp
auto v1 = sm.getService<BackendService<1>>();
auto v2 = sm.getService<BackendService<2>>();
```

Each call resolves to a distinct `ServiceId` (`Backend@1`, `Backend@2`), so
the two can coexist.

> **Do not** use each concrete version as both the class name and the name
> source: `class BackendV1 : public ServiceImpl<BackendV1, 1>` produces the
> name `BackendV1`, not `Backend`. Same-name coexistence is impossible in that
> shape.

### Batch Registration

Once you have several versions, registering them by hand is error-prone. A
common pattern probes versions at compile time and asserts that the probing
limit was not silently exceeded:

```cpp
#include <memory>

#include "ll/api/base/Meta.h"
#include "ll/api/service/ServiceManager.h"

constexpr size_t kVersionProbeLimit = 5;

auto& sm = ll::service::ServiceManager::getInstance();

auto registerVersions = [&]<template <size_t> class ServiceTemplate>() {
    ll::meta::unroll<kVersionProbeLimit>([&]<size_t Index> {
        constexpr size_t version = Index + 1;   // probe 1 .. kVersionProbeLimit
        if constexpr (requires { typename ServiceTemplate<version>; }) {
            static_assert(
                version < kVersionProbeLimit,
                "probing reached kVersionProbeLimit; raise the limit when adding versions"
            );
            auto service = std::make_shared<ServiceTemplate<version>>();
            if (!sm.registerService(service)) {
                // Handle a duplicate ID or failed registration.
            }
        }
    });
};

registerVersions.template operator()<WidgetService>();
registerVersions.template operator()<GadgetService>();
// ...
```

How it behaves:

- `ll::meta::unroll<N>` expands `Index = 0 .. N-1`, so `version = 1 .. N`.
- `if constexpr (requires { typename ServiceTemplate<version>; })` skips
  versions that do not exist.
- When you add a new version equal to `kVersionProbeLimit`, the `requires`
  becomes true and the `static_assert` fires, forcing you to raise the limit.
  This turns a silent "version 5 never registered" bug into a compile error.

The registry owns a reference after successful registration, so a local
`shared_ptr` may go out of scope. Register services during mod loading so unload
cleanup applies; retain explicit IDs only when a service must be removed before
its mod unloads.

## Lifecycle and Invalidation

The full lifecycle is:

1. `registerService(service, mod)` — inserts the service and emits
   `ServiceRegisterEvent`.
2. Consumers call `getService<T>()` / `subscribeService<T>()`.
3. `unregisterService(id)` — emits `ServiceUnregisterEvent`, calls
   `service->invalidate()`, then removes the service.
4. `unregisterService(mod)` — same, for every service owned by that mod.
5. Mod unload — automatically performs the same removal for every service
   owned by the unloading mod.

`invalidate()` is your only cleanup hook. Do not rely on the destructor: the
registry holds a `shared_ptr`, so the object may outlive your own reference by
an arbitrary amount of time. Release resources in `invalidate()`, not in `~T`.

## Subscribing to Changes

`subscribeService<T>(fn)` delivers the current service **immediately** (if it
exists), then keeps delivering register/unregister events for that exact
`ServiceId`:

```cpp
auto listener = sm.subscribeService<MyService>(
    [&](std::shared_ptr<MyService> const& s) {
        if (s) {
            // Registered (or already present at subscribe time).
            current = s;
        } else {
            // Unregistered. Drop any cached pointer.
            current.reset();
        }
    });
```

Details:

- The initial callback runs synchronously inside `subscribeService` if the
  service is already registered.
- On unregister, the callback receives `nullptr` — this is the signal to drop
  cached references. The unregister event is emitted before
  `invalidate()` runs.
- The returned `event::ListenerPtr` refers to the subscription, but the event
  bus also retains the listener. Destroying your pointer alone does not
  unsubscribe; call
  `ll::event::EventBus::getInstance().removeListener(listener)` explicitly.
- Only events for `T::ServiceId` are delivered; the subscription is
  version-specific.
- The initial lookup and listener installation are separate operations. Avoid
  subscribing concurrently with registration or unregistration; set up
  subscriptions during mod initialization.

This is the only safe way to hold a long-lived reference to a service. A raw
`getService<T>()` result can be invalidated at any unregister boundary.

## Querying Services

Two query APIs, with different intents:

```cpp
std::optional<QueryServiceResult>       queryService(std::string_view name);
std::vector<QueryServiceResult>         queryServices(std::string_view name);
```

`QueryServiceResult` is `{ name, version, modName, service }`.

- `queryService(name)` — returns the **highest** registered version for that
  name, or `std::nullopt` if the name is unknown. This is the compatibility
  API: "give me whatever is newest under this name".
- `queryServices(name)` — returns **all** versions for that name, sorted
  ascending by version. Use this for diagnostics, UI, or explicit version
  selection.

Both return `optional` / empty vector rather than `Expected`, because "name
not found" is not an error for a query — it is a normal empty result.

`QueryServiceResult::service` is a snapshot, not a permanent lease. An
unregister can invalidate the service after the query returns; use
`subscribeService` when the reference must remain valid across lifecycle
changes.

## Error Handling

`getService<T>()` returns `Expected<std::shared_ptr<T>>` and can fail with
`GetServiceError`:

```cpp
struct GetServiceError : ErrorInfoBase {
    enum class ErrorType : char {
        NotExist        = 0,
        VersionMismatch = 1,
    };
    ErrorType code;
    size_t    version;   // meaningful for VersionMismatch
};
```

Semantics:

- **`NotExist`** — no service with that name is registered at all.
- **`VersionMismatch`** — the name is registered, but the requested version is
  not. `error.version` carries the **current highest** registered version for
  that name, so you can log "you asked for v3, only v2 is available".

This distinction matters in practice:

```cpp
auto res = sm.getService(ServiceIdView{"Backend", 3});
if (!res) {
    auto& e = res.error().as<GetServiceError>();
    if (e.code == GetServiceError::NotExist) {
        // Provider mod not installed.
    } else if (e.code == GetServiceError::VersionMismatch) {
        // Provider installed, but only up to v{e.version}.
        // Consider falling back to v{e.version} or reporting incompatibility.
    }
}
```

Do not treat `VersionMismatch` as "not installed" — it usually means the
provider is present and the consumer should degrade gracefully.

## Best Practices

- **Prefer `subscribeService` over `getService` for anything long-lived.**
  A cached `shared_ptr` survives an unregister and will silently operate on an
  invalidated service.
- **Put cleanup in `invalidate()`.** Destructors run too late and too
  unpredictably, because the registry holds its own `shared_ptr`.
- **Register services during mod loading.** They are removed automatically on
  mod unload; call `unregisterService` only when removal is needed earlier.
- **Pick the name source deliberately.** For a single service,
  `ServiceImpl<Self, N>` is fine. For versioned services, use one shared naming
  type as `T` so all versions share one name.
- **Keep the number of versions small.** Each version is a live object for the
  entire server lifetime. If you ship `v1..v7`, you are paying for all seven.
- **Treat the service name and version as a public contract.** Use a stable,
  provider-specific name and never reuse the same `(name, version)` for an
  incompatible interface; the first successful registration wins.
- **Do not use services for pure static utilities.** Versioning and lifecycle
  management only add complexity there.
- **Do not cache `getService` results across events.** Cache only inside the
  `subscribeService` callback and reset to `nullptr` on unregister.

## Bedrock Accessors

`ll/api/service/Bedrock.h` exposes accessors to engine instances. They are
independent of `ServiceManager`:

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

Each returns an `optional_ref` that is empty before the corresponding engine
subsystem is up or when it is unavailable on the current client/server target.
Check for emptiness; do not assume the instance exists at any particular mod
lifecycle stage.

## Related

- [Event](event.md) — `ServiceRegisterEvent`, `ServiceUnregisterEvent`
- [Mod](mod.md) — `mod::Mod`, used as the mod argument to
  `registerService` and as the automatic and manual cleanup target
