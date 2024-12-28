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
    // prevent constructor by default
    Data& operator=(Data const&);
    Data(Data const&);
    Data();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::dcsctp::Data Clone() const;

    MCAPI Data(::dcsctp::Data&&);

    MCAPI Data(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, ::webrtc::StrongAlias<::dcsctp::SSNTag, ushort>, ::webrtc::StrongAlias<::dcsctp::MIDTag, uint>, ::webrtc::StrongAlias<::dcsctp::FSNTag, uint>, ::webrtc::StrongAlias<::dcsctp::PPIDTag, uint>, ::std::vector<uchar>, ::webrtc::StrongAlias<::dcsctp::IsBeginningTag, bool>, ::webrtc::StrongAlias<::dcsctp::IsEndTag, bool>, ::webrtc::StrongAlias<::dcsctp::IsUnorderedTag, bool>);

    MCAPI ~Data();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::dcsctp::Data&&);

    MCAPI void*
        $ctor(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, ::webrtc::StrongAlias<::dcsctp::SSNTag, ushort>, ::webrtc::StrongAlias<::dcsctp::MIDTag, uint>, ::webrtc::StrongAlias<::dcsctp::FSNTag, uint>, ::webrtc::StrongAlias<::dcsctp::PPIDTag, uint>, ::std::vector<uchar>, ::webrtc::StrongAlias<::dcsctp::IsBeginningTag, bool>, ::webrtc::StrongAlias<::dcsctp::IsEndTag, bool>, ::webrtc::StrongAlias<::dcsctp::IsUnorderedTag, bool>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
