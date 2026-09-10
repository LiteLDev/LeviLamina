#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DataItemBytePayload.h"
#include "mc/world/actor/DataItemCompoundTagPayload.h"
#include "mc/world/actor/DataItemFloatPayload.h"
#include "mc/world/actor/DataItemInt64Payload.h"
#include "mc/world/actor/DataItemIntPayload.h"
#include "mc/world/actor/DataItemPosPayload.h"
#include "mc/world/actor/DataItemShortPayload.h"
#include "mc/world/actor/DataItemStringPayload.h"
#include "mc/world/actor/DataItemVec3Payload.h"

struct DataItemEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mId;
    ::ll::TypedStorage<
        8,
        40,
        ::std::variant<
            ::DataItemBytePayload,
            ::DataItemShortPayload,
            ::DataItemIntPayload,
            ::DataItemFloatPayload,
            ::DataItemStringPayload,
            ::DataItemCompoundTagPayload,
            ::DataItemPosPayload,
            ::DataItemInt64Payload,
            ::DataItemVec3Payload>>
        mPayload;
    // NOLINTEND
};
