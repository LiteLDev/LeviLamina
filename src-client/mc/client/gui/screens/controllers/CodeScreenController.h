#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/CodeScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/CodeScreenViewOption.h"
#include "mc/client/gui/screens/controllers/UriData.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/platform/WebviewObserver.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ScreenControllerProxy;
struct WebviewError;
namespace Json { class Value; }
// clang-format on

class CodeScreenController : public ::ClientInstanceScreenController,
                             public ::CodeScreenControllerProxy,
                             public ::WebviewObserver {
public:
    // CodeScreenController inner types define
    enum class ModalView : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::UriData>                        mChosenUrl;
    ::ll::TypedStorage<4, 4, ::CodeScreenController::ModalView> mModalView;
    ::ll::TypedStorage<4, 4, ::OpenCodeMethod>                  mOpenMethod;
    ::ll::TypedStorage<8, 32, ::std::string>                    mMakeCodeUri;
    ::ll::TypedStorage<1, 1, bool>                              mNeedsRefresh;
    ::ll::TypedStorage<1, 1, bool>                              mWebviewLoading;
    ::ll::TypedStorage<1, 1, bool>                              mHasDefaultUri;
    ::ll::TypedStorage<1, 1, bool>                              mHasOverrideUri;
    ::ll::TypedStorage<1, 1, bool>                              mShowMenu;
    ::ll::TypedStorage<1, 1, bool>                              mShowTynkerDeprecated;
    ::ll::TypedStorage<1, 1, bool>                              mShowAZNBDeprecated;
    // NOLINTEND

public:
    // prevent constructor by default
    CodeScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CodeScreenController() /*override*/;

    virtual void onInit() /*override*/;

    virtual void onDelete() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ScreenControllerProxy* getProxy() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onLoadingBegin() /*override*/;

    virtual void onLoadingEnd() /*override*/;

    virtual void onError(::WebviewError const& error) /*override*/;

    virtual void onWebviewChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CodeScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model, ::OpenCodeMethod openMethod);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _selectEditor(::std::string const& url);

    MCAPI void _setViewOption(::CodeScreenViewOption view);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool validateUri(::std::string const& uri);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& INTERFACE_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model, ::OpenCodeMethod openMethod);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onInit();

    MCAPI void $onDelete();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::ScreenControllerProxy* $getProxy();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $onLoadingBegin();

    MCAPI void $onLoadingEnd();

    MCAPI void $onError(::WebviewError const& error);

    MCFOLD void $onWebviewChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForWebviewObserver();

    MCNAPI static void** $vftableForCodeScreenControllerProxy();
    // NOLINTEND
};
