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

    // symbol: ?getCause@DamageSensorComponent@@QEBA?AW4ActorDamageCause@@XZ
    MCAPI ::ActorDamageCause getCause() const;

    // symbol: ?getDamageModifier@DamageSensorComponent@@QEAAMXZ
    MCAPI float getDamageModifier();

    // symbol: ?getDamageMultipler@DamageSensorComponent@@QEAAMXZ
    MCAPI float getDamageMultipler();

    // symbol: ?isFatal@DamageSensorComponent@@QEBA_NXZ
    MCAPI bool isFatal() const;

    // symbol: ??4DamageSensorComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class DamageSensorComponent& operator=(class DamageSensorComponent&&);

    // symbol: ?recordDamage@DamageSensorComponent@@QEAA_NAEAVActor@@PEAV2@W4ActorDamageCause@@H_NVBlockPos@@@Z
    MCAPI bool recordDamage(class Actor&, class Actor*, ::ActorDamageCause, int, bool, class BlockPos);

    // symbol:
    // ?recordDamage@DamageSensorComponent@@QEAA_NAEAVActor@@PEAV2@W4ActorDamageCause@@H_NVVariantParameterList@@@Z
    MCAPI bool recordDamage(class Actor&, class Actor*, ::ActorDamageCause, int, bool, class VariantParameterList);

    // symbol:
    // ?recordDamage@DamageSensorComponent@@QEAA_NAEAVActor@@AEBVActorDamageSource@@H_NVVariantParameterList@@2@Z
    MCAPI bool recordDamage(class Actor&, class ActorDamageSource const&, int, bool, class VariantParameterList, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_recordDamage@DamageSensorComponent@@AEAA_NAEAVActor@@PEAV2@AEBW4ActorDamageCause@@1H_NVVariantParameterList@@3@Z
    MCAPI bool _recordDamage(
        class Actor&,
        class Actor*,
        ::ActorDamageCause const&,
        class Actor*,
        int,
        bool,
        class VariantParameterList,
        bool
    );

    // NOLINTEND
};
