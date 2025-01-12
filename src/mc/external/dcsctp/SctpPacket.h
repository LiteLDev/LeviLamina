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
        // member functions
        // NOLINTBEGIN
        MCAPI ::dcsctp::SctpPacket::Builder& Add(::dcsctp::Chunk const&);

        MCAPI ::std::vector<uchar> Build(bool);

        MCAPI Builder(::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::dcsctp::DcSctpOptions const&);

        MCAPI uint64 bytes_remaining() const;

        MCAPI ~Builder();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::dcsctp::DcSctpOptions const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct ChunkDescriptor {};

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SctpPacket();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::SctpPacket>
    Parse(::rtc::ArrayView<uchar const>, ::dcsctp::DcSctpOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
