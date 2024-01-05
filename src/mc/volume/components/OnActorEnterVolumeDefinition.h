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
    // symbol: ?initialize@OnActorEnterVolumeDefinition@@QEBAXAEAVEntityContext@@AEAVOnActorEnterVolumeComponent@@@Z
    MCAPI void initialize(class EntityContext&, class OnActorEnterVolumeComponent& component) const;

    // symbol: ??1OnActorEnterVolumeDefinition@@QEAA@XZ
    MCAPI ~OnActorEnterVolumeDefinition();

    // symbol: ?bindType@OnActorEnterVolumeDefinition@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?NAME@OnActorEnterVolumeDefinition@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NAME;

    // NOLINTEND
};
