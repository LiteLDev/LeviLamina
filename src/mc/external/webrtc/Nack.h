#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class Nack {
public:
    // Nack inner types declare
    // clang-format off
    struct PackedNack;
    // clang-format on

    // Nack inner types define
    struct PackedNack {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Nack();

    MCNAPI void Pack();

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCNAPI void SetPacketIds(::std::vector<ushort>);

    MCNAPI void SetPacketIds(ushort const*, uint64);

    MCNAPI void Unpack();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
