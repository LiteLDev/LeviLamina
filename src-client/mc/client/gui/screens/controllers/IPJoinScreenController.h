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
    enum class JoinRequest : uchar {};

    struct JoinData {};

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

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>                                                         model,
        ::std::function<::IPJoinScreenController::JoinRequest(::IPJoinScreenController::JoinData const&)> onIdJoin
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
