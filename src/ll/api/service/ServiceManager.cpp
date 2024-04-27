#include "ll/api/service/ServiceManager.h"

#include <unordered_map>

#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServiceEvents.h"

namespace ll::service {
std::string GetServiceError::message() const noexcept {
    switch (code) {
    case NotExist:
        return "service not exist";
    case VersionMismatch:
        return fmt::format("service version mismatch [{}]", version);
    default:
        _STL_UNREACHABLE;
    }
}

// to avoid a lifetime dependency on external Plugin
struct ServiceInfo {
    std::string              name;
    size_t                   version;
    std::string              pluginName;
    std::shared_ptr<Service> service;

    ServiceInfo(std::string name, size_t version, std::string pluginName, std::shared_ptr<Service> const& service)
    : name(std::move(name)),
      version(version),
      pluginName(std::move(pluginName)),
      service(service) {}

    ServiceInfo(ServiceId const& id, std::string pluginName, std::shared_ptr<Service> const& service)
    : ServiceInfo(std::string{id.name}, id.version, std::move(pluginName), service) {}

    bool operator==(ServiceInfo const& other) const noexcept {
        return name == other.name && version == other.version && pluginName == other.pluginName;
    }

    bool operator==(ServiceId const& other) const noexcept { return name == other.name && version == other.version; }
};
} // namespace ll::service

namespace std {
template <>
struct hash<ll::service::ServiceInfo> {
    size_t operator()(ll::service::ServiceInfo const& info) const noexcept {
        size_t hash = std::hash<std::string_view>{}(info.name);
        ll::hash_utils::hashCombine(std::hash<size_t>{}(info.version), hash);
        ll::hash_utils::hashCombine(std::hash<std::string_view>{}(info.pluginName), hash);
        return hash;
    }
};
} // namespace std

namespace ll::service {

class ServiceManager::Impl {
public:
    std::recursive_mutex mutex;

    std::unordered_map<std::string_view, std::unique_ptr<ServiceInfo>> services;

    std::unordered_map<std::string_view, std::unordered_set<ServiceInfo*>> pluginServices; // plugin name -> services

    bool addService(std::shared_ptr<Service> const& service, std::shared_ptr<plugin::Plugin> const& plugin) {
        std::lock_guard lock(mutex);
        auto            id = service->getServiceId();
        if (services.contains(id.name)) {
            return false;
        }

        auto info = std::make_unique<ServiceInfo>(id, plugin ? plugin->getManifest().name : "", service);
        pluginServices[info->pluginName].insert(info.get());
        services.emplace(info->name, std::move(info));

        // notify the service that it has been registered or updated
        event::EventBus::getInstance().publish(event::ServiceRegisterEvent{service});

        return true;
    }

    bool removeService(ServiceId const& id) {
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
        pluginServices[it->second->pluginName].erase(it->second.get());
        services.erase(it);

        return true;
    }

    void removeService(std::string_view pluginName) {
        std::lock_guard lock(mutex);
        if (auto it = pluginServices.find(pluginName); it != pluginServices.end()) {
            for (auto& info : it->second) {
                services.erase(info->name);
            }
            pluginServices.erase(it);
        }
    }
};

Expected<std::shared_ptr<Service>> ServiceManager::getService(ServiceId const& id) {
    std::lock_guard lock(impl->mutex);
    if (!impl->services.contains(id.name)) {
        return makeError<GetServiceError>(GetServiceError::NotExist);
    }
    auto& info = impl->services[id.name];
    if (info->version != id.version) {
        return makeError<GetServiceError>(GetServiceError::VersionMismatch, info->version);
    }
    return info->service;
}

std::optional<QueryServiceResult> ServiceManager::queryService(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    if (auto it = impl->services.find(name); it != impl->services.end()) {
        return QueryServiceResult{it->second->name, it->second->version, it->second->pluginName, it->second->service};
    }
    return std::nullopt;
}

bool ServiceManager::unregisterService(ServiceId const& id) {
    std::lock_guard lock(impl->mutex);
    return impl->removeService(id);
}

void ServiceManager::unregisterService(plugin::Plugin const& plugin) {
    std::lock_guard lock(impl->mutex);
    impl->removeService(plugin.getManifest().name);
}

bool ServiceManager::registerService(
    std::shared_ptr<Service> const&        service,
    std::shared_ptr<plugin::Plugin> const& plugin
) {
    std::lock_guard lock(impl->mutex);
    return impl->addService(service, plugin);
}

ServiceManager& ServiceManager::getInstance() {
    static ServiceManager instance;
    return instance;
}

ServiceManager::ServiceManager() : impl(std::make_unique<Impl>()) {}

ServiceManager::~ServiceManager() = default;

} // namespace ll::service
