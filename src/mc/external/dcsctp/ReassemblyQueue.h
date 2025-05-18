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

class ReassemblyQueue {
public:
    // prevent constructor by default
    ReassemblyQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Add(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data);

    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCNAPI void AddReassembledMessage(
        ::rtc::ArrayView<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const>,
        ::dcsctp::DcSctpMessage
    );

    MCNAPI void
        EnterDeferredReset(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>);

    MCNAPI ::std::vector<::dcsctp::DcSctpMessage> FlushMessages();

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI void
        HandleForwardTsn(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::rtc::ArrayView<::dcsctp::AnyForwardTsnChunk::SkippedStream const>);

    MCNAPI ReassemblyQueue(::std::string_view, uint64, bool);

    MCNAPI void
        ResetStreamsAndLeaveDeferredReset(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>);

    MCNAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&);

    MCNAPI ~ReassemblyQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view, uint64, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
