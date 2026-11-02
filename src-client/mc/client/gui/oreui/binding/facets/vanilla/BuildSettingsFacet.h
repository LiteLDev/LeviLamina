#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/GameVersionBindings.h"

namespace OreUI {

class BuildSettingsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::BuildSettingsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::OreUI::GameVersionBindings>   mCurrentGameVersion;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDevelopmentVersion;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BuildSettingsFacet();

    MCNAPI ::OreUI::GameVersionBindings const& getCurrentGameVersion() const;

    MCNAPI ::std::optional<::std::string> const& getDevelopmentVersion() const;

    MCNAPI bool isAnyBeta() const;

    MCNAPI bool isBetaBuild() const;

    MCNAPI bool isInDeveloperMode() const;

    MCNAPI bool isPartnerBuild() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
