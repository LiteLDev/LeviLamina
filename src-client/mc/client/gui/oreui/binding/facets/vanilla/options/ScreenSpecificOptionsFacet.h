#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/options/oreui/GameplayUIMode.h"
#include "mc/client/options/oreui/PlayScreenWorldLayoutMode.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace OreUI {

class ScreenSpecificOptionsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ScreenSpecificOptionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                              mOptions;
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScreenSpecificOptionsFacet(::IOptionRegistry& options);

    MCNAPI ::OreUI::GameplayUIMode getDevOreUIGameplayUI() const;

    MCNAPI bool getDevPlayScreenHideLanWorlds() const;

    MCNAPI ::OreUI::PlayScreenWorldLayoutMode getPlayScreenWorldLayoutMode() const;

    MCNAPI void setDevOreUIGameplayUI(::OreUI::GameplayUIMode mode);

    MCNAPI void setDevPlayScreenHideLanWorlds(bool value);

    MCNAPI void setPlayScreenWorldLayoutMode(::OreUI::PlayScreenWorldLayoutMode layoutMode);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IOptionRegistry& options);
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
