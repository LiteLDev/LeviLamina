#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/ipjsc/Inputs.h"

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
        ::ll::TypedStorage<8, 32, ::std::string> netherNetId;
        // NOLINTEND
    };

    using OnIdJoin = ::std::function<::IPJoinScreenController::JoinRequest(::IPJoinScreenController::JoinData const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::IPJoinScreenController::JoinData> mJoinData;
    ::ll::TypedStorage<1, 1, ::IPJSC::Inputs>                     mHoveredInputs;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::IPJoinScreenController::JoinRequest(::IPJoinScreenController::JoinData const&)>>
                                             mOnIdJoin;
    ::ll::TypedStorage<8, 32, ::std::string> mHeaderText;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPJoinScreenController() /*override*/ = default;
    // NOLINTEND
};
