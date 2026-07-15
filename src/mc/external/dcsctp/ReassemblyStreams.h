#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/AnyForwardTsnChunk.h"
#include "mc/external/dcsctp/UnwrappedSequenceNumber.h"
#include "mc/external/webrtc/ArrayView.h"
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
    Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn, ::dcsctp::Data data) = 0;

    virtual uint64 HandleForwardTsn(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> new_cumulative_ack_tsn,
        ::webrtc::ArrayView<::dcsctp::AnyForwardTsnChunk::SkippedStream const, 18446744073709546905> skipped_streams
    ) = 0;

    virtual void ResetStreams(
        ::webrtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const, 18446744073709546905> stream_ids
    ) = 0;

    virtual ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const = 0;

    virtual void AddHandoverState(::dcsctp::DcSctpSocketHandoverState& state) = 0;

    virtual void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const& state) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
