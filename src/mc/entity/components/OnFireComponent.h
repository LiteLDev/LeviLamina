#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnFireComponent {
public:
    // prevent constructor by default
    OnFireComponent& operator=(OnFireComponent const&);
    OnFireComponent(OnFireComponent const&);
    OnFireComponent();

public:
    // NOLINTBEGIN
    // symbol: ?addAdditionalSaveData@OnFireComponent@@QEBAXAEBVActor@@AEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class Actor const&, class CompoundTag& tag) const;

    // symbol: ?readAdditionalSaveData@OnFireComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI void readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag);

    // symbol: ?convertFromLegacyData@OnFireComponent@@SAXAEBVCompoundTag@@AEAV2@@Z
    MCAPI static void convertFromLegacyData(class CompoundTag const& tag, class CompoundTag&);

    // symbol: ?needsLegacyConversion@OnFireComponent@@SA_NAEBVCompoundTag@@@Z
    MCAPI static bool needsLegacyConversion(class CompoundTag const& tag);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?LEGACY_FIRE_TAG@OnFireComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const LEGACY_FIRE_TAG;

    // symbol: ?ON_FIRE_TAG@OnFireComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ON_FIRE_TAG;

    // NOLINTEND
};
