#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpSequenceNumberMap {
public:
    // RtpSequenceNumberMap inner types declare
    // clang-format off
    struct Association;
    struct Info;
    // clang-format on

    // RtpSequenceNumberMap inner types define
    struct Association {};

    struct Info {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::RtpSequenceNumberMap::Info> Get(ushort) const;

    MCNAPI void InsertPacket(ushort, ::webrtc::RtpSequenceNumberMap::Info);

    MCNAPI explicit RtpSequenceNumberMap(uint64);

    MCNAPI ~RtpSequenceNumberMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
