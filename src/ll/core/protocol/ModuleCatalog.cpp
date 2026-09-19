#include "ll/core/protocol/ModuleCatalog.h"

#include <algorithm>
#include <cassert>
#include <utility>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"

namespace ll::protocol::detail {

namespace module_catalog_detail {

Expected<> normalize(ModuleDefinition& definition) {
    if (!definition.protocolVersions.valid()) {
        return makeRegistrationError(RegistrationErrc::InvalidLimit, "module protocol version range");
    }

    switch (definition.requirement) {
    case ModuleRequirement::Optional:
    case ModuleRequirement::RequiredOnClient:
    case ModuleRequirement::RequiredOnServer:
    case ModuleRequirement::RequiredOnBoth:
        break;
    default:
        return makeRegistrationError(RegistrationErrc::InvalidDirection, "module requirement");
    }

    if (definition.features.size() > Limits::MaxDeclaredFeatures) {
        return makeRegistrationError(RegistrationErrc::InvalidLimit, "module feature count");
    }

    std::ranges::sort(definition.features, {}, [](FeatureDefinition const& feature) { return feature.name.value(); });
    for (std::size_t index = 0; index < definition.features.size(); ++index) {
        if (!definition.features[index].versions.valid()) {
            return makeRegistrationError(RegistrationErrc::InvalidLimit, "feature version range");
        }
        if (index != 0 && definition.features[index - 1].name == definition.features[index].name) {
            return makeRegistrationError(RegistrationErrc::InvalidLimit, "duplicate module feature");
        }
    }

    return {};
}

} // namespace module_catalog_detail

Expected<std::shared_ptr<ModuleState>> ModuleCatalog::registerModule(
    ModuleId                         id,
    ModuleDefinition                 definition,
    std::shared_ptr<mod::Mod> const& owner,
    DescriptorLifecycle              lifecycle
) noexcept {
    try {
        if (auto normalized = module_catalog_detail::normalize(definition); !normalized) {
            return forwardError(normalized.error());
        }
        if (auto current = find(id);
            current && current->lifecycle.load(std::memory_order_acquire) != DescriptorLifecycle::Inactive) {
            return makeRegistrationError(RegistrationErrc::DuplicateModule, id.str());
        }

        auto generation = ++mLastGeneration[id];
        auto descriptor = std::make_shared<ModuleDescriptor const>(
            std::move(id),
            std::move(definition),
            owner->getName(),
            generation
        );

        auto state        = std::make_shared<ModuleState>();
        state->descriptor = std::move(descriptor);
        state->owner      = owner;
        state->lifecycle.store(lifecycle, std::memory_order_release);

        mModules[state->descriptor->id()] = state;
        return state;
    } catch (...) {
        return makeExceptionError();
    }
}

void ModuleCatalog::restore(ModuleId const& id, std::shared_ptr<ModuleState> previous) {
    auto current = mModules.find(id);
    if (previous) {
        assert(current != mModules.end());
        current->second = std::move(previous);
    } else if (current != mModules.end()) {
        mModules.erase(current);
    }
}

std::shared_ptr<ModuleState> ModuleCatalog::find(ModuleId const& id) const {
    auto found = mModules.find(id);
    return found == mModules.end() ? nullptr : found->second;
}

std::vector<std::shared_ptr<ModuleState>> ModuleCatalog::states() const {
    std::vector<std::shared_ptr<ModuleState>> result;
    result.reserve(mModules.size());
    for (auto const& [_, state] : mModules) {
        result.emplace_back(state);
    }

    return result;
}

} // namespace ll::protocol::detail
