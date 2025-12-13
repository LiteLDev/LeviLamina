#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/AnyForwardTsnChunk.h"
#include "mc/external/dcsctp/UnwrappedSequenceNumber.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
// clang-format on

namespace dcsctp {

class ReassemblyStreams {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReassemblyStreams() = default;

    virtual int
        Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::dcsctp::Data) = 0;

    virtual uint64 HandleForwardTsn(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>,
        ::rtc::ArrayView<::dcsctp::AnyForwardTsnChunk::SkippedStream const>
    ) = 0;

    virtual void ResetStreams(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>) = 0;

    virtual ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const = 0;

    virtual void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&) = 0;

    virtual void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
