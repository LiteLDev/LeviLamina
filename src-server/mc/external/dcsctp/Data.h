#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class FSNTag; }
namespace dcsctp { class IsBeginningTag; }
namespace dcsctp { class IsEndTag; }
namespace dcsctp { class IsUnorderedTag; }
namespace dcsctp { class MIDTag; }
namespace dcsctp { class PPIDTag; }
namespace dcsctp { class SSNTag; }
namespace dcsctp { class StreamIDTag; }
// clang-format on

namespace dcsctp {

struct Data {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk19736b;
    ::ll::UntypedStorage<2, 2> mUnkc6c2bb;
    ::ll::UntypedStorage<4, 4> mUnkc9df78;
    ::ll::UntypedStorage<4, 4> mUnk400ede;
    ::ll::UntypedStorage<4, 4> mUnkeb26a0;
    ::ll::UntypedStorage<8, 24> mUnkd8cea3;
    ::ll::UntypedStorage<1, 1> mUnk7d095e;
    ::ll::UntypedStorage<1, 1> mUnk878bfa;
    ::ll::UntypedStorage<1, 1> mUnk6ce92e;
    // NOLINTEND

public:
    // prevent constructor by default
    Data& operator=(Data const&);
    Data(Data const&);
    Data();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dcsctp::Data Clone() const;

    MCNAPI Data(::dcsctp::Data&&);

    MCNAPI Data(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id, ::webrtc::StrongAlias<::dcsctp::SSNTag, ushort> ssn, ::webrtc::StrongAlias<::dcsctp::MIDTag, uint> mid, ::webrtc::StrongAlias<::dcsctp::FSNTag, uint> fsn, ::webrtc::StrongAlias<::dcsctp::PPIDTag, uint> ppid, ::std::vector<uchar> payload, ::webrtc::StrongAlias<::dcsctp::IsBeginningTag, bool> is_beginning, ::webrtc::StrongAlias<::dcsctp::IsEndTag, bool> is_end, ::webrtc::StrongAlias<::dcsctp::IsUnorderedTag, bool> is_unordered);

    MCNAPI ~Data();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dcsctp::Data&&);

    MCNAPI void* $ctor(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id, ::webrtc::StrongAlias<::dcsctp::SSNTag, ushort> ssn, ::webrtc::StrongAlias<::dcsctp::MIDTag, uint> mid, ::webrtc::StrongAlias<::dcsctp::FSNTag, uint> fsn, ::webrtc::StrongAlias<::dcsctp::PPIDTag, uint> ppid, ::std::vector<uchar> payload, ::webrtc::StrongAlias<::dcsctp::IsBeginningTag, bool> is_beginning, ::webrtc::StrongAlias<::dcsctp::IsEndTag, bool> is_end, ::webrtc::StrongAlias<::dcsctp::IsUnorderedTag, bool> is_unordered);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
