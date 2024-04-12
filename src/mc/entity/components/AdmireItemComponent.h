#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AdmireItemComponent {
public:
    // prevent constructor by default
    AdmireItemComponent& operator=(AdmireItemComponent const&);
    AdmireItemComponent(AdmireItemComponent const&);
    AdmireItemComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0AdmireItemComponent@@QEAA@$$QEAV0@@Z
    MCAPI AdmireItemComponent(class AdmireItemComponent&&);

    // symbol: ?getAdmireItem@AdmireItemComponent@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getAdmireItem() const;

    // symbol: ?getAdmireUntil@AdmireItemComponent@@QEBAAEBUTick@@XZ
    MCAPI struct Tick const& getAdmireUntil() const;

    // symbol: ?getItemOwnerRef@AdmireItemComponent@@QEBA?AVWeakEntityRef@@XZ
    MCAPI class WeakEntityRef getItemOwnerRef() const;

    // symbol: ?isAdmiring@AdmireItemComponent@@QEBA_NXZ
    MCAPI bool isAdmiring() const;

    // symbol: ?onAdmireItemPickedUp@AdmireItemComponent@@QEAAXAEBVActor@@AEBVItemStack@@PEAV2@@Z
    MCAPI void onAdmireItemPickedUp(class Actor const& owner, class ItemStack const& item, class Actor* itemOwner);

    // symbol: ??4AdmireItemComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class AdmireItemComponent& operator=(class AdmireItemComponent&&);

    // symbol: ?stopAdmiring@AdmireItemComponent@@QEAAXXZ
    MCAPI void stopAdmiring();

    // symbol: ??1AdmireItemComponent@@QEAA@XZ
    MCAPI ~AdmireItemComponent();

    // NOLINTEND
};
