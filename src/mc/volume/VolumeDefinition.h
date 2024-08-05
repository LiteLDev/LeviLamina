#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct VolumeDefinition {
public:
    // VolumeDefinition inner types declare
    // clang-format off
    struct VolumeDescription;
    // clang-format on

    // VolumeDefinition inner types define
    struct VolumeDescription {
    public:
        // prevent constructor by default
        VolumeDescription& operator=(VolumeDescription const&);
        VolumeDescription(VolumeDescription const&);
        VolumeDescription();

    public:
        // NOLINTBEGIN
        MCAPI bool operator==(struct VolumeDefinition::VolumeDescription const&) const;

        MCAPI ~VolumeDescription();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VolumeDefinition& operator=(VolumeDefinition const&);
    VolumeDefinition(VolumeDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI VolumeDefinition();

    MCAPI ~VolumeDefinition();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static class SemVersion const& getMaxSupportedVersion();

    MCAPI static class SemVersion const& getMinSupportedVersion();

    MCAPI static std::string const NAME;

    // NOLINTEND
};
