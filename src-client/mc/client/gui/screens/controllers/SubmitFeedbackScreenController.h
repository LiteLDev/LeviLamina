#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/options/FeedbackType.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class SubmitFeedbackScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mDirty;
    ::ll::TypedStorage<1, 1, bool>                                    mPendingAsyncOperation;
    ::ll::TypedStorage<1, 1, bool>                                    mEnableSubmitButton;
    ::ll::TypedStorage<1, 1, bool>                                    mShowScreen;
    ::ll::TypedStorage<1, 1, bool>                                    mSubmitFeedbackInProgress;
    ::ll::TypedStorage<4, 4, int>                                     mFeedbackTextLimit;
    ::ll::TypedStorage<8, 32, ::std::string>                          mResponseMsg;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastUpdate;
    ::ll::TypedStorage<4, 4, uint>                                    mResponseCode;
    ::ll::TypedStorage<8, 32, ::std::string>                          mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>                          mFeedbackText;
    ::ll::TypedStorage<4, 4, ::FeedbackType>                          mFeedbackType;
    // NOLINTEND

public:
    // prevent constructor by default
    SubmitFeedbackScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubmitFeedbackScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SubmitFeedbackScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::FeedbackType                           feedbackType,
        ::std::string const&                     identifier,
        int                                      feedbackTextLimit
    );

    MCAPI void _displayResponseStatusDialog(bool receivedSuccessResponse);

    MCAPI void _setResponseMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::FeedbackType                           feedbackType,
        ::std::string const&                     identifier,
        int                                      feedbackTextLimit
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND
};
