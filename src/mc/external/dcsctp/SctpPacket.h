#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Chunk; }
namespace dcsctp { class VerificationTagTag; }
namespace dcsctp { struct DcSctpOptions; }
// clang-format on

namespace dcsctp {

class SctpPacket {
public:
    // SctpPacket inner types declare
    // clang-format off
    class Builder;
    struct ChunkDescriptor;
    // clang-format on

    // SctpPacket inner types define
    class Builder {
    public:
        // prevent constructor by default
        Builder();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::dcsctp::SctpPacket::Builder& Add(::dcsctp::Chunk const&);

        MCNAPI ::std::vector<uchar> Build(bool);

        MCNAPI Builder(::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::dcsctp::DcSctpOptions const&);

        MCNAPI uint64 bytes_remaining() const;

        MCNAPI ~Builder();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::dcsctp::DcSctpOptions const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ChunkDescriptor {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SctpPacket();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::SctpPacket>
    Parse(::rtc::ArrayView<uchar const>, ::dcsctp::DcSctpOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
