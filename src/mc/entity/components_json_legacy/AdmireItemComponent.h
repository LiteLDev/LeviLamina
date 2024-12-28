#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class WeakEntityRef;
struct Tick;
// clang-format on

class AdmireItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk130b49;
    ::ll::UntypedStorage<8, 152> mUnk59b799;
    ::ll::UntypedStorage<8, 8>   mUnk297c7e;
    ::ll::UntypedStorage<8, 24>  mUnkf3815e;
    // NOLINTEND

public:
    // prevent constructor by default
    AdmireItemComponent& operator=(AdmireItemComponent const&);
    AdmireItemComponent(AdmireItemComponent const&);
    AdmireItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ItemStack const& getAdmireItem() const;

    MCAPI ::Tick const& getAdmireUntil() const;

    MCAPI ::WeakEntityRef getItemOwnerRef() const;

    MCAPI bool isAdmiring() const;

    MCAPI void onAdmireItemPickedUp(::Actor const& owner, ::ItemStack const& item, ::Actor* itemOwner);

    MCAPI ::AdmireItemComponent& operator=(::AdmireItemComponent&&);

    MCAPI void stopAdmiring();

    MCAPI ~AdmireItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
