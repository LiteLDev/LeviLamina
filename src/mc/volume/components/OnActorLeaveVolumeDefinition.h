#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct OnActorLeaveVolumeDefinition {
public:
    // prevent constructor by default
    OnActorLeaveVolumeDefinition& operator=(OnActorLeaveVolumeDefinition const&);
    OnActorLeaveVolumeDefinition(OnActorLeaveVolumeDefinition const&);
    OnActorLeaveVolumeDefinition();

public:
    // NOLINTBEGIN
    // symbol: ??1OnActorLeaveVolumeDefinition@@QEAA@XZ
    MCAPI ~OnActorLeaveVolumeDefinition();

    // symbol: ?bindType@OnActorLeaveVolumeDefinition@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?NAME@OnActorLeaveVolumeDefinition@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NAME;

    // NOLINTEND
};
