#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/EduMultiplayerPauseMenuScreenController.h"
#include "mc/client/gui/screens/controllers/jpmsc/Inputs.h"
#include "mc/client/social/edu_discovery/DiscoveryObserver.h"

// auto generated forward declare list
// clang-format off
class PauseScreenModel;
struct ActorUniqueID;
namespace EduDiscovery { struct JoinCode; }
namespace EduDiscovery { struct ServerInvalidationDetails; }
namespace Json { class Value; }
// clang-format on

class JoincodePauseMenuScreenController : public ::EduMultiplayerPauseMenuScreenController,
                                          public ::EduDiscovery::DiscoveryObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     mJoinCodeNeedsRefresh;
    ::ll::TypedStorage<4, 4, int>                      mCurrentJoincodeFetchingAnim;
    ::ll::TypedStorage<4, 4, int>                      mJoincodeFetchingAnimCount;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mCheckForServiceDialog;
    ::ll::TypedStorage<1, 1, ::JPMSC::Inputs>          mHoveredInputs;
    // NOLINTEND

public:
    // prevent constructor by default
    JoincodePauseMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JoincodePauseMenuScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onServerInvalidated(::EduDiscovery::ServerInvalidationDetails const&) /*override*/;

    virtual void onJoinCodeGenerated(::EduDiscovery::JoinCode const&) /*override*/;

    virtual void onCredentialsInvalidated() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JoincodePauseMenuScreenController(
        ::std::shared_ptr<::PauseScreenModel> model,
        ::std::vector<::ActorUniqueID> const& clientIds
    );

    MCNAPI ::std::string _getJoincodeUri();

    MCNAPI ::std::string _getNetworkId();

    MCNAPI void
    _launchShareUri(::std::string const& uri, ::std::string const& toastMsg, ::std::string const& eventName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::PauseScreenModel> model, ::std::vector<::ActorUniqueID> const& clientIds);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onServerInvalidated(::EduDiscovery::ServerInvalidationDetails const&);

    MCNAPI void $onJoinCodeGenerated(::EduDiscovery::JoinCode const&);

    MCNAPI void $onCredentialsInvalidated();
    // NOLINTEND
};
