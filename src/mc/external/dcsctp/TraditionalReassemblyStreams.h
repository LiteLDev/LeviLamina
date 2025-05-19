#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/UnwrappedSequenceNumber.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class SSNTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
// clang-format on

namespace dcsctp {

class TraditionalReassemblyStreams {
public:
    // TraditionalReassemblyStreams inner types declare
    // clang-format off
    class OrderedStream;
    struct StreamBase;
    class UnorderedStream;
    // clang-format on

    // TraditionalReassemblyStreams inner types define
    class OrderedStream {
    public:
        // prevent constructor by default
        OrderedStream();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int
            Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::dcsctp::Data);

        MCNAPI uint64 EraseTo(::webrtc::StrongAlias<::dcsctp::SSNTag, ushort>);

        MCNAPI OrderedStream(::dcsctp::TraditionalReassemblyStreams*, ::webrtc::StrongAlias<::dcsctp::SSNTag, ushort>);

        MCNAPI uint64 TryToAssembleMessage();

        MCNAPI uint64 TryToAssembleMessages();

        MCNAPI uint64 TryToAssembleMessagesFastpath(
            ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::SSNTag, ushort>>,
            ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>,
            ::dcsctp::Data
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::dcsctp::TraditionalReassemblyStreams*, ::webrtc::StrongAlias<::dcsctp::SSNTag, ushort>);
        // NOLINTEND
    };

    struct StreamBase {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI uint64 AssembleMessage(
            ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>,
            ::dcsctp::Data
        );

        MCNAPI uint64 AssembleMessage(
            ::std::_Tree_iterator<::std::_Tree_val<::std::_Tree_simple_types<::std::pair<
                ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const,
                ::dcsctp::Data>>>>,
            ::std::_Tree_iterator<::std::_Tree_val<::std::_Tree_simple_types<::std::pair<
                ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const,
                ::dcsctp::Data>>>>
        );
        // NOLINTEND
    };

    class UnorderedStream {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int
            Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::dcsctp::Data);

        MCNAPI uint64 EraseTo(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

        MCNAPI uint64 TryToAssembleMessage(
            ::std::_Tree_iterator<::std::_Tree_val<::std::_Tree_simple_types<::std::pair<
                ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const,
                ::dcsctp::Data>>>>
        );
        // NOLINTEND
    };

public:
    // prevent constructor by default
    TraditionalReassemblyStreams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TraditionalReassemblyStreams(
        ::std::string_view,
        ::std::function<void(
            ::rtc::ArrayView<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const>,
            ::dcsctp::DcSctpMessage
        )>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string_view,
        ::std::function<void(
            ::rtc::ArrayView<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> const>,
            ::dcsctp::DcSctpMessage
        )>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
