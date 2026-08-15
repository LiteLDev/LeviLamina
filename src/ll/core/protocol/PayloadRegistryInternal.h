#pragma once

#include <cstdint>
#include <memory>
#include <typeindex>
#include <unordered_map>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/core/protocol/DescriptorState.h"
#include "ll/core/protocol/RuntimeIdentity.h"

namespace ll::protocol::detail {

struct RegistrySnapshot {
    std::uint64_t revision{};

    std::unordered_map<ModuleId, std::shared_ptr<ModuleDescriptor const>>         modulesById;
    std::unordered_map<PayloadId, std::shared_ptr<PayloadDescriptor const>>       payloadsById;
    std::unordered_map<std::uint64_t, std::shared_ptr<PayloadDescriptor const>>   payloadsByRuntimeId;
    std::unordered_map<std::type_index, std::shared_ptr<PayloadDescriptor const>> payloadsByType;

    std::vector<std::shared_ptr<ModuleDescriptor const>>  modules;
    std::vector<std::shared_ptr<PayloadDescriptor const>> payloads;
};

struct PayloadRegistryAccess {
    static Expected<ModuleRegistration> registerCoreModule(
        PayloadRegistry&                 registry,
        ModuleDefinition                 definition,
        std::shared_ptr<mod::Mod> const& owner,
        CoreProtocolOwner const&         authority
    ) noexcept;

    static Expected<> activateOwner(PayloadRegistry& registry, mod::Mod const& owner) noexcept;
    static std::shared_ptr<RegistrySnapshot const> snapshot(PayloadRegistry const& registry) noexcept;
    static std::shared_ptr<DescriptorState> findState(PayloadRegistry const& registry, PayloadId const& id) noexcept;
};

} // namespace ll::protocol::detail
