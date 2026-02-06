#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class DynamicFormScreenController;
class MainMenuScreenModel;
class ServerFormBindingInformation;
namespace Json { class Value; }
// clang-format on

class ServerFormScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                     mInitialForm;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                              mFormId;
    ::ll::TypedStorage<1, 1, bool>                                               mIsServerTab;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                    mDirty;
    ::ll::TypedStorage<1, 1, bool>                                               mCreatedScreen;
    ::ll::TypedStorage<1, 1, bool>                                               mSentResponse;
    ::ll::TypedStorage<8, 8, ::DynamicFormScreenController*>                     mDynamicFormScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ServerFormBindingInformation>> mBindingData;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerFormScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerFormScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual void onTerminate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerFormScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::optional<uint>                    formId,
        ::std::string const&                     formData,
        bool                                     isServerTab
    );

    MCAPI void _createScreen(::std::string const& formJson);

    MCAPI ::std::string _parseRawText(::Json::Value const& value) const;

    MCAPI void _registerBindings();

    MCAPI void _sendCustomFormData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::optional<uint>                    formId,
        ::std::string const&                     formData,
        bool                                     isServerTab
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
    MCAPI void $onOpen();

    MCAPI void $onTerminate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
