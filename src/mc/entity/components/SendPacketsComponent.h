#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/SendPacketInfo.h"
#include "mc/entity/components/SendPacketToOwnerInfo.h"

struct SendPacketsComponent {
public:
    // SendPacketsComponent inner types define
    using Variant = ::std::variant<::SendPacketInfo, ::SendPacketToOwnerInfo>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<::SendPacketInfo, ::SendPacketToOwnerInfo>>> mPacketsToSend;
    // NOLINTEND
};
