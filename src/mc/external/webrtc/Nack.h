#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class Nack {
public:
    // prevent constructor by default
    Nack& operator=(Nack const&);
    Nack(Nack const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Nack();

    MCAPI void Pack();

    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCAPI void SetPacketIds(::std::vector<ushort>);

    MCAPI void SetPacketIds(ushort const*, uint64);

    MCAPI void Unpack();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
