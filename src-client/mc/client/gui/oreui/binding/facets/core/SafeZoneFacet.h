#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/OptionWrapper.h"

namespace OreUI {

class SafeZoneFacet : public ::OreUI::FacetBase<::OreUI::SafeZoneFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mIsDirty;
    ::ll::TypedStorage<4, 4, float>                          mSafeZoneX;
    ::ll::TypedStorage<4, 4, float>                          mSafeZoneY;
    ::ll::TypedStorage<4, 4, float>                          mScreenPositionX;
    ::ll::TypedStorage<4, 4, float>                          mScreenPositionY;
    ::ll::TypedStorage<8, 24, ::OreUI::OptionWrapper<float>> mSafeZoneXOption;
    ::ll::TypedStorage<8, 24, ::OreUI::OptionWrapper<float>> mSafeZoneYOption;
    ::ll::TypedStorage<8, 24, ::OreUI::OptionWrapper<float>> mScreenPositionXOption;
    ::ll::TypedStorage<8, 24, ::OreUI::OptionWrapper<float>> mScreenPositionYOption;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~SafeZoneFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD float getSafeZoneX() const;

    MCAPI float getSafeZoneY() const;

    MCAPI float getScreenPositionX() const;

    MCAPI float getScreenPositionY() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
