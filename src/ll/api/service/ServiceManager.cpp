#include "ll/api/service/ServiceManager.h"

#include "ll/api/base/Containers.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/service/ServiceEvents.h"
#include "ll/api/i18n/I18n.h"

namespace ll::service {
std::string GetServiceError::message(std::string_view locale) const noexcept {
    switch (code) {
    case NotExist:
        return "service not exist"_trl(locale);
    case VersionMismatch:
        return "service version mismatch [{}]"_trl(locale, version);
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
};
} // namespace ll::service

namespace ll::service {

class ServiceManager::Impl {
public:
    std::recursive_mutex mutex;

    DenseMap<ServiceId, std::unique_ptr<ServiceInfo>>  services;
    DenseMap<std::string, SmallDenseSet<ServiceInfo*>> nameServices; // service name -> versions
    DenseMap<std::string, SmallDenseSet<ServiceInfo*>> modServices;  // mod name -> services

    static QueryServiceResult makeQueryResult(ServiceInfo const& info) {
        return QueryServiceResult{info.id.name, info.id.version, info.modName, info.service};
    }

    [[nodiscard]] optional_ref<ServiceInfo> findLatestService(std::string_view name) const {
        auto it = nameServices.find(name);
        if (it == nameServices.end() || it->second.empty()) return nullptr;
        return *std::ranges::max_element(it->second, {}, [](auto& info) { return info->id.version; });
    }

    [[nodiscard]] std::optional<size_t> findLatestVersion(std::string_view name) const {
        return findLatestService(name).transform([](auto& service) { return service.id.version; });
    }

    bool addService(std::shared_ptr<Service> const& service, std::shared_ptr<mod::Mod> const& mod) {
        std::lock_guard lock(mutex);
        auto            id = service->getServiceId();
        if (services.contains(id)) return false;

        auto  info = std::make_unique<ServiceInfo>(id, mod ? mod->getName() : "", service);
        auto* ptr  = info.get();

        nameServices[id.name].insert(info.get());
        modServices[info->modName].insert(info.get());
        services.emplace(ptr->id, std::move(info));

        event::EventBus::getInstance().publish(event::ServiceRegisterEvent{service});
        return true;
    }

    bool removeServiceUnlocked(ServiceIdView const& id) {
        auto it = services.find(ServiceId{id});
        if (it == services.end()) return false;

        auto* info = it->second.get();

        event::EventBus::getInstance().publish(event::ServiceUnregisterEvent{info->service});
        info->service->invalidate();

        if (auto modIt = modServices.find(info->modName); modIt != modServices.end()) {
            modIt->second.erase(info);
            if (modIt->second.empty()) {
                modServices.erase(modIt);
            }
        }

        if (auto nameIt = nameServices.find(info->id.name); nameIt != nameServices.end()) {
            nameIt->second.erase(info);
            if (nameIt->second.empty()) {
                nameServices.erase(nameIt);
            }
        }

        services.erase(it);
        return true;
    }

    bool removeService(ServiceIdView const& id) {
        std::lock_guard lock(mutex);
        return removeServiceUnlocked(id);
    }

    void removeService(std::string_view modName) {
        std::lock_guard lock(mutex);
        auto            it = modServices.find(modName);
        if (it == modServices.end()) return;

        std::vector<ServiceId> ids;
        ids.reserve(it->second.size());
        std::ranges::copy(it->second | std::views::transform(&ServiceInfo::id), std::back_inserter(ids));
        std::ranges::for_each(ids, std::bind_front(&Impl::removeServiceUnlocked, this));
    }
};

Expected<std::shared_ptr<Service>> ServiceManager::getService(ServiceIdView const& id) {
    std::lock_guard lock(impl->mutex);

    if (auto it = impl->services.find(ServiceId{id}); it != impl->services.end()) {
        return it->second->service;
    }

    if (auto version = impl->findLatestVersion(id.name); version.has_value()) {
        return makeError<GetServiceError>(GetServiceError::VersionMismatch, *version);
    }

    return makeError<GetServiceError>(GetServiceError::NotExist);
}

std::optional<QueryServiceResult> ServiceManager::queryService(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    return impl->findLatestService(name).transform(&Impl::makeQueryResult);
}

std::vector<QueryServiceResult> ServiceManager::queryServices(std::string_view name) {
    std::lock_guard                 lock(impl->mutex);
    std::vector<QueryServiceResult> result;
    auto                            it = impl->nameServices.find(name);
    if (it == impl->nameServices.end()) return result;

    result.reserve(it->second.size());
    std::ranges::copy(
        it->second | std::views::transform([](auto& info) { return Impl::makeQueryResult(*info); }),
        std::back_inserter(result)
    );
    std::ranges::sort(result, {}, &QueryServiceResult::version);

    return result;
}

bool ServiceManager::unregisterService(ServiceIdView const& id) { return impl->removeService(id); }

void ServiceManager::unregisterService(mod::Mod const& mod) { impl->removeService(mod.getName()); }

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
