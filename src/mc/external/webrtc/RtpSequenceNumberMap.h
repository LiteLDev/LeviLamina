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
    struct Info {
    public:
        // prevent constructor by default
        Info& operator=(Info const&);
        Info(Info const&);
        Info();
    };

public:
    // prevent constructor by default
    RtpSequenceNumberMap& operator=(RtpSequenceNumberMap const&);
    RtpSequenceNumberMap(RtpSequenceNumberMap const&);
    RtpSequenceNumberMap();

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
