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
    MCAPI AdmireItemComponent(class AdmireItemComponent&&);

    MCAPI class ItemStack const& getAdmireItem() const;

    MCAPI struct Tick const& getAdmireUntil() const;

    MCAPI class WeakEntityRef getItemOwnerRef() const;

    MCAPI bool isAdmiring() const;

    MCAPI void onAdmireItemPickedUp(class Actor const& owner, class ItemStack const& item, class Actor* itemOwner);

    MCAPI class AdmireItemComponent& operator=(class AdmireItemComponent&&);

    MCAPI void stopAdmiring();

    MCAPI ~AdmireItemComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class AdmireItemComponent&&);

    MCAPI void dtor$();

    // NOLINTEND
};
