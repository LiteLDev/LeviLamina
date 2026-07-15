#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/EduShareLinkItem.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/options/EduSharedUriResource.h"

// auto generated forward declare list
// clang-format off
class LibraryItem;
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class EduShareLinkScreenController : public ::MainMenuScreenController {
public:
    // EduShareLinkScreenController inner types declare
    // clang-format off
    struct EduShareLinkCapabilities;
    // clang-format on

    // EduShareLinkScreenController inner types define
    enum class UriResourceValidationStatus : int {
        Empty   = 0,
        Invalid = 1,
        Valid   = 2,
    };

    enum class ScreenState : int {
        None        = 0,
        Simple      = 1,
        Teams       = 2,
        AddResource = 3,
    };

    struct EduShareLinkCapabilities {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mShareLinkIgnored;
        ::ll::TypedStorage<1, 1, bool> mShareToTeams;
        ::ll::TypedStorage<1, 1, bool> mCanAssignResources;
        ::ll::TypedStorage<1, 1, bool> mIsEducator;
        // NOLINTEND
    };

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduShareLinkScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::LibraryItem const&                     item,
        ::std::optional<::EduSharedUriResource>  resource
    );
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
