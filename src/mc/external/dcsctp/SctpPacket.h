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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk925f93;
        ::ll::UntypedStorage<2, 2>  mUnk5b8bbd;
        ::ll::UntypedStorage<2, 2>  mUnk16be9c;
        ::ll::UntypedStorage<8, 8>  mUnk24297c;
        ::ll::UntypedStorage<8, 24> mUnk5d4223;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::dcsctp::SctpPacket::Builder& Add(::dcsctp::Chunk const& chunk);

        MCNAPI ::std::vector<uchar> Build(bool write_checksum);

        MCNAPI Builder(
            ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint> verification_tag,
            ::dcsctp::DcSctpOptions const&                            options
        );

        MCNAPI uint64 bytes_remaining() const;

        MCNAPI ~Builder();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint> verification_tag,
            ::dcsctp::DcSctpOptions const&                            options
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ChunkDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkfc7a17;
        ::ll::UntypedStorage<1, 1>  mUnk5a7a37;
        ::ll::UntypedStorage<8, 16> mUnk1d4891;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChunkDescriptor& operator=(ChunkDescriptor const&);
        ChunkDescriptor(ChunkDescriptor const&);
        ChunkDescriptor();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkd09989;
    ::ll::UntypedStorage<8, 24> mUnk5ca691;
    ::ll::UntypedStorage<8, 24> mUnk44c1e0;
    // NOLINTEND

public:
    // prevent constructor by default
    SctpPacket& operator=(SctpPacket const&);
    SctpPacket(SctpPacket const&);
    SctpPacket();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::SctpPacket>
    Parse(::rtc::ArrayView<uchar const> data, ::dcsctp::DcSctpOptions const& options);
    // NOLINTEND
};

} // namespace dcsctp
