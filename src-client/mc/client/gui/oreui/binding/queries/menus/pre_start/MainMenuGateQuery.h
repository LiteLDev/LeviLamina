#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace MainMenu { class Gate; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class MainMenuGateQuery : public ::OreUI::QueryBase<::OreUI::MainMenuGateQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::MainMenu::Gate*()>> mMainMenuGateProvider;
    ::ll::TypedStorage<8, 8, ::MainMenu::Gate*>                     mMainMenuGate;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>       mIsOpen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOpenedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    MainMenuGateQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MainMenuGateQuery(::OreUI::GameDependencies const& game);

    MCAPI void _tryEnterGate();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
