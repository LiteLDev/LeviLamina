#include "ll/api/protocol/PayloadRegistry.h"

#include <algorithm>
#include <atomic>
#include <cassert>
#include <mutex>
#include <unordered_map>
#include <unordered_set>
#include <utility>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"
#include "ll/core/protocol/DescriptorState.h"
#include "ll/core/protocol/ModuleCatalog.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"
#include "ll/core/protocol/ProtocolRuntime.h"
#include "ll/core/protocol/RuntimeIdentity.h"

namespace ll::protocol {

class ModuleRegistration::Impl {
public:
    PayloadRegistry*                     registry{};
    std::shared_ptr<detail::ModuleState> state;
};

class PayloadRegistration::Impl {
public:
    PayloadRegistry*                         registry{};
    std::shared_ptr<detail::DescriptorState> state;
};

class PayloadRegistry::Impl {
public:
    mutable std::mutex writerMutex;

    detail::ModuleCatalog                        moduleCatalog;
    std::unordered_map<std::string, std::string> namespaceOwners;

    std::unordered_map<PayloadId, std::shared_ptr<detail::DescriptorState>>       payloadStates;
    std::unordered_map<PayloadId, std::uint64_t>                                  lastPayloadGeneration;
    std::unordered_map<std::uint64_t, PayloadId>                                  runtimeOwners;
    std::unordered_map<std::type_index, std::shared_ptr<detail::DescriptorState>> registeredTypes;
    std::unordered_set<detail::ModuleState*>                                      attachedModules;
    std::unordered_set<detail::DescriptorState*>                                  attachedPayloads;

    std::atomic<std::shared_ptr<detail::RegistrySnapshot const>> currentSnapshot{
        std::make_shared<detail::RegistrySnapshot const>()
    };
    std::uint64_t currentRevision{};

    void publishLocked() {
        auto next      = std::make_shared<detail::RegistrySnapshot>();
        next->revision = ++currentRevision;

        for (auto const& module : moduleCatalog.states()) {
            if (!attachedModules.contains(module.get())
                || module->lifecycle.load(std::memory_order_acquire) != detail::DescriptorLifecycle::Active) {
                continue;
            }

            next->modulesById.emplace(module->descriptor->id(), module->descriptor);
            next->modules.emplace_back(module->descriptor);
        }
        for (auto const& [id, state] : payloadStates) {
            if (!attachedPayloads.contains(state.get()) || !state->active()) {
                continue;
            }

            auto descriptor = state->descriptor();
            next->payloadsById.emplace(id, descriptor);
            next->payloadsByRuntimeId.emplace(descriptor->runtimeId(), descriptor);
            next->payloadsByType.emplace(state->type(), descriptor);
            next->payloads.emplace_back(std::move(descriptor));
        }

        std::ranges::sort(next->modules, {}, [](auto const& descriptor) { return descriptor->id().value(); });
        std::ranges::sort(next->payloads, {}, [](auto const& descriptor) { return descriptor->id().value(); });
        currentSnapshot.store(std::move(next), std::memory_order_release);
    }

    Expected<> unregisterPayload(std::shared_ptr<detail::DescriptorState> const& state, bool wait) noexcept {
        try {
            {
                std::scoped_lock lock{writerMutex};
                if (attachedPayloads.erase(state.get()) != 0) {
                    auto type = registeredTypes.find(state->type());
                    if (type != registeredTypes.end() && type->second == state) {
                        registeredTypes.erase(type);
                    }

                    if (auto module = state->module()) {
                        [[maybe_unused]] auto const previous =
                            module->payloadCount.fetch_sub(1, std::memory_order_acq_rel);
                        assert(previous != 0);
                        if (previous == 1 && module->closeRequested.load(std::memory_order_acquire)) {
                            attachedModules.erase(module.get());
                            module->lifecycle.store(detail::DescriptorLifecycle::Inactive, std::memory_order_release);
                        }
                    }
                    if (auto drained = state->drain(false); !drained) {
                        return drained;
                    }

                    publishLocked();
                }
            }
            return state->drain(wait);
        } catch (...) {
            return makeExceptionError();
        }
    }

    Expected<> unregisterModule(std::shared_ptr<detail::ModuleState> const& state, bool wait) noexcept {
        try {
            std::scoped_lock lock{writerMutex};
            if (!attachedModules.contains(state.get())) {
                return {};
            }

            if (state->payloadCount.load(std::memory_order_acquire) != 0) {
                if (wait) {
                    return makeRegistrationError(
                        RegistrationErrc::PayloadsStillRegistered,
                        state->descriptor->id().str()
                    );
                }
                state->closeRequested.store(true, std::memory_order_release);
                return {};
            }

            attachedModules.erase(state.get());
            state->lifecycle.store(detail::DescriptorLifecycle::Inactive, std::memory_order_release);

            publishLocked();
            return {};
        } catch (...) {
            return makeExceptionError();
        }
    }
};

namespace payload_registry_detail {

template <class Rollback>
class RollbackGuard final {
    Rollback mRollback;
    bool     mArmed{true};

public:
    explicit RollbackGuard(Rollback rollback) : mRollback(std::move(rollback)) {}

    RollbackGuard(RollbackGuard const&)            = delete;
    RollbackGuard& operator=(RollbackGuard const&) = delete;

    ~RollbackGuard() noexcept {
        if (mArmed) {
            mRollback();
        }
    }

    void commit() noexcept { mArmed = false; }
};

Expected<> normalize(PayloadDefinition& definition) noexcept {
    switch (definition.direction) {
    case PayloadDirection::ClientToServer:
    case PayloadDirection::ServerToClient:
        break;
    default:
        return makeRegistrationError(RegistrationErrc::InvalidDirection);
    }

    switch (definition.requirement) {
    case PayloadRequirement::Optional:
    case PayloadRequirement::Required:
        break;
    default:
        return makeRegistrationError(RegistrationErrc::InvalidDirection, "payload requirement");
    }

    if (definition.schemas.empty()) {
        return makeRegistrationError(RegistrationErrc::EmptySchemaSet);
    }
    if (definition.schemas.size() > Limits::MaxSchemasPerPayload) {
        return makeRegistrationError(RegistrationErrc::InvalidLimit, "payload schema count");
    }

    std::ranges::sort(definition.schemas);
    if (definition.schemas.front() == 0) {
        return makeRegistrationError(RegistrationErrc::InvalidLimit, "zero payload schema");
    }
    if (std::ranges::adjacent_find(definition.schemas) != definition.schemas.end()) {
        return makeRegistrationError(RegistrationErrc::DuplicateSchema);
    }
    if (definition.maxEncodedSize == 0 || definition.maxEncodedSize > Limits::MaxPayloadBody) {
        return makeRegistrationError(RegistrationErrc::InvalidLimit, "payload body size");
    }

    return {};
}

bool sameOwner(std::weak_ptr<mod::Mod> const& weak, mod::Mod const& owner) noexcept {
    auto current = weak.lock();
    return current && current.get() == &owner;
}

} // namespace payload_registry_detail

PayloadRegistry::PayloadRegistry() : mImpl(std::make_unique<Impl>()) {}
PayloadRegistry::~PayloadRegistry() = default;

PayloadRegistry& PayloadRegistry::getInstance() {
    static PayloadRegistry instance;
    return instance;
}

Expected<ModuleRegistration>
PayloadRegistry::registerModule(ModuleDefinition definition, std::weak_ptr<mod::Mod> const& weakOwner) noexcept {
    try {
        auto owner = weakOwner.lock();
        if (!owner) {
            return makeRegistrationError(RegistrationErrc::OwnerUnavailable);
        }

        auto protocolNamespace = detail::resolveModProtocolNamespace(owner->getManifest());
        if (!protocolNamespace) {
            return forwardError(protocolNamespace.error());
        }

        return registerModuleOwned(std::move(definition), owner, *protocolNamespace);
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<ModuleRegistration> PayloadRegistry::registerModuleOwned(
    ModuleDefinition                 definition,
    std::shared_ptr<mod::Mod> const& owner,
    ProtocolNamespace const&         protocolNamespace
) noexcept {
    try {
        if (auto initialized = detail::ProtocolRuntime::getInstance().initialize(); !initialized) {
            return forwardError(initialized.error());
        }

        auto id = makeModuleId(protocolNamespace, definition.name);
        if (!id) {
            return forwardError(id.error());
        }

        std::unique_lock lock{mImpl->writerMutex};

        if (mImpl->attachedModules.size() >= Limits::MaxDeclaredModules) {
            return makeRegistrationError(RegistrationErrc::InvalidLimit, "module declaration count");
        }

        auto namespaceValue = protocolNamespace.str();
        auto namespaceOwner = mImpl->namespaceOwners.find(namespaceValue);
        if (namespaceOwner != mImpl->namespaceOwners.end() && namespaceOwner->second != owner->getName()) {
            return makeRegistrationError(RegistrationErrc::NamespaceOwned, namespaceValue);
        }

        auto previousModule = mImpl->moduleCatalog.find(*id);

        bool insertedNamespace{};
        bool registeredModule{};
        bool attachedModule{};

        std::shared_ptr<detail::ModuleState> state;

        auto rollback = payload_registry_detail::RollbackGuard{[&]() noexcept {
            if (attachedModule) {
                mImpl->attachedModules.erase(state.get());
            }
            if (registeredModule) {
                mImpl->moduleCatalog.restore(*id, std::move(previousModule));
            }
            if (insertedNamespace) {
                mImpl->namespaceOwners.erase(namespaceValue);
            }
        }};

        if (namespaceOwner == mImpl->namespaceOwners.end()) {
            insertedNamespace = mImpl->namespaceOwners.emplace(namespaceValue, owner->getName()).second;
        }

        auto lifecycle =
            owner->isEnabled() ? detail::DescriptorLifecycle::Active : detail::DescriptorLifecycle::Pending;
        auto registered = mImpl->moduleCatalog.registerModule(*id, std::move(definition), owner, lifecycle);
        if (!registered) {
            return forwardError(registered.error());
        }
        state            = std::move(*registered);
        registeredModule = true;

        auto registrationImpl      = std::make_unique<ModuleRegistration::Impl>();
        registrationImpl->registry = this;
        registrationImpl->state    = state;

        attachedModule = mImpl->attachedModules.emplace(state.get()).second;
        assert(attachedModule);

        mImpl->publishLocked();
        rollback.commit();
        lock.unlock();

        ModuleRegistration registration;
        registration.mImpl = std::move(registrationImpl);
        return registration;
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<PayloadRegistration> PayloadRegistry::registerPayloadErased(
    ModuleRegistration const& module,
    PayloadDefinition         definition,
    std::type_index           type,
    detail::PayloadCallbacks  callbacks
) noexcept {
    try {
        if (!module.mImpl || module.mImpl->registry != this || !module.mImpl->state) {
            return makeRegistrationError(RegistrationErrc::ModuleNotFound);
        }
        if (auto normalized = payload_registry_detail::normalize(definition); !normalized) {
            return forwardError(normalized.error());
        }

        auto moduleState = module.mImpl->state;
        auto owner       = moduleState->owner.lock();
        if (!owner) {
            return makeRegistrationError(RegistrationErrc::OwnerUnavailable);
        }

        auto id = makePayloadId(moduleState->descriptor->id(), definition.name);
        if (!id) {
            return forwardError(id.error());
        }

        auto runtimeId = detail::payloadRuntimeId(*id);

        std::unique_lock lock{mImpl->writerMutex};
        if (!mImpl->attachedModules.contains(moduleState.get())) {
            return makeRegistrationError(RegistrationErrc::ModuleNotFound, moduleState->descriptor->id().str());
        }

        auto moduleLifecycle = moduleState->lifecycle.load(std::memory_order_acquire);
        if (moduleLifecycle == detail::DescriptorLifecycle::Draining
            || moduleLifecycle == detail::DescriptorLifecycle::Inactive) {
            return makeRegistrationError(RegistrationErrc::ModuleNotFound, moduleState->descriptor->id().str());
        }

        if (auto current = mImpl->payloadStates.find(*id); current != mImpl->payloadStates.end()) {
            auto const& previous = current->second;
            if (previous->lifecycle() != detail::DescriptorLifecycle::Inactive) {
                return makeRegistrationError(RegistrationErrc::DuplicatePayload, id->str());
            }

            auto previousDescriptor = previous->descriptor();
            if (previousDescriptor->owner() != owner->getName()
                || previousDescriptor->definition().direction != definition.direction) {
                return makeRegistrationError(RegistrationErrc::TombstoneMismatch, id->str());
            }
        }
        if (mImpl->registeredTypes.contains(type)) {
            return makeRegistrationError(RegistrationErrc::DuplicateType, type.name());
        }
        if (auto claimed = mImpl->runtimeOwners.find(runtimeId);
            claimed != mImpl->runtimeOwners.end() && claimed->second != *id) {
            return makeRegistrationError(RegistrationErrc::RuntimeIdCollision, id->str());
        }
        if (mImpl->attachedPayloads.size() >= Limits::MaxDeclaredPayloads) {
            return makeRegistrationError(RegistrationErrc::InvalidLimit, "payload declaration count");
        }
        if (auto installed = detail::ProtocolRuntime::getInstance().installPayloadSlot(*id, runtimeId); !installed) {
            return forwardError(installed.error());
        }

        auto generation = ++mImpl->lastPayloadGeneration[*id];
        auto descriptor = std::make_shared<PayloadDescriptor const>(
            *id,
            moduleState->descriptor->id(),
            std::move(definition),
            owner->getName(),
            runtimeId,
            generation
        );
        auto lifecycle = moduleLifecycle == detail::DescriptorLifecycle::Active && owner->isEnabled()
                           ? detail::DescriptorLifecycle::Active
                           : detail::DescriptorLifecycle::Pending;
        auto state     = std::make_shared<detail::DescriptorState>(
            descriptor,
            moduleState,
            owner,
            type,
            std::move(callbacks),
            lifecycle
        );

        auto registrationImpl      = std::make_unique<PayloadRegistration::Impl>();
        registrationImpl->registry = this;
        registrationImpl->state    = state;

        bool insertedRuntime{};
        bool incrementedPayloadCount{};

        std::shared_ptr<detail::DescriptorState> previousPayload;

        auto rollback = payload_registry_detail::RollbackGuard{[&]() noexcept {
            if (incrementedPayloadCount) {
                [[maybe_unused]] auto const previous =
                    moduleState->payloadCount.fetch_sub(1, std::memory_order_acq_rel);
                assert(previous != 0);
            }

            mImpl->attachedPayloads.erase(state.get());
            if (auto current = mImpl->payloadStates.find(*id);
                current != mImpl->payloadStates.end() && current->second == state) {
                if (previousPayload) {
                    current->second = std::move(previousPayload);
                } else {
                    mImpl->payloadStates.erase(current);
                }
            }

            mImpl->registeredTypes.erase(type);
            if (insertedRuntime) {
                mImpl->runtimeOwners.erase(runtimeId);
            }
        }};

        if (!mImpl->runtimeOwners.contains(runtimeId)) {
            insertedRuntime = mImpl->runtimeOwners.emplace(runtimeId, *id).second;
        }

        [[maybe_unused]] auto const typeInsertion = mImpl->registeredTypes.emplace(type, state);
        assert(typeInsertion.second);

        if (auto current = mImpl->payloadStates.find(*id); current == mImpl->payloadStates.end()) {
            [[maybe_unused]] auto const payloadInsertion = mImpl->payloadStates.emplace(*id, state);
            assert(payloadInsertion.second);
        } else {
            previousPayload = std::move(current->second);
            current->second = state;
        }

        [[maybe_unused]] auto const attachmentInsertion = mImpl->attachedPayloads.emplace(state.get());
        assert(attachmentInsertion.second);

        moduleState->payloadCount.fetch_add(1, std::memory_order_release);
        incrementedPayloadCount = true;

        mImpl->publishLocked();
        rollback.commit();
        lock.unlock();

        PayloadRegistration registration;
        registration.mImpl = std::move(registrationImpl);
        return registration;
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> PayloadRegistry::resetModule(std::shared_ptr<detail::ModuleState> const& state, bool wait) noexcept {
    return mImpl->unregisterModule(state, wait);
}

Expected<> PayloadRegistry::resetPayload(std::shared_ptr<detail::DescriptorState> const& state, bool wait) noexcept {
    return mImpl->unregisterPayload(state, wait);
}

std::uint64_t PayloadRegistry::revision() const noexcept {
    return mImpl->currentSnapshot.load(std::memory_order_acquire)->revision;
}

std::shared_ptr<ModuleDescriptor const> PayloadRegistry::findModule(ModuleId const& id) const noexcept {
    auto snapshot = mImpl->currentSnapshot.load(std::memory_order_acquire);
    auto found    = snapshot->modulesById.find(id);
    return found == snapshot->modulesById.end() ? nullptr : found->second;
}

std::shared_ptr<PayloadDescriptor const> PayloadRegistry::findPayload(PayloadId const& id) const noexcept {
    auto snapshot = mImpl->currentSnapshot.load(std::memory_order_acquire);
    auto found    = snapshot->payloadsById.find(id);
    return found == snapshot->payloadsById.end() ? nullptr : found->second;
}

std::shared_ptr<PayloadDescriptor const> PayloadRegistry::findPayload(std::uint64_t runtimeId) const noexcept {
    auto snapshot = mImpl->currentSnapshot.load(std::memory_order_acquire);
    auto found    = snapshot->payloadsByRuntimeId.find(runtimeId);
    return found == snapshot->payloadsByRuntimeId.end() ? nullptr : found->second;
}

std::shared_ptr<PayloadDescriptor const> PayloadRegistry::findPayload(std::type_index type) const noexcept {
    auto snapshot = mImpl->currentSnapshot.load(std::memory_order_acquire);
    auto found    = snapshot->payloadsByType.find(type);
    return found == snapshot->payloadsByType.end() ? nullptr : found->second;
}

std::vector<std::shared_ptr<ModuleDescriptor const>> PayloadRegistry::modules() const {
    return mImpl->currentSnapshot.load(std::memory_order_acquire)->modules;
}

std::vector<std::shared_ptr<PayloadDescriptor const>> PayloadRegistry::payloads() const {
    return mImpl->currentSnapshot.load(std::memory_order_acquire)->payloads;
}

Expected<> PayloadRegistry::drainOwner(mod::Mod const& owner) noexcept {
    try {
        std::vector<std::shared_ptr<detail::DescriptorState>> draining;
        {
            std::scoped_lock lock{mImpl->writerMutex};

            bool changed = false;
            for (auto const& [_, state] : mImpl->payloadStates) {
                if (state->lifecycle() != detail::DescriptorLifecycle::Inactive
                    && payload_registry_detail::sameOwner(state->owner(), owner)) {
                    draining.emplace_back(state);
                }
            }
            for (auto const& state : draining) {
                if (mImpl->attachedPayloads.erase(state.get()) != 0) {
                    changed   = true;
                    auto type = mImpl->registeredTypes.find(state->type());
                    if (type != mImpl->registeredTypes.end() && type->second == state) {
                        mImpl->registeredTypes.erase(type);
                    }

                    if (auto module = state->module()) {
                        [[maybe_unused]] auto const previous =
                            module->payloadCount.fetch_sub(1, std::memory_order_acq_rel);
                        assert(previous != 0);
                    }
                }
                state->drain(false);
            }
            for (auto const& module : mImpl->moduleCatalog.states()) {
                if (payload_registry_detail::sameOwner(module->owner, owner)) {
                    changed |= mImpl->attachedModules.erase(module.get()) != 0;
                    module->lifecycle.store(detail::DescriptorLifecycle::Inactive, std::memory_order_release);
                }
            }

            if (changed) {
                mImpl->publishLocked();
            }
        }
        for (auto const& state : draining) {
            if (auto drained = state->drain(true); !drained) {
                return drained;
            }
        }
        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

ModuleRegistration::ModuleRegistration() noexcept = default;
ModuleRegistration::~ModuleRegistration() noexcept {
    if (mImpl) {
        mImpl->registry->resetModule(mImpl->state, false);
    }
}

ModuleRegistration::ModuleRegistration(ModuleRegistration&&) noexcept = default;

ModuleRegistration& ModuleRegistration::operator=(ModuleRegistration&& other) noexcept {
    if (this != &other) {
        if (mImpl) {
            mImpl->registry->resetModule(mImpl->state, false);
        }

        mImpl = std::move(other.mImpl);
    }

    return *this;
}

ModuleRegistration::operator bool() const noexcept { return mImpl != nullptr; }

ModuleId const& ModuleRegistration::id() const noexcept {
    return mImpl ? mImpl->state->descriptor->id() : ModuleId::INVALID();
}
std::uint64_t ModuleRegistration::generation() const noexcept {
    return mImpl ? mImpl->state->descriptor->generation() : 0;
}

bool ModuleRegistration::active() const noexcept {
    return mImpl && mImpl->state->lifecycle.load(std::memory_order_acquire) == detail::DescriptorLifecycle::Active;
}

Expected<> ModuleRegistration::reset() noexcept {
    if (!mImpl) {
        return {};
    }

    auto result = mImpl->registry->resetModule(mImpl->state, true);
    if (result) {
        mImpl.reset();
    }

    return result;
}

PayloadRegistration::PayloadRegistration() noexcept = default;
PayloadRegistration::~PayloadRegistration() noexcept {
    if (mImpl) {
        mImpl->registry->resetPayload(mImpl->state, false);
    }
}

PayloadRegistration::PayloadRegistration(PayloadRegistration&&) noexcept = default;

PayloadRegistration& PayloadRegistration::operator=(PayloadRegistration&& other) noexcept {
    if (this != &other) {
        if (mImpl) {
            mImpl->registry->resetPayload(mImpl->state, false);
        }

        mImpl = std::move(other.mImpl);
    }

    return *this;
}

PayloadRegistration::operator bool() const noexcept { return mImpl != nullptr; }

PayloadId const& PayloadRegistration::id() const noexcept {
    return mImpl ? mImpl->state->descriptor()->id() : PayloadId::INVALID();
}
std::uint64_t PayloadRegistration::runtimeId() const noexcept {
    return mImpl ? mImpl->state->descriptor()->runtimeId() : 0;
}
std::uint64_t PayloadRegistration::generation() const noexcept {
    return mImpl ? mImpl->state->descriptor()->generation() : 0;
}

bool PayloadRegistration::active() const noexcept { return mImpl && mImpl->state->active(); }

Expected<> PayloadRegistration::reset() noexcept {
    if (!mImpl) {
        return {};
    }

    auto result = mImpl->registry->resetPayload(mImpl->state, true);
    if (result) {
        mImpl.reset();
    }

    return result;
}

namespace detail {

Expected<ModuleRegistration> PayloadRegistryAccess::registerCoreModule(
    PayloadRegistry&                 registry,
    ModuleDefinition                 definition,
    std::shared_ptr<mod::Mod> const& owner,
    CoreProtocolOwner const&         authority
) noexcept {
    if (!owner) {
        return makeRegistrationError(RegistrationErrc::OwnerUnavailable);
    }

    return registry.registerModuleOwned(std::move(definition), owner, resolveCoreProtocolNamespace(authority));
}

Expected<> PayloadRegistryAccess::activateOwner(PayloadRegistry& registry, mod::Mod const& owner) noexcept {
    try {
        if (!owner.isEnabled()) {
            return makeRegistrationError(RegistrationErrc::OwnerDisabled, owner.getName());
        }

        std::scoped_lock lock{registry.mImpl->writerMutex};

        bool changed = false;
        for (auto const& module : registry.mImpl->moduleCatalog.states()) {
            if (registry.mImpl->attachedModules.contains(module.get())
                && payload_registry_detail::sameOwner(module->owner, owner)) {
                auto expected  = DescriptorLifecycle::Pending;
                changed       |= module->lifecycle.compare_exchange_strong(
                    expected,
                    DescriptorLifecycle::Active,
                    std::memory_order_acq_rel
                );
            }
        }
        for (auto const& [_, state] : registry.mImpl->payloadStates) {
            if (registry.mImpl->attachedPayloads.contains(state.get())
                && payload_registry_detail::sameOwner(state->owner(), owner)) {
                changed |= state->activate();
            }
        }

        if (changed) {
            registry.mImpl->publishLocked();
        }
        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

std::shared_ptr<RegistrySnapshot const> PayloadRegistryAccess::snapshot(PayloadRegistry const& registry) noexcept {
    return registry.mImpl->currentSnapshot.load(std::memory_order_acquire);
}

std::shared_ptr<DescriptorState>
PayloadRegistryAccess::findState(PayloadRegistry const& registry, PayloadId const& id) noexcept {
    std::scoped_lock lock{registry.mImpl->writerMutex};

    auto found = registry.mImpl->payloadStates.find(id);
    return found == registry.mImpl->payloadStates.end() ? nullptr : found->second;
}

std::shared_ptr<DescriptorState>
PayloadRegistryAccess::findState(PayloadRegistry const& registry, std::type_index type) noexcept {
    std::scoped_lock lock{registry.mImpl->writerMutex};

    auto found = registry.mImpl->registeredTypes.find(type);
    return found == registry.mImpl->registeredTypes.end() ? nullptr : found->second;
}

} // namespace detail

} // namespace ll::protocol
