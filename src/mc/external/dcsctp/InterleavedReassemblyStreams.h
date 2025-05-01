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
    struct FullStreamId {};

    class Stream {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int
            Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::dcsctp::Data);

        MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&) const;

        MCNAPI uint64
        AssembleMessage(::std::map<
                        ::webrtc::StrongAlias<::dcsctp::FSNTag, uint>,
                        ::std::pair<
                            ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>,
                            ::dcsctp::Data>> const&);

        MCNAPI uint64 EraseTo(::webrtc::StrongAlias<::dcsctp::MIDTag, uint>);

        MCNAPI
        Stream(::dcsctp::InterleavedReassemblyStreams::FullStreamId, ::dcsctp::InterleavedReassemblyStreams*, ::webrtc::StrongAlias<::dcsctp::MIDTag, uint>);

        MCNAPI uint64
            TryToAssembleMessage(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::MIDTag, uint>>);

        MCNAPI uint64 TryToAssembleMessages();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::dcsctp::InterleavedReassemblyStreams::FullStreamId, ::dcsctp::InterleavedReassemblyStreams*, ::webrtc::StrongAlias<::dcsctp::MIDTag, uint>);
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dcsctp::InterleavedReassemblyStreams::Stream&
    GetOrCreateStream(::dcsctp::InterleavedReassemblyStreams::FullStreamId const&);

    MCNAPI
    InterleavedReassemblyStreams(::std::string_view, ::std::function<void(::rtc::ArrayView<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const>, ::dcsctp::DcSctpMessage)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(::std::string_view, ::std::function<void(::rtc::ArrayView<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const>, ::dcsctp::DcSctpMessage)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
