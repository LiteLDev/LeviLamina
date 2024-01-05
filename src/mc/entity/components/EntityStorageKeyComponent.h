#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityStorageKeyComponent {
public:
    // prevent constructor by default
    EntityStorageKeyComponent& operator=(EntityStorageKeyComponent const&);
    EntityStorageKeyComponent(EntityStorageKeyComponent const&);
    EntityStorageKeyComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0EntityStorageKeyComponent@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit EntityStorageKeyComponent(std::string const&);

    // symbol: ?addAdditionalSaveData@EntityStorageKeyComponent@@QEBAXAEBVActor@@AEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class Actor const& owner, class CompoundTag& tag) const;

    // symbol: ?readAdditionalSaveData@EntityStorageKeyComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI void readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag);

    // symbol: ??1EntityStorageKeyComponent@@QEAA@XZ
    MCAPI ~EntityStorageKeyComponent();

    // NOLINTEND
};
