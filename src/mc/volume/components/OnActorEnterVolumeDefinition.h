#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct OnActorEnterVolumeDefinition {
public:
    // prevent constructor by default
    OnActorEnterVolumeDefinition& operator=(OnActorEnterVolumeDefinition const&);
    OnActorEnterVolumeDefinition(OnActorEnterVolumeDefinition const&);
    OnActorEnterVolumeDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext&, class OnActorEnterVolumeComponent& component) const;

    MCAPI ~OnActorEnterVolumeDefinition();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
