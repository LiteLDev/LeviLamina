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
class ADPopupButtonAction;
class ActiveDirectoryAuthenticationInterface;
class ClickSourceContext;
class MinecraftScreenModel;
struct Purchase;
namespace Json { class Value; }
namespace Progress { struct ProgressTips; }
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
    virtual ~ActiveDirectoryAuthenticationScreenController() /*override*/;

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

    MCAPI void _announceModalDialog() const;

    MCAPI void _closeModalDialog(bool doPostAction);

    MCFOLD void _closeProgressDialog();

    MCAPI bool _fulfillPriorPurchase(::std::weak_ptr<::Purchase> purchase);

    MCAPI void _handleAuthenticationPendingPresentation();

    MCAPI void _handlePopupButton(::ADPopupButtonAction const& action);

    MCAPI void _handlePurchaseFailure();

    MCAPI void _openModalDialog(::std::string const& dialogId);

    MCAPI void _openProgressDialog();

    MCAPI void _purchaseLicense();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD void $onTerminate();

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
