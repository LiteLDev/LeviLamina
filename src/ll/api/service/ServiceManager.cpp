#include "ll/api/service/ServiceManager.h"

#include <unordered_map>

#include "nonstd/expected.hpp"

namespace ll::service {
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
        return ll::hash::hashCombine(
            ll::hash::hashCombine(std::hash<std::string_view>{}(info.name), std::hash<size_t>{}(info.version)),
            std::hash<std::string_view>{}(info.pluginName)
        );
    }
};
} // namespace std

namespace ll::service {

class ServiceManager::Impl {
public:
    std::recursive_mutex mutex;

    std::unordered_map<std::string_view, std::unique_ptr<ServiceInfo>> services;

    std::unordered_map<std::string_view, std::unordered_set<ServiceInfo*>> pluginServices; // plugin name -> services

    bool addService(
        ServiceId const&                       id,
        std::shared_ptr<Service> const&        service,
        std::shared_ptr<plugin::Plugin> const& plugin
    ) {
        std::lock_guard lock(mutex);
        if (services.contains(id.name)) {
            return false;
        }
        auto info = std::make_unique<ServiceInfo>(id, plugin->getManifest().name, service);
        pluginServices[info->pluginName].insert(info.get());
        services.emplace(info->name, std::move(info));
        return true;
    }

    bool removeService(ServiceId const& id) {
        std::lock_guard lock(mutex);
        if (auto it = services.find(id.name); it != services.end()) {
            pluginServices[it->second->pluginName].erase(it->second.get());
            services.erase(it);
            return true;
        }
        return false;
    }
};

auto ServiceManager::getService(ServiceId const& id) -> nonstd::expected<std::shared_ptr<Service>, GetServiceError> {
    std::lock_guard lock(impl->mutex);
    if (!impl->services.contains(id.name)) {
        return nonstd::make_unexpected(GetServiceError::NotExist);
    }
    auto& info = impl->services[id.name];
    if (info->version != id.version) {
        return nonstd::make_unexpected(GetServiceError{GetServiceError::VersionMismatch, info->version});
    }
    return info->service;
}

std::optional<std::pair<ServiceId, std::shared_ptr<Service>>> ServiceManager::queryService(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    if (!impl->services.contains(name)) {
        return std::nullopt;
    }
    auto& info = impl->services[name];
    return std::make_pair(ServiceId{info->name, info->version}, info->service);
}

bool ServiceManager::unregisterService(ServiceId const& id) {
    std::lock_guard lock(impl->mutex);
    return impl->removeService(id);
}

void ServiceManager::unregisterService(plugin::Plugin const& plugin) {
    std::lock_guard lock(impl->mutex);
    if (!impl->pluginServices.contains(plugin.getManifest().name)) {
        return;
    }
    for (auto& info : impl->pluginServices[plugin.getManifest().name]) {
        impl->services.erase(info->name);
    }
    impl->pluginServices.erase(plugin.getManifest().name);
}

bool ServiceManager::registerService(
    ServiceId const&                       id,
    std::shared_ptr<Service> const&        service,
    std::shared_ptr<plugin::Plugin> const& plugin
) {
    std::lock_guard lock(impl->mutex);
    return impl->addService(id, service, plugin);
}

ServiceManager& ServiceManager::getInstance() {
    static ServiceManager instance;
    return instance;
}

ServiceManager::ServiceManager() : impl(std::make_unique<Impl>()) {}

ServiceManager::~ServiceManager() = default;

} // namespace ll::service
