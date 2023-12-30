#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

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
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();

    public:
        // NOLINTBEGIN
        // symbol: ?Add@Builder@SctpPacket@dcsctp@@QEAAAEAV123@AEBVChunk@3@@Z
        MCAPI class dcsctp::SctpPacket::Builder& Add(class dcsctp::Chunk const&);

        // symbol: ?Build@Builder@SctpPacket@dcsctp@@QEAA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
        MCAPI std::vector<uchar> Build();

        // symbol:
        // ??0Builder@SctpPacket@dcsctp@@QEAA@V?$StrongAlias@VVerificationTagTag@dcsctp@@I@webrtc@@AEBUDcSctpOptions@2@@Z
        MCAPI
        Builder(class webrtc::StrongAlias<class dcsctp::VerificationTagTag, uint>, struct dcsctp::DcSctpOptions const&);

        // symbol: ?bytes_remaining@Builder@SctpPacket@dcsctp@@QEBA_KXZ
        MCAPI uint64 bytes_remaining() const;

        // symbol: ??1Builder@SctpPacket@dcsctp@@QEAA@XZ
        MCAPI ~Builder();

        // NOLINTEND
    };

    struct ChunkDescriptor {
    public:
        // prevent constructor by default
        ChunkDescriptor& operator=(ChunkDescriptor const&);
        ChunkDescriptor(ChunkDescriptor const&);
        ChunkDescriptor();
    };

public:
    // prevent constructor by default
    SctpPacket& operator=(SctpPacket const&);
    SctpPacket(SctpPacket const&);
    SctpPacket();

public:
    // NOLINTBEGIN
    // symbol: ??1SctpPacket@dcsctp@@QEAA@XZ
    MCAPI ~SctpPacket();

    // symbol: ?Parse@SctpPacket@dcsctp@@SA?AV?$optional@VSctpPacket@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@_N@Z
    MCAPI static std::optional<class dcsctp::SctpPacket> Parse(class rtc::ArrayView<uchar const, -4711>, bool);

    // NOLINTEND
};

}; // namespace dcsctp
