#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

namespace OreUI {

class RealmsPDPFacet : public ::OreUI::FacetBase<::OreUI::RealmsPDPFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mCheckRealmsTrialAvailable;
    ::ll::TypedStorage<1, 1, bool>                     mIsRealmsTrialAvailable;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPDPFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsPDPFacet(
        ::std::function<void()> updateRealmsTrialAvailable,
        ::std::function<bool()> checkRealmsTrialAvailable
    );

    MCAPI bool isRealmsTrialAvailable() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::function<void()> updateRealmsTrialAvailable, ::std::function<bool()> checkRealmsTrialAvailable);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
