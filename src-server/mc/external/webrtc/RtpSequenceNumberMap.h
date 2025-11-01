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
    struct Info {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkab38fb;
        ::ll::UntypedStorage<1, 1> mUnk35db5e;
        ::ll::UntypedStorage<1, 1> mUnk644b32;
        // NOLINTEND

    public:
        // prevent constructor by default
        Info& operator=(Info const&);
        Info(Info const&);
        Info();
    };

    struct Association {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnke71be6;
        ::ll::UntypedStorage<4, 8> mUnk7bc739;
        // NOLINTEND

    public:
        // prevent constructor by default
        Association& operator=(Association const&);
        Association(Association const&);
        Association();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd49feb;
    ::ll::UntypedStorage<8, 40> mUnk873fea;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpSequenceNumberMap& operator=(RtpSequenceNumberMap const&);
    RtpSequenceNumberMap(RtpSequenceNumberMap const&);
    RtpSequenceNumberMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::RtpSequenceNumberMap::Info> Get(ushort sequence_number) const;

    MCNAPI void InsertPacket(ushort sequence_number, ::webrtc::RtpSequenceNumberMap::Info info);

    MCNAPI explicit RtpSequenceNumberMap(uint64 max_entries);

    MCNAPI ~RtpSequenceNumberMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 max_entries);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
