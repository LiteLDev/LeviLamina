#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class RatingPromptController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mTitleId;
    ::ll::TypedStorage<8, 32, ::std::string const> mImage;
    ::ll::TypedStorage<8, 32, ::std::string const> mButtonName;
    // NOLINTEND

public:
    // prevent constructor by default
    RatingPromptController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RatingPromptController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RatingPromptController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      titleId,
        ::std::string const&                      image,
        ::std::string const&                      buttonName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      titleId,
        ::std::string const&                      image,
        ::std::string const&                      buttonName
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
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
