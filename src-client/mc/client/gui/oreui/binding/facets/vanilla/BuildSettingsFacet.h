#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/GameVersionBindings.h"

namespace OreUI {

class BuildSettingsFacet : public ::OreUI::FacetBase<::OreUI::BuildSettingsFacet> {
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

    virtual ~BuildSettingsFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::OreUI::GameVersionBindings const& getCurrentGameVersion() const;

    MCFOLD ::std::optional<::std::string> const& getDevelopmentVersion() const;

    MCFOLD bool isAnyBeta() const;

    MCFOLD bool isBetaBuild() const;

    MCFOLD bool isInDeveloperMode() const;
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
