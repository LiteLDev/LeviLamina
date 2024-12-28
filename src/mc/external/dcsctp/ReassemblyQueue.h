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
    ReassemblyQueue& operator=(ReassemblyQueue const&);
    ReassemblyQueue(ReassemblyQueue const&);
    ReassemblyQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Add(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data);

    MCAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCAPI void AddReassembledMessage(
        ::rtc::ArrayView<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const>,
        ::dcsctp::DcSctpMessage
    );

    MCAPI void
        EnterDeferredReset(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>);

    MCAPI ::std::vector<::dcsctp::DcSctpMessage> FlushMessages();

    MCAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCAPI void
        HandleForwardTsn(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::rtc::ArrayView<::dcsctp::AnyForwardTsnChunk::SkippedStream const>);

    MCAPI ReassemblyQueue(::std::string_view, uint64, bool);

    MCAPI void
        ResetStreamsAndLeaveDeferredReset(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>);

    MCAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&);

    MCAPI ~ReassemblyQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view, uint64, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
