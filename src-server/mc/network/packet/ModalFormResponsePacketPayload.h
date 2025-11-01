#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/network/packet/ModalFormCancelReason.h"

struct ModalFormResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                     mFormId;
    ::ll::TypedStorage<8, 24, ::std::optional<::Json::Value>>          mJSONResponse;
    ::ll::TypedStorage<1, 2, ::std::optional<::ModalFormCancelReason>> mFormCancelReason;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ModalFormResponsePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
