#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/EduShareLinkItem.h"
#include "mc/client/gui/screens/controllers/EduShareMethodType.h"
#include "mc/client/gui/screens/controllers/EduShareUriType.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/options/EduSharedUriResource.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct LibraryItem;
namespace Json { class Value; }
// clang-format on

class EduShareLinkScreenController : public ::MainMenuScreenController {
public:
    // EduShareLinkScreenController inner types declare
    // clang-format off
    struct EduShareLinkCapabilities;
    // clang-format on

    // EduShareLinkScreenController inner types define
    enum class UriResourceValidationStatus : int {};

    enum class ScreenState : int {};

    struct EduShareLinkCapabilities {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 4, ::EduShareLinkScreenController::EduShareLinkCapabilities> mCapabilities;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mSourceScreen;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mSourcePrefix;
    ::ll::TypedStorage<4, 4, ::EduShareLinkScreenController::ScreenState>              mScreenState;
    ::ll::TypedStorage<8, 104, ::EduShareLinkItem>                                     mItem;
    ::ll::TypedStorage<8, 72, ::std::optional<::EduSharedUriResource>>                 mOriginalAdditionalUriResource;
    ::ll::TypedStorage<8, 72, ::std::optional<::EduSharedUriResource>>                 mAdditionalUriResource;
    ::ll::TypedStorage<8, 64, ::EduSharedUriResource>                                  mEditAdditionalUriResource;
    ::ll::TypedStorage<4, 4, ::EduShareLinkScreenController::UriResourceValidationStatus> mUriResourceValidationStatus;
    ::ll::TypedStorage<8, 32, ::std::string> mAdditionalUriResourceUriErrorMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    EduShareLinkScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ~EduShareLinkScreenController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduShareLinkScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::LibraryItem const&                     item,
        ::std::optional<::EduSharedUriResource>  resource
    );

    MCAPI ::std::string _appendAdditionalResources(::std::string const& url);

    MCAPI void _clearAdditionalUriResource();

    MCAPI void _closeActiveScreen();

    MCAPI ::std::string _getResourceAddedText() const;

    MCAPI ::std::string _getShareButtonText() const;

    MCAPI ::std::string _getTeamsAdvancedShareTitle() const;

    MCAPI ::std::string _getTeamsBodyText() const;

    MCAPI void _openScreen(::EduShareLinkScreenController::ScreenState state);

    MCAPI void _registerAddResourcesHandlers();

    MCAPI void _registerShareDialogHandlers(::std::string const& copyUri);

    MCAPI void _registerShareTeamsHandlers();

    MCAPI void _registerSimpleShareMenuHandlers();

    MCAPI void _screenTTS(::std::string const& title, ::std::string const& contents, ::std::string const& extra);

    MCAPI void
    _sendNotification(::EduShareUriType shareType, ::EduShareMethodType methodType, ::std::string const& toastMessage);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::LibraryItem const&                     item,
        ::std::optional<::EduSharedUriResource>  resource
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
