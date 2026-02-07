#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/EduMultiplayerPauseMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/jpmsc/Inputs.h"
#include "mc/client/social/edu_discovery/DiscoveryObserver.h"

// auto generated forward declare list
// clang-format off
class PauseScreenModel;
struct ActorUniqueID;
namespace EDUDiscovery { struct JoinCode; }
namespace EDUDiscovery { struct ServerInvalidationDetails; }
namespace Json { class Value; }
// clang-format on

class JoincodePauseMenuScreenController : public ::EduMultiplayerPauseMenuScreenController,
                                          public ::EDUDiscovery::DiscoveryObserver {
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

    virtual void onServerInvalidated(::EDUDiscovery::ServerInvalidationDetails const&) /*override*/;

    virtual void onJoinCodeGenerated(::EDUDiscovery::JoinCode const&) /*override*/;

    virtual void onCredentialsInvalidated() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JoincodePauseMenuScreenController(
        ::std::shared_ptr<::PauseScreenModel> model,
        ::std::vector<::ActorUniqueID> const& clientIds
    );

    MCAPI void _confirmationGenerateNewCode(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _confirmationRestartHosting(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _confirmationStartHosting(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _confirmationStopHosting(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI ::std::string _connectionIDAccessibilityLabel(::std::string_view networkId);

    MCAPI ::std::string _joincodeUri();

    MCAPI void _launchShareUri(::std::string const& uri, ::std::string const& toastMsg, ::std::string const& eventName);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PauseScreenModel> model, ::std::vector<::ActorUniqueID> const& clientIds);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD void $onServerInvalidated(::EDUDiscovery::ServerInvalidationDetails const&);

    MCFOLD void $onJoinCodeGenerated(::EDUDiscovery::JoinCode const&);

    MCFOLD void $onCredentialsInvalidated();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
