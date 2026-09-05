#include "ll/core/protocol/ModLifecycleIntegration.h"

#include <cstdint>
#include <mutex>
#include <string>
#include <unordered_set>
#include <utility>

#include "ll/api/mod/Mod.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/mod/ModRegistrar.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"

namespace ll::protocol::detail {

namespace mod_lifecycle_detail {

enum class DeferredAction : std::uint8_t {
    Disable,
    Unload,
};

struct State {
    std::mutex                          mutex;
    RegistryInvalidator                 invalidator;
    LifecycleExecutor                   executor;
    mod::ModManagerRegistry::CallbackId enableCallback{};
    mod::ModManagerRegistry::CallbackId disableCallback{};
    std::unordered_set<std::string>     deferred;
    bool                                invalidationPending{};
    std::uint64_t                       generation{1};
};

State& state() {
    static State value;
    return value;
}

std::string deferredKey(DeferredAction action, std::string_view owner) {
    std::string key;
    key.reserve(owner.size() + 2);

    key.push_back(action == DeferredAction::Disable ? 'd' : 'u');
    key.push_back(':');
    key.append(owner);
    return key;
}

void logFailure(Error& error) { error.log(getLogger()); }

void activateOwner(std::string_view owner) {
    auto activated = PayloadRegistryAccess::activateOwner(PayloadRegistry::getInstance(), owner);
    if (!activated) logFailure(activated.error());
}

void drainOwner(std::string_view owner) {
    auto drained = PayloadRegistryAccess::drainOwner(PayloadRegistry::getInstance(), owner);
    if (!drained) logFailure(drained.error());
}

bool defer(DeferredAction action, std::string_view owner) noexcept {
    try {
        auto& state = mod_lifecycle_detail::state();

        LifecycleExecutor executor;

        std::string   key = deferredKey(action, owner);
        std::string   name{owner};
        std::uint64_t generation{};
        {
            std::scoped_lock lock{state.mutex};
            if (!state.executor) return false;

            executor = state.executor;
            if (!state.deferred.emplace(key).second) return false;

            generation = state.generation;
        }

        try {
            executor([action, generation, key, name]() mutable {
                {
                    auto& state = mod_lifecycle_detail::state();

                    std::scoped_lock lock{state.mutex};
                    if (state.generation != generation || state.deferred.erase(key) == 0) {
                        return;
                    }
                }

                auto& registry = mod::ModManagerRegistry::getInstance();
                if (!registry.hasMod(name)) return;

                auto result = action == DeferredAction::Disable ? mod::ModRegistrar::getInstance().disableMod(name)
                                                                : mod::ModRegistrar::getInstance().unloadMod(name);
                if (!result) {
                    logFailure(result.error());
                }
            });
        } catch (...) {
            std::scoped_lock lock{state.mutex};

            state.deferred.erase(key);
            return false;
        }

        return true;
    } catch (...) {
        return false;
    }
}

Expected<> prepare(mod::Mod const& owner, DeferredAction action) {
    auto& registry = PayloadRegistry::getInstance();

    auto drained = registry.drainOwner(owner);
    if (drained) return {};

    auto& error = drained.error();
    if (error.isA<LifecycleErrorInfo>() && error.as<LifecycleErrorInfo>().code == LifecycleErrc::WouldDeadlock) {
        defer(action, owner.getName());
    }

    return forwardError(error);
}

} // namespace mod_lifecycle_detail

} // namespace ll::protocol::detail

namespace ll::protocol {

Expected<> initializeModLifecycleIntegration(RegistryInvalidator invalidator, LifecycleExecutor executor) noexcept {
    try {
        if (!invalidator || !executor) {
            return makeProtocolError(ProtocolErrc::InternalFailure, "missing mod lifecycle integration callback");
        }

        auto& state = detail::mod_lifecycle_detail::state();
        {
            std::scoped_lock lock{state.mutex};
            if (state.enableCallback != 0 || state.disableCallback != 0) return {};

            ++state.generation;
            state.invalidator = std::move(invalidator);
            state.executor    = std::move(executor);
        }

        auto& registry = mod::ModManagerRegistry::getInstance();

        auto const& owner = getSelfModIns();

        auto enable  = registry.executeOnModEnable(detail::mod_lifecycle_detail::activateOwner, owner);
        auto disable = registry.executeOnModDisable(detail::mod_lifecycle_detail::drainOwner, owner);

        {
            std::scoped_lock lock{state.mutex};
            state.enableCallback  = enable;
            state.disableCallback = disable;
        }

        return {};
    } catch (...) {
        shutdownModLifecycleIntegration();
        return makeExceptionError();
    }
}

void shutdownModLifecycleIntegration() noexcept {
    try {
        auto& state = detail::mod_lifecycle_detail::state();

        mod::ModManagerRegistry::CallbackId enable{};
        mod::ModManagerRegistry::CallbackId disable{};
        {
            std::scoped_lock lock{state.mutex};

            enable  = std::exchange(state.enableCallback, 0);
            disable = std::exchange(state.disableCallback, 0);

            state.invalidator = {};
            state.executor    = {};
            state.deferred.clear();
            state.invalidationPending = false;
            ++state.generation;
        }

        auto& registry = mod::ModManagerRegistry::getInstance();
        if (enable != 0) (void)registry.eraseOnModCallback(enable);
        if (disable != 0) (void)registry.eraseOnModCallback(disable);
    } catch (...) {}
}

} // namespace ll::protocol

namespace ll::protocol::detail {

void notifyRegistryChanged() noexcept {
    try {
        LifecycleExecutor executor;
        std::uint64_t     generation{};
        {
            auto& state = mod_lifecycle_detail::state();

            std::scoped_lock lock{state.mutex};
            if (!state.invalidator || !state.executor || state.invalidationPending) return;

            executor                  = state.executor;
            generation                = state.generation;
            state.invalidationPending = true;
        }

        try {
            executor([generation] {
                RegistryInvalidator invalidator;
                {
                    auto& state = mod_lifecycle_detail::state();

                    std::scoped_lock lock{state.mutex};
                    if (state.generation != generation || !state.invalidationPending) return;

                    state.invalidationPending = false;
                    invalidator               = state.invalidator;
                }
                if (invalidator) invalidator();
            });
        } catch (...) {
            auto& state = mod_lifecycle_detail::state();

            std::scoped_lock lock{state.mutex};
            if (state.generation == generation) state.invalidationPending = false;
        }
    } catch (...) {}
}

} // namespace ll::protocol::detail

namespace ll::protocol {

Expected<> prepareModDisable(mod::Mod const& owner) {
    return detail::mod_lifecycle_detail::prepare(owner, detail::mod_lifecycle_detail::DeferredAction::Disable);
}

Expected<> prepareModUnload(mod::Mod const& owner) {
    return detail::mod_lifecycle_detail::prepare(owner, detail::mod_lifecycle_detail::DeferredAction::Unload);
}

Expected<> finalizeModUnload(mod::Mod const& owner) noexcept {
    return PayloadRegistry::getInstance().drainOwner(owner);
}

} // namespace ll::protocol
