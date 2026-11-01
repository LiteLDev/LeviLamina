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
namespace EduDiscovery { struct JoinServerQueryState; }
// clang-format on

class JoincodeEntryScreenController : public ::MinecraftScreenController {
public:
    // JoincodeEntryScreenController inner types define
    enum class ActiveScreen : int {
        None        = 0,
        Entry       = 1,
        Connecting  = 2,
        Error       = 3,
        ServerFound = 4,
        IPEntry     = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EduDiscovery::QueryContext<::EduDiscovery::JoinServerQueryState>>>
        mJoinContext;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EduDiscovery::QueryContext<::EduDiscovery::Availability>>>
                                                                            mAvailabilityContext;
    ::ll::TypedStorage<8, 40, ::EduDiscovery::Error>                        mJoinError;
    ::ll::TypedStorage<8, 32, ::std::string>                                mHostUsername;
    ::ll::TypedStorage<8, 32, ::std::string>                                mWorldName;
    ::ll::TypedStorage<4, 4, ::JoincodeEntryScreenController::ActiveScreen> mActiveScreen;
    ::ll::TypedStorage<8, 32, ::EduDiscovery::JoinCode>                     mEnteredJoincode;
    ::ll::TypedStorage<4, 4, int>                                           mHoveredEntry;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string)>>         mUpdateIdHeaderText;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                      mCheckForServiceDialog;
    ::ll::TypedStorage<1, 1, bool>                                          mServiceRedirectedToIP;
    // NOLINTEND

public:
    // prevent constructor by default
    JoincodeEntryScreenController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JoincodeEntryScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      popupButtonName
    );

    MCNAPI void _closeActiveScreen(bool fullClose);

    MCNAPI void _closeScreen(::std::string const& popupControlId);

    MCNAPI void _openEntryScreen();

    MCNAPI void _openErrorScreen(::EduDiscovery::Error const& error);

    MCNAPI void _openIPEntryScreen();

    MCNAPI void
    _openScreen(::std::string const& popupControlId, ::std::string const& ttsTitle, ::std::string const& ttsContent);

    MCNAPI void _requestJoinServer(
        ::std::function<
            void(::std::shared_ptr<::JoincodeEntryScreenController>, ::EduDiscovery::JoinServerQueryState const&)>
            joinCallback
    );

    MCNAPI void queryJoincode(::std::string const& encodedJoincode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string const& popupButtonName);
    // NOLINTEND
};
