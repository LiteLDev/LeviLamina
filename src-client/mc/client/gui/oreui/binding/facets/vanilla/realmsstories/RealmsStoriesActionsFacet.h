#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesActionsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesActionsFacet> {
public:
    // RealmsStoriesActionsFacet inner types define
    enum class OptInTelemetryUserState : int {
        CanNotChangeRealmOptIn = 0,
        CanChangeRealmOptIn    = 1,
        IsOwner                = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>>                mMainMenuScreenModel;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesActionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesActionsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesActionsFacet(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::std::shared_ptr<::MainMenuScreenModel>                mainMenuScreenModel
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::std::shared_ptr<::MainMenuScreenModel>                mainMenuScreenModel
    );
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
