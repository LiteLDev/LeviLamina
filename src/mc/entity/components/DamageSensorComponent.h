#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"

class DamageSensorComponent {
public:
    // prevent constructor by default
    DamageSensorComponent& operator=(DamageSensorComponent const&);
    DamageSensorComponent(DamageSensorComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0DamageSensorComponent@@QEAA@XZ
    MCAPI DamageSensorComponent();

    // symbol: ?getAdjustedDamage@DamageSensorComponent@@QEBAMAEAVActor@@AEBVActorDamageSource@@M@Z
    MCAPI float getAdjustedDamage(class Actor&, class ActorDamageSource const&, float) const;

    // symbol: ?getCause@DamageSensorComponent@@QEBA?AW4ActorDamageCause@@XZ
    MCAPI ::ActorDamageCause getCause() const;

    // symbol: ?isFatal@DamageSensorComponent@@QEBA_NXZ
    MCAPI bool isFatal() const;

    // symbol: ??4DamageSensorComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class DamageSensorComponent& operator=(class DamageSensorComponent&&);

    // symbol: ?recordBlockDamage@DamageSensorComponent@@QEAA_NAEAVActor@@W4ActorDamageCause@@MVBlockPos@@@Z
    MCAPI bool recordBlockDamage(class Actor&, ::ActorDamageCause, float, class BlockPos);

    // symbol:
    // ?recordGenericDamage@DamageSensorComponent@@QEAA_NAEAVActor@@PEAV2@W4ActorDamageCause@@MVVariantParameterList@@@Z
    MCAPI bool recordGenericDamage(class Actor&, class Actor*, ::ActorDamageCause, float, class VariantParameterList);

    // symbol:
    // ?recordGenericDamage@DamageSensorComponent@@QEAA_NAEAVActor@@AEBVActorDamageSource@@MMVVariantParameterList@@_N@Z
    MCAPI bool
    recordGenericDamage(class Actor&, class ActorDamageSource const&, float, float, class VariantParameterList, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_fillParameters@DamageSensorComponent@@CAXAEAVVariantParameterList@@AEAVActor@@PEAV3@2@Z
    MCAPI static void _fillParameters(class VariantParameterList&, class Actor&, class Actor*, class Actor*);

    // NOLINTEND
};
