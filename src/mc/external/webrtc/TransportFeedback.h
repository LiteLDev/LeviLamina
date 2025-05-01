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
    class ReceivedPacket;
    // clang-format on

    // TransportFeedback inner types define
    struct LastChunk {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void AppendTo(::std::vector<uchar>*) const;

        MCNAPI void Clear();

        MCNAPI void Decode(ushort, uint64);

        MCNAPI void DecodeOneBit(ushort, uint64);

        MCNAPI void DecodeRunLength(ushort, uint64);

        MCNAPI void DecodeTwoBit(ushort, uint64);

        MCNAPI bool Empty() const;

        MCNAPI ushort EncodeLast() const;

        MCNAPI ushort EncodeOneBit() const;

        MCNAPI ushort EncodeRunLength() const;

        MCNAPI ushort EncodeTwoBit(uint64) const;

        MCNAPI LastChunk();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND
    };

    class ReceivedPacket {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::Timestamp BaseTime() const;

    MCNAPI void Clear();

    MCNAPI void ForAllPackets(::rtc::FunctionView<void(ushort, ::webrtc::TimeDelta)>) const;

    MCNAPI ::webrtc::TimeDelta GetBaseDelta(::webrtc::Timestamp) const;

    MCNAPI uint64 PaddingLength() const;

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCNAPI TransportFeedback();

    MCNAPI explicit TransportFeedback(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
