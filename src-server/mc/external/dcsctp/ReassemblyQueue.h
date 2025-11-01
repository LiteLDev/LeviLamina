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
    // ReassemblyQueue inner types declare
    // clang-format off
    struct DeferredResetStreams;
    // clang-format on
    
    // ReassemblyQueue inner types define
    struct DeferredResetStreams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkbdecc4;
        ::ll::UntypedStorage<8, 32> mUnk68a942;
        ::ll::UntypedStorage<8, 24> mUnke99adb;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        DeferredResetStreams& operator=(DeferredResetStreams const&);
        DeferredResetStreams(DeferredResetStreams const&);
        DeferredResetStreams();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc1ff6a;
    ::ll::UntypedStorage<8, 8> mUnk1f5492;
    ::ll::UntypedStorage<8, 8> mUnkf157d8;
    ::ll::UntypedStorage<8, 16> mUnkc80c15;
    ::ll::UntypedStorage<8, 24> mUnk282c0e;
    ::ll::UntypedStorage<8, 72> mUnk7afd2d;
    ::ll::UntypedStorage<4, 4> mUnka9716b;
    ::ll::UntypedStorage<8, 8> mUnk9e52e5;
    ::ll::UntypedStorage<8, 8> mUnkb51426;
    // NOLINTEND

public:
    // prevent constructor by default
    ReassemblyQueue& operator=(ReassemblyQueue const&);
    ReassemblyQueue(ReassemblyQueue const&);
    ReassemblyQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Add(::webrtc::StrongAlias<::dcsctp::TSNTag, uint> tsn, ::dcsctp::Data data);

    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState& state);

    MCNAPI void AddReassembledMessage(::rtc::ArrayView<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const> tsns, ::dcsctp::DcSctpMessage message);

    MCNAPI void EnterDeferredReset(::webrtc::StrongAlias<::dcsctp::TSNTag, uint> sender_last_assigned_tsn, ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> streams);

    MCNAPI ::std::vector<::dcsctp::DcSctpMessage> FlushMessages();

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI void HandleForwardTsn(::webrtc::StrongAlias<::dcsctp::TSNTag, uint> new_cumulative_tsn, ::rtc::ArrayView<::dcsctp::AnyForwardTsnChunk::SkippedStream const> skipped_streams);

    MCNAPI ReassemblyQueue(::std::string_view log_prefix, uint64 max_size_bytes, bool use_message_interleaving);

    MCNAPI void ResetStreamsAndLeaveDeferredReset(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> stream_ids);

    MCNAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const& state);

    MCNAPI ~ReassemblyQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view log_prefix, uint64 max_size_bytes, bool use_message_interleaving);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
