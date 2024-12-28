#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/UnwrappedSequenceNumber.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class FSNTag; }
namespace dcsctp { class MIDTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
// clang-format on

namespace dcsctp {

class InterleavedReassemblyStreams {
public:
    // InterleavedReassemblyStreams inner types declare
    // clang-format off
    struct FullStreamId;
    class Stream;
    // clang-format on

    // InterleavedReassemblyStreams inner types define
    struct FullStreamId {
    public:
        // prevent constructor by default
        FullStreamId& operator=(FullStreamId const&);
        FullStreamId(FullStreamId const&);
        FullStreamId();
    };

    class Stream {
    public:
        // prevent constructor by default
        Stream& operator=(Stream const&);
        Stream(Stream const&);
        Stream();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI int Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::dcsctp::Data);

        MCAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&) const;

        MCAPI uint64
        AssembleMessage(::std::map<
                        ::webrtc::StrongAlias<::dcsctp::FSNTag, uint>,
                        ::std::pair<
                            ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>,
                            ::dcsctp::Data>> const&);

        MCAPI uint64 EraseTo(::webrtc::StrongAlias<::dcsctp::MIDTag, uint>);

        MCAPI
        Stream(::dcsctp::InterleavedReassemblyStreams::FullStreamId, ::dcsctp::InterleavedReassemblyStreams*, ::webrtc::StrongAlias<::dcsctp::MIDTag, uint>);

        MCAPI uint64
            TryToAssembleMessage(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::MIDTag, uint>>);

        MCAPI uint64 TryToAssembleMessages();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void*
        $ctor(::dcsctp::InterleavedReassemblyStreams::FullStreamId, ::dcsctp::InterleavedReassemblyStreams*, ::webrtc::StrongAlias<::dcsctp::MIDTag, uint>);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    InterleavedReassemblyStreams& operator=(InterleavedReassemblyStreams const&);
    InterleavedReassemblyStreams(InterleavedReassemblyStreams const&);
    InterleavedReassemblyStreams();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::dcsctp::InterleavedReassemblyStreams::Stream&
    GetOrCreateStream(::dcsctp::InterleavedReassemblyStreams::FullStreamId const&);

    MCAPI
    InterleavedReassemblyStreams(::std::string_view, ::std::function<void(::rtc::ArrayView<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const>, ::dcsctp::DcSctpMessage)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
        $ctor(::std::string_view, ::std::function<void(::rtc::ArrayView<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const>, ::dcsctp::DcSctpMessage)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
