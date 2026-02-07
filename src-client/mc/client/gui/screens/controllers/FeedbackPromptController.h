#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
// clang-format on

class FeedbackPromptController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mTitleId;
    ::ll::TypedStorage<8, 32, ::std::string const> mImage;
    ::ll::TypedStorage<8, 32, ::std::string const> mButtonName;
    // NOLINTEND

public:
    // prevent constructor by default
    FeedbackPromptController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeedbackPromptController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeedbackPromptController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::std::string const&                           titleId,
        ::std::string const&                           image,
        ::std::string const&                           buttonName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::std::string const&                           titleId,
        ::std::string const&                           image,
        ::std::string const&                           buttonName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
