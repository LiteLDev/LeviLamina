#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SendPacketInfo;
struct SendPacketToOwnerInfo;
// clang-format on

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
