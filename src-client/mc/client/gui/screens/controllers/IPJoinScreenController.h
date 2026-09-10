#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/ipjsc/Inputs.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class IPJoinScreenController : public ::MinecraftScreenController {
public:
    // IPJoinScreenController inner types declare
    // clang-format off
    struct JoinData;
    // clang-format on

    // IPJoinScreenController inner types define
    enum class JoinRequest : uchar {
        JoinWorld = 0,
        Cancel    = 1,
    };

    struct JoinData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> connectionId;
        ::ll::TypedStorage<8, 32, ::std::string> netherNetId;
        ::ll::TypedStorage<8, 32, ::std::string> playerMessagingId;
        // NOLINTEND
    };

    using OnJoinAttempt =
        ::std::function<::IPJoinScreenController::JoinRequest(::IPJoinScreenController::JoinData const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::IPJoinScreenController::JoinData> mJoinData;
    ::ll::TypedStorage<1, 1, ::IPJSC::Inputs>                     mHoveredInputs;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::IPJoinScreenController::JoinRequest(::IPJoinScreenController::JoinData const&)>>
                                             mOnJoinAttempt;
    ::ll::TypedStorage<8, 32, ::std::string> mHeaderText;
    // NOLINTEND

public:
    // prevent constructor by default
    IPJoinScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPJoinScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IPJoinScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>                                                         model,
        ::std::function<::IPJoinScreenController::JoinRequest(::IPJoinScreenController::JoinData const&)> onIdJoin
    );

    MCAPI void setHeaderText(::std::string text);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>                                                         model,
        ::std::function<::IPJoinScreenController::JoinRequest(::IPJoinScreenController::JoinData const&)> onIdJoin
    );
    // NOLINTEND
};
