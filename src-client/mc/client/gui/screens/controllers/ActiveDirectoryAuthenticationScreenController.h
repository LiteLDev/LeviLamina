#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ActiveDirectoryPopup.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/AuthLoadingMessages.h"
#include "mc/client/gui/screens/controllers/AuthenticationUIState.h"
#include "mc/client/gui/screens/controllers/EduPurchaseUXState.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryAuthenticationInterface;
class ClickSourceContext;
class MinecraftScreenModel;
namespace Json { class Value; }
namespace Progress { class ProgressTips; }
// clang-format on

class ActiveDirectoryAuthenticationScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mAuthenticationPendingPresentationHandled;
    ::ll::TypedStorage<8, 552, ::std::optional<::ActiveDirectoryPopup>> mPopup;
    ::ll::TypedStorage<8, 32, ::std::string>                            mAuthMessage;
    ::ll::TypedStorage<8, 64, ::AuthLoadingMessages>                    mLoadingMessages;
    ::ll::TypedStorage<4, 4, ::AuthenticationUIState>                   mUIState;
    ::ll::TypedStorage<4, 4, ::EduPurchaseUXState>                      mPurchaseState;
    ::ll::TypedStorage<1, 1, bool>                                      mCurrentlyAgree;
    ::ll::TypedStorage<8, 32, ::std::string>                            mOfferPrice;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActiveDirectoryAuthenticationInterface>> mAuthentication;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClickSourceContext>>                     mClickSource;
    ::ll::TypedStorage<8, 8, double>                                                      mPackLoadStart;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryAuthenticationScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveDirectoryAuthenticationScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActiveDirectoryAuthenticationScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>               model,
        bool                                                    displaySignIn,
        ::std::unique_ptr<::ClickSourceContext>                 clickedSource,
        ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> progressTips
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>               model,
        bool                                                    displaySignIn,
        ::std::unique_ptr<::ClickSourceContext>                 clickedSource,
        ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> progressTips
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
