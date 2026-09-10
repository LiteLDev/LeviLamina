#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class BetaFeedbackQrScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mFeedbackUrl;
    // NOLINTEND

public:
    // prevent constructor by default
    BetaFeedbackQrScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    BetaFeedbackQrScreenController(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string const& feedbackUrl);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string const& feedbackUrl);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI void $onOpen();
    // NOLINTEND
};
