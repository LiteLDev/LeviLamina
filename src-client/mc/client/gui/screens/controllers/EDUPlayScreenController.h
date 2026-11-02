#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/library/EduDeeplinkObserver.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class JoincodeEntryScreenController;
class PlayScreenModel;
// clang-format on

class EduPlayScreenController : public ::MainMenuScreenController, public ::EduDeeplinkObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                      mJoincode;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                       mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                mWasDedicatedServerEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                mPollingForDedicatedServerStatus;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>               mPlayScreenModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::JoincodeEntryScreenController>> mJoincodeScreenController;
    // NOLINTEND

public:
    // prevent constructor by default
    EduPlayScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduPlayScreenController() /*override*/ = default;

    virtual void onEntered() /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual bool onJoincodeReceived(::std::string const& encodedJoincode) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduPlayScreenController(::std::shared_ptr<::PlayScreenModel> model, ::std::string encodedJoincode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> model, ::std::string encodedJoincode);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onEntered();

    MCNAPI void $onOpen();

    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI bool $onJoincodeReceived(::std::string const& encodedJoincode);
    // NOLINTEND
};
