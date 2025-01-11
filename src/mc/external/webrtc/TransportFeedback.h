#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class TransportFeedback {
public:
    // TransportFeedback inner types declare
    // clang-format off
    struct LastChunk;
    // clang-format on

    // TransportFeedback inner types define
    struct LastChunk {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void AppendTo(::std::vector<uchar>*) const;

        MCAPI void Clear();

        MCAPI void Decode(ushort, uint64);

        MCAPI void DecodeOneBit(ushort, uint64);

        MCAPI void DecodeRunLength(ushort, uint64);

        MCAPI void DecodeTwoBit(ushort, uint64);

        MCAPI bool Empty() const;

        MCAPI ushort EncodeLast() const;

        MCAPI ushort EncodeOneBit() const;

        MCAPI ushort EncodeRunLength() const;

        MCAPI ushort EncodeTwoBit(uint64) const;

        MCAPI LastChunk();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::Timestamp BaseTime() const;

    MCAPI void Clear();

    MCAPI void ForAllPackets(::rtc::FunctionView<void(ushort, ::webrtc::TimeDelta)>) const;

    MCAPI ::webrtc::TimeDelta GetBaseDelta(::webrtc::Timestamp) const;

    MCAPI uint64 PaddingLength() const;

    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCAPI TransportFeedback();

    MCAPI explicit TransportFeedback(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
