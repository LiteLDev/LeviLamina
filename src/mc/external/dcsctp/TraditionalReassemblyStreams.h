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
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class SSNTag; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
// clang-format on

namespace dcsctp {

class TraditionalReassemblyStreams : public ::dcsctp::ReassemblyStreams {
public:
    // TraditionalReassemblyStreams inner types declare
    // clang-format off
    class StreamBase;
    class OrderedStream;
    class UnorderedStream;
    // clang-format on

    // TraditionalReassemblyStreams inner types define
    class StreamBase {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk58f649;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamBase& operator=(StreamBase const&);
        StreamBase(StreamBase const&);
        StreamBase();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI uint64 AssembleMessage(
            ::std::_Tree_iterator<::std::_Tree_val<::std::_Tree_simple_types<::std::pair<
                ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const,
                ::dcsctp::Data>>>> start,
            ::std::_Tree_iterator<::std::_Tree_val<::std::_Tree_simple_types<::std::pair<
                ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const,
                ::dcsctp::Data>>>> end
        );

        MCNAPI uint64 AssembleMessage(
            ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn,
            ::dcsctp::Data                                                                   data
        );
        // NOLINTEND
    };

    class OrderedStream : public ::dcsctp::TraditionalReassemblyStreams::StreamBase {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk8a9c6a;
        ::ll::UntypedStorage<8, 16> mUnk83bda9;
        ::ll::UntypedStorage<8, 8>  mUnkdb6cd9;
        // NOLINTEND

    public:
        // prevent constructor by default
        OrderedStream& operator=(OrderedStream const&);
        OrderedStream(OrderedStream const&);
        OrderedStream();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int
        Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn, ::dcsctp::Data data);

        MCNAPI uint64 EraseTo(::webrtc::StrongAlias<::dcsctp::SSNTag, ushort> ssn);

        MCNAPI OrderedStream(
            ::dcsctp::TraditionalReassemblyStreams*         parent,
            ::webrtc::StrongAlias<::dcsctp::SSNTag, ushort> next_ssn
        );

        MCNAPI uint64 TryToAssembleMessages();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::dcsctp::TraditionalReassemblyStreams* parent, ::webrtc::StrongAlias<::dcsctp::SSNTag, ushort> next_ssn);
        // NOLINTEND
    };

    class UnorderedStream : public ::dcsctp::TraditionalReassemblyStreams::StreamBase {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk3eedb6;
        // NOLINTEND

    public:
        // prevent constructor by default
        UnorderedStream& operator=(UnorderedStream const&);
        UnorderedStream(UnorderedStream const&);
        UnorderedStream();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int
        Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn, ::dcsctp::Data data);

        MCNAPI uint64 TryToAssembleMessage(
            ::std::_Tree_iterator<::std::_Tree_val<::std::_Tree_simple_types<::std::pair<
                ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const,
                ::dcsctp::Data>>>> iter
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd3c9ad;
    ::ll::UntypedStorage<8, 64> mUnk620844;
    ::ll::UntypedStorage<8, 16> mUnk23c040;
    ::ll::UntypedStorage<8, 16> mUnka744ff;
    // NOLINTEND

public:
    // prevent constructor by default
    TraditionalReassemblyStreams& operator=(TraditionalReassemblyStreams const&);
    TraditionalReassemblyStreams(TraditionalReassemblyStreams const&);
    TraditionalReassemblyStreams();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int
    Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn,
        ::dcsctp::Data                                                                   data) /*override*/;

    virtual uint64 HandleForwardTsn(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> new_cumulative_ack_tsn,
        ::rtc::ArrayView<::dcsctp::AnyForwardTsnChunk::SkippedStream const>              skipped_streams
    ) /*override*/;

    virtual void
    ResetStreams(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> stream_ids) /*override*/;

    virtual ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const /*override*/;

    virtual void AddHandoverState(::dcsctp::DcSctpSocketHandoverState& state) /*override*/;

    virtual void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const& state) /*override*/;

    virtual ~TraditionalReassemblyStreams() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TraditionalReassemblyStreams(
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
