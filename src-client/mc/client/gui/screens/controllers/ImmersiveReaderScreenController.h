#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ImmersiveReaderObserver;
class ImmersiveReaderToken;
namespace Bedrock::Http { class Response; }
// clang-format on

class ImmersiveReaderScreenController : public ::ClientInstanceScreenController {
public:
    // ImmersiveReaderScreenController inner types define
    enum class ImmersiveReaderErrorType : schar {};

    enum class ImmersiveReaderStatusCodes : schar {};

    enum class ImmersiveReaderStage : schar {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                              mReaderText;
    ::ll::TypedStorage<1, 1, ::ImmersiveReaderScreenController::ImmersiveReaderErrorType> mErrorType;
    ::ll::TypedStorage<1, 1, bool>                                                        mErrorCausedRefresh;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                               mTaskGroup;
    ::ll::TypedStorage<1, 1, ::ImmersiveReaderScreenController::ImmersiveReaderStage>     mImmersiveReaderStage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ImmersiveReaderObserver>>                mObserver;
    // NOLINTEND

public:
    // prevent constructor by default
    ImmersiveReaderScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImmersiveReaderScreenController() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ImmersiveReaderScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model, ::std::string readerText);

    MCAPI void _handleTokenResponse(::Bedrock::Http::Response& response);

    MCAPI void _launchReader();

    MCAPI void _registerBindings();

    MCAPI void _requestToken();

    MCAPI bool _tokenNeedsRefresh();

    MCAPI void _triggerError(::ImmersiveReaderScreenController::ImmersiveReaderErrorType errorType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::ImmersiveReaderToken>& mReaderToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model, ::std::string readerText);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
