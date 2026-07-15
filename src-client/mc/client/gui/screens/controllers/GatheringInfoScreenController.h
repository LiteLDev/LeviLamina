#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class GatheringConfig;
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class GatheringInfoScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GatheringConfig const>> mActiveGathering;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>     mVenueConnectionTime;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>          mQRCodeFilepath;
    ::ll::TypedStorage<1, 1, bool>                                        mAutoConnect;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mDiscoverySubscription;
    ::ll::TypedStorage<1, 1, bool>                                        mUpdateRequired;
    // NOLINTEND

public:
    // prevent constructor by default
    GatheringInfoScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GatheringInfoScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GatheringInfoScreenController(::std::shared_ptr<::MainMenuScreenModel> model, bool autoConnect);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, bool autoConnect);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
