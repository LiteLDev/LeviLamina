#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpSequenceNumberMap {
public:
    // RtpSequenceNumberMap inner types declare
    // clang-format off
    struct Info;
    // clang-format on

    // RtpSequenceNumberMap inner types define
    struct Info {};

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::webrtc::RtpSequenceNumberMap::Info> Get(ushort) const;

    MCAPI void InsertPacket(ushort, ::webrtc::RtpSequenceNumberMap::Info);

    MCAPI explicit RtpSequenceNumberMap(uint64);

    MCAPI ~RtpSequenceNumberMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
