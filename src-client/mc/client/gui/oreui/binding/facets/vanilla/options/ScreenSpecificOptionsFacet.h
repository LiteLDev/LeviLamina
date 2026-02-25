#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/options/oreui/PlayScreenWorldLayoutMode.h"

// auto generated forward declare list
// clang-format off
class IOptions;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace OreUI {

class ScreenSpecificOptionsFacet : public ::OreUI::FacetBase<::OreUI::ScreenSpecificOptionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptions&>                                     mOptions;
    ::ll::TypedStorage<1, 1, bool>                                            mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mOptionSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenSpecificOptionsFacet& operator=(ScreenSpecificOptionsFacet const&);
    ScreenSpecificOptionsFacet(ScreenSpecificOptionsFacet const&);
    ScreenSpecificOptionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~ScreenSpecificOptionsFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScreenSpecificOptionsFacet(::IOptions& options);

    MCAPI bool getDevPlayScreenHideLanWorlds() const;

    MCAPI ::OreUI::PlayScreenWorldLayoutMode getPlayScreenWorldLayoutMode() const;

    MCAPI void setDevPlayScreenHideLanWorlds(bool value);

    MCAPI void setPlayScreenWorldLayoutMode(::OreUI::PlayScreenWorldLayoutMode layoutMode);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IOptions& options);
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
