#pragma once

#include <cstdint>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/data/Version.h"
#include "ll/api/protocol/Direction.h"
#include "ll/api/protocol/Id.h"
#include "ll/api/protocol/Version.h"

namespace ll::protocol {

struct FeatureDefinition {
    FeatureName  name;
    VersionRange versions;
    bool         required{};

    auto operator<=>(FeatureDefinition const&) const = default;
};

struct ModuleDefinition {
    ModuleName                     name;
    data::Version                  version;
    VersionRange                   protocolVersions;
    ModuleRequirement              requirement{ModuleRequirement::Optional};
    std::vector<FeatureDefinition> features;
};

class ModuleDescriptor {
    ModuleId         mId;
    ModuleDefinition mDefinition;
    std::string      mOwner;
    std::uint64_t    mGeneration{};

public:
    ModuleDescriptor(ModuleId id, ModuleDefinition definition, std::string owner, std::uint64_t generation)
    : mId(std::move(id)),
      mDefinition(std::move(definition)),
      mOwner(std::move(owner)),
      mGeneration(generation) {}

    [[nodiscard]] ModuleId const&         id() const noexcept { return mId; }
    [[nodiscard]] ModuleDefinition const& definition() const noexcept { return mDefinition; }
    [[nodiscard]] std::string_view        owner() const noexcept { return mOwner; }
    [[nodiscard]] std::uint64_t           generation() const noexcept { return mGeneration; }
};

} // namespace ll::protocol
