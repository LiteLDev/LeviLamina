#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/edu_discovery/Availability.h"
#include "mc/client/social/edu_discovery/Error.h"
#include "mc/client/social/edu_discovery/JoinCode.h"
#include "mc/client/social/edu_discovery/QueryContext.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace EDUDiscovery { struct JoinServerQueryState; }
// clang-format on

class JoincodeEntryScreenController : public ::MinecraftScreenController {
public:
    // JoincodeEntryScreenController inner types define
    enum class ActiveScreen : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EDUDiscovery::QueryContext<::EDUDiscovery::JoinServerQueryState>>>
        mJoinContext;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EDUDiscovery::QueryContext<::EDUDiscovery::Availability>>>
                                                                            mAvailabilityContext;
    ::ll::TypedStorage<8, 40, ::EDUDiscovery::Error>                        mJoinError;
    ::ll::TypedStorage<8, 32, ::std::string>                                mHostUsername;
    ::ll::TypedStorage<8, 32, ::std::string>                                mWorldName;
    ::ll::TypedStorage<4, 4, ::JoincodeEntryScreenController::ActiveScreen> mActiveScreen;
    ::ll::TypedStorage<8, 32, ::EDUDiscovery::JoinCode>                     mEnteredJoincode;
    ::ll::TypedStorage<4, 4, int>                                           mHoveredEntry;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string)>>         mUpdateIdHeaderText;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                      mCheckForServiceDialog;
    ::ll::TypedStorage<1, 1, bool>                                          mServiceRedirectedToIP;
    // NOLINTEND

public:
    // prevent constructor by default
    JoincodeEntryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JoincodeEntryScreenController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JoincodeEntryScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      popupButtonName
    );

    MCAPI void _closeActiveScreen(bool fullClose);

    MCAPI void _closeScreen(::std::string const& popupControlId);

    MCAPI void _openEntryScreen();

    MCAPI void _openErrorScreen(::EDUDiscovery::Error const& error);

    MCAPI void _openFoundScreen(::std::string hostUsername, ::std::string worldName);

    MCAPI void _openIPEntryScreen();

    MCAPI void _openScreen(::std::string const& popupControlId, ::std::string const& ttsTitle);

    MCAPI void _registerEntryScreenBindings();

    MCAPI void _registerEntryScreenHandlers();

    MCAPI void _registerEventHandlers(::std::string const& popupButtonName);

    MCAPI void _registerFoundServerHandlers();

    MCAPI void _requestJoinServer(
        ::std::function<
            void(::std::shared_ptr<::JoincodeEntryScreenController>, ::EDUDiscovery::JoinServerQueryState const&)>
            joinCallback
    );

    MCAPI void queryJoincode(::std::string const& encodedJoincode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string const& popupButtonName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
