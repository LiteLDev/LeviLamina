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
        // symbol: ??8VolumeDescription@VolumeDefinition@@QEBA_NAEBU01@@Z
        MCAPI bool operator==(struct VolumeDefinition::VolumeDescription const&) const;

        // symbol: ??1VolumeDescription@VolumeDefinition@@QEAA@XZ
        MCAPI ~VolumeDescription();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VolumeDefinition& operator=(VolumeDefinition const&);
    VolumeDefinition(VolumeDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0VolumeDefinition@@QEAA@XZ
    MCAPI VolumeDefinition();

    // symbol: ??1VolumeDefinition@@QEAA@XZ
    MCAPI ~VolumeDefinition();

    // symbol: ?bindType@VolumeDefinition@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?getMaxSupportedVersion@VolumeDefinition@@SAAEBVSemVersion@@XZ
    MCAPI static class SemVersion const& getMaxSupportedVersion();

    // symbol: ?getMinSupportedVersion@VolumeDefinition@@SAAEBVSemVersion@@XZ
    MCAPI static class SemVersion const& getMinSupportedVersion();

    // symbol: ?NAME@VolumeDefinition@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NAME;

    // NOLINTEND
};
