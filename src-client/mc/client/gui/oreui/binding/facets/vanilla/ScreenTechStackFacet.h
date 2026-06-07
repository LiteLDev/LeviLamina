#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/TechStack.h"
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI {

class ScreenTechStackFacet : public ::OreUI::FacetBase<::OreUI::ScreenTechStackFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector&> mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenTechStackFacet& operator=(ScreenTechStackFacet const&);
    ScreenTechStackFacet(ScreenTechStackFacet const&);
    ScreenTechStackFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScreenTechStackFacet(::ui::ScreenTechStackSelector& screenTechStackSelector);

    MCAPI ::ui::TechStack getPreferredTechStackForScreen(::std::string const& screenName) const;

    MCAPI ::ui::TechStack getTechStackForScreen(::std::string const& screenName) const;

    MCAPI void selectTechStackForScreen(::std::string const& screenName, ::ui::TechStack stack);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ui::ScreenTechStackSelector& screenTechStackSelector);
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
