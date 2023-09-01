#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnFireComponent {
public:
    // prevent constructor by default
    OnFireComponent& operator=(OnFireComponent const&) = delete;
    OnFireComponent(OnFireComponent const&)            = delete;
    OnFireComponent()                                  = delete;

public:
    // NOLINTBEGIN
    // symbol: ?addAdditionalSaveData@OnFireComponent@@QEBAXAEBVActor@@AEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class Actor const&, class CompoundTag&) const;

    // symbol: ?readAdditionalSaveData@OnFireComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&);

    // symbol: ?convertFromLegacyData@OnFireComponent@@SAXAEBVCompoundTag@@AEAV2@@Z
    MCAPI static void convertFromLegacyData(class CompoundTag const&, class CompoundTag&);

    // symbol: ?needsLegacyConversion@OnFireComponent@@SA_NAEBVCompoundTag@@@Z
    MCAPI static bool needsLegacyConversion(class CompoundTag const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?LEGACY_FIRE_TAG@OnFireComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const LEGACY_FIRE_TAG;

    // symbol: ?ON_FIRE_TAG@OnFireComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ON_FIRE_TAG;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $LEGACY_FIRE_TAG() { return LEGACY_FIRE_TAG; }

    inline auto& $ON_FIRE_TAG() { return ON_FIRE_TAG; }

    // NOLINTEND
};
