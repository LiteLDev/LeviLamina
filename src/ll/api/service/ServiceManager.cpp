#include "ll/api/service/ServiceManager.h"

#include "ll/api/base/Containers.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/service/ServiceEvents.h"

namespace ll::service {
std::string GetServiceError::message() const noexcept {
    switch (code) {
    case NotExist:
        return "service not exist";
    case VersionMismatch:
        return fmt::format("service version mismatch [{}]", version);
    default:
        LL_UNREACHABLE;
    }
}

// to avoid a lifetime dependency on external Mod
struct ServiceInfo {
    ServiceId                id;
    std::string              modName;
    std::shared_ptr<Service> service;

    ServiceInfo(ServiceIdView const& id, std::string modName, std::shared_ptr<Service> const& service)
    : id(id),
      modName(std::move(modName)),
      service(service) {}

    bool operator==(ServiceInfo const& other) const noexcept { return id == other && modName == other.modName; }

    bool operator==(ServiceIdView const& other) const noexcept { return id == other; }
};
} // namespace ll::service

namespace std {
template <>
struct hash<ll::service::ServiceInfo> {
    size_t operator()(ll::service::ServiceInfo const& info) const noexcept {
        return ll::hash_utils::hashCombineTo(std::hash<std::string_view>{}(info.modName), info.id.hash);
    }
};
} // namespace std

namespace ll::service {

class ServiceManager::Impl {
public:
    std::recursive_mutex mutex;

    DenseMap<std::string, std::unique_ptr<ServiceInfo>> services;

    DenseMap<std::string, SmallDenseSet<ServiceInfo*>> modServices; // mod name -> services

    bool addService(std::shared_ptr<Service> const& service, std::shared_ptr<mod::Mod> const& mod) {
        std::lock_guard lock(mutex);
        auto            id = service->getServiceId();
        if (services.contains(id.name)) {
            return false;
        }

        auto info = std::make_unique<ServiceInfo>(id, mod ? mod->getName() : "", service);
        modServices[info->modName].insert(info.get());
        services.emplace(info->id.name, std::move(info));

        // notify the service that it has been registered or updated
        event::EventBus::getInstance().publish(event::ServiceRegisterEvent{service});

        return true;
    }

    bool removeService(ServiceIdView const& id) {
        std::lock_guard lock(mutex);

        auto it = services.find(id.name);
        if (it == services.end()) {
            return false;
        }

        // notify the service that it has been unregistered
        event::EventBus::getInstance().publish(event::ServiceUnregisterEvent{it->second->service});

        // invalidate the service, to notify the service that it is being removed,
        // so they can do cleanup and other stuff
        it->second->service->invalidate();
        modServices[it->second->modName].erase(it->second.get());
        services.erase(it);

        return true;
    }

    void removeService(std::string_view modName) {
        std::lock_guard lock(mutex);
        if (auto it = modServices.find(modName); it != modServices.end()) {
            for (auto& info : it->second) {
                services.erase(info->id.name);
            }
            modServices.erase(it);
        }
    }
};

Expected<std::shared_ptr<Service>> ServiceManager::getService(ServiceIdView const& id) {
    std::lock_guard lock(impl->mutex);
    if (!impl->services.contains(id.name)) {
        return makeError<GetServiceError>(GetServiceError::NotExist);
    }
    auto& info = impl->services[id.name];
    if (info->id.version != id.version) {
        return makeError<GetServiceError>(GetServiceError::VersionMismatch, info->id.version);
    }
    return info->service;
}

std::optional<QueryServiceResult> ServiceManager::queryService(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    if (auto it = impl->services.find(name); it != impl->services.end()) {
        return QueryServiceResult{it->second->id.name, it->second->id.version, it->second->modName, it->second->service};
    }
    return std::nullopt;
}

bool ServiceManager::unregisterService(ServiceIdView const& id) {
    std::lock_guard lock(impl->mutex);
    return impl->removeService(id);
}

void ServiceManager::unregisterService(mod::Mod const& mod) {
    std::lock_guard lock(impl->mutex);
    impl->removeService(mod.getName());
}

bool ServiceManager::registerService(std::shared_ptr<Service> const& service, std::shared_ptr<mod::Mod> const& mod) {
    std::lock_guard lock(impl->mutex);
    return impl->addService(service, mod);
}

ServiceManager& ServiceManager::getInstance() {
    static ServiceManager instance;
    return instance;
}

ServiceManager::ServiceManager() : impl(std::make_unique<Impl>()) {}

ServiceManager::~ServiceManager() = default;

} // namespace ll::service
