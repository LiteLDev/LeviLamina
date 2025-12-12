#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/AnyForwardTsnChunk.h"
#include "mc/external/dcsctp/ReassemblyStreams.h"
#include "mc/external/dcsctp/UnwrappedSequenceNumber.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class FSNTag; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class MIDTag; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
// clang-format on

namespace dcsctp {

class InterleavedReassemblyStreams : public ::dcsctp::ReassemblyStreams {
public:
    // InterleavedReassemblyStreams inner types declare
    // clang-format off
    struct FullStreamId;
    class Stream;
    // clang-format on

    // InterleavedReassemblyStreams inner types define
    struct FullStreamId {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkb0e4a8;
        ::ll::UntypedStorage<2, 2> mUnk2a0011;
        // NOLINTEND

    public:
        // prevent constructor by default
        FullStreamId& operator=(FullStreamId const&);
        FullStreamId(FullStreamId const&);
        FullStreamId();
    };

    class Stream {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 4>  mUnk814dcd;
        ::ll::UntypedStorage<8, 8>  mUnkf8a26e;
        ::ll::UntypedStorage<8, 16> mUnk7c5d91;
        ::ll::UntypedStorage<8, 16> mUnkcc7f2f;
        ::ll::UntypedStorage<8, 8>  mUnk306874;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stream& operator=(Stream const&);
        Stream(Stream const&);
        Stream();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int
        Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn, ::dcsctp::Data data);

        MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState& state) const;

        MCNAPI uint64 AssembleMessage(
            ::std::map<
                ::webrtc::StrongAlias<::dcsctp::FSNTag, uint>,
                ::std::pair<
                    ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>,
                    ::dcsctp::Data>> const& tsn_chunks
        );

        MCNAPI uint64 EraseTo(::webrtc::StrongAlias<::dcsctp::MIDTag, uint> mid);

        MCNAPI Stream(
            ::dcsctp::InterleavedReassemblyStreams::FullStreamId stream_id,
            ::dcsctp::InterleavedReassemblyStreams*              parent,
            ::webrtc::StrongAlias<::dcsctp::MIDTag, uint>        next_mid
        );

        MCNAPI uint64
        TryToAssembleMessage(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::MIDTag, uint>> mid);

        MCNAPI uint64 TryToAssembleMessages();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::dcsctp::InterleavedReassemblyStreams::FullStreamId stream_id,
            ::dcsctp::InterleavedReassemblyStreams*              parent,
            ::webrtc::StrongAlias<::dcsctp::MIDTag, uint>        next_mid
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka7495b;
    ::ll::UntypedStorage<8, 64> mUnkebca0f;
    ::ll::UntypedStorage<8, 16> mUnkcdeed5;
    // NOLINTEND

public:
    // prevent constructor by default
    InterleavedReassemblyStreams& operator=(InterleavedReassemblyStreams const&);
    InterleavedReassemblyStreams(InterleavedReassemblyStreams const&);
    InterleavedReassemblyStreams();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual int
    Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn,
        ::dcsctp::Data                                                                   data) /*override*/;

    // vIndex: 2
    virtual uint64 HandleForwardTsn(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> new_cumulative_ack_tsn,
        ::rtc::ArrayView<::dcsctp::AnyForwardTsnChunk::SkippedStream const>              skipped_streams
    ) /*override*/;

    // vIndex: 3
    virtual void
    ResetStreams(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> stream_ids) /*override*/;

    // vIndex: 4
    virtual ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const /*override*/;

    // vIndex: 5
    virtual void AddHandoverState(::dcsctp::DcSctpSocketHandoverState& state) /*override*/;

    // vIndex: 6
    virtual void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const& state) /*override*/;

    // vIndex: 0
    virtual ~InterleavedReassemblyStreams() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dcsctp::InterleavedReassemblyStreams::Stream&
    GetOrCreateStream(::dcsctp::InterleavedReassemblyStreams::FullStreamId const& stream_id);

    MCNAPI InterleavedReassemblyStreams(
        ::std::string_view log_prefix,
        ::std::function<void(
            ::rtc::ArrayView<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const>,
            ::dcsctp::DcSctpMessage
        )>                 on_assembled_message
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string_view log_prefix,
        ::std::function<void(
            ::rtc::ArrayView<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const>,
            ::dcsctp::DcSctpMessage
        )>                 on_assembled_message
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int
    $Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn, ::dcsctp::Data data);

    MCNAPI uint64 $HandleForwardTsn(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> new_cumulative_ack_tsn,
        ::rtc::ArrayView<::dcsctp::AnyForwardTsnChunk::SkippedStream const>              skipped_streams
    );

    MCNAPI void $ResetStreams(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> stream_ids);

    MCNAPI ::dcsctp::HandoverReadinessStatus $GetHandoverReadiness() const;

    MCNAPI void $AddHandoverState(::dcsctp::DcSctpSocketHandoverState& state);

    MCNAPI void $RestoreFromState(::dcsctp::DcSctpSocketHandoverState const& state);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
