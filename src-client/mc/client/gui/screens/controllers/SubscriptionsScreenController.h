#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/gui/screens/realms_screen_utils/RealmsSubscriptionsLoadingState.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Realms { struct RealmId; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetailsGroup; }
// clang-format on

class SubscriptionsScreenController : public ::SettingsScreenControllerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RealmsScreenUtils::RealmsSubscriptionsLoadingState> mRealmsSubscriptionsLoadingState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RealmsScreenUtils::RealmsWorldLoadingDetailsGroup>> mRealms10p;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RealmsScreenUtils::RealmsWorldLoadingDetailsGroup>> mRealms2p;
    ::ll::TypedStorage<1, 1, bool>                                                                    mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscriptionsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubscriptionsScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onCreation() /*override*/;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SubscriptionsScreenController(::std::shared_ptr<::MainMenuScreenModel> model);

    MCAPI bool _isCsbExpired();

    MCFOLD bool _isCsbSubscribed();

    MCAPI bool _platformMatches();

    MCAPI void _refreshRealmsSubscriptionsData();

    MCAPI void _refreshWorld(::Realms::RealmId& realmId);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $onCreation();

    MCAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
