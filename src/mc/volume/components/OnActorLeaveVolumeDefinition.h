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
    MCAPI void initialize(class EntityContext&, class OnActorLeaveVolumeComponent& component) const;

    MCAPI ~OnActorLeaveVolumeDefinition();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
