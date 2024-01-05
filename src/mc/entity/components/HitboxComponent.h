#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HitboxComponent {
public:
    // prevent constructor by default
    HitboxComponent& operator=(HitboxComponent const&);
    HitboxComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0HitboxComponent@@QEAA@AEBV0@@Z
    MCAPI HitboxComponent(class HitboxComponent const&);

    // symbol: ?addAdditionalSaveData@HitboxComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;

    // symbol: ?fromCompoundTag@HitboxComponent@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void fromCompoundTag(class CompoundTag const& tag);

    // symbol: ??4HitboxComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class HitboxComponent& operator=(class HitboxComponent&&);

    // symbol: ?toCompoundTag@HitboxComponent@@QEAAXAEAVCompoundTag@@@Z
    MCAPI void toCompoundTag(class CompoundTag& tag);

    // symbol: ??1HitboxComponent@@QEAA@XZ
    MCAPI ~HitboxComponent();

    // NOLINTEND
};
