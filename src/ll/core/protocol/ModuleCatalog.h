#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/protocol/ModuleDescriptor.h"
#include "ll/core/protocol/DescriptorState.h"

namespace ll::protocol::detail {

class ModuleCatalog {
    std::unordered_map<ModuleId, std::shared_ptr<ModuleState>> mModules;
    std::unordered_map<ModuleId, std::uint64_t>                mLastGeneration;

public:
    Expected<std::shared_ptr<ModuleState>> registerModule(
        ModuleId                         id,
        ModuleDefinition                 definition,
        std::shared_ptr<mod::Mod> const& owner,
        DescriptorLifecycle              lifecycle
    ) noexcept;

    void restore(ModuleId const& id, std::shared_ptr<ModuleState> previous) noexcept;

    [[nodiscard]] std::shared_ptr<ModuleState>              find(ModuleId const& id) const noexcept;
    [[nodiscard]] std::vector<std::shared_ptr<ModuleState>> states() const;
};

} // namespace ll::protocol::detail
