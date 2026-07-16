#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/EcnMarking.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class ReceivedIpPacket {
public:
    // ReceivedIpPacket inner types define
    enum class DecryptionInfo : int {
        KNotDecrypted  = 0,
        KDtlsDecrypted = 1,
        KSrtpEncrypted = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7d5ad5;
    ::ll::UntypedStorage<8, 16> mUnkb88101;
    ::ll::UntypedStorage<8, 8>  mUnk7504b1;
    ::ll::UntypedStorage<4, 4>  mUnk765430;
    ::ll::UntypedStorage<4, 4>  mUnkdc213c;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceivedIpPacket& operator=(ReceivedIpPacket const&);
    ReceivedIpPacket(ReceivedIpPacket const&);
    ReceivedIpPacket();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::ReceivedIpPacket CopyAndSet(::webrtc::ReceivedIpPacket::DecryptionInfo decryption_info) const;

    MCNAPI ReceivedIpPacket(
        ::webrtc::ArrayView<uchar const, 18446744073709546905> payload,
        ::webrtc::SocketAddress const&                         source_address,
        ::std::optional<::webrtc::Timestamp>                   arrival_time,
        ::webrtc::EcnMarking                                   ecn,
        ::webrtc::ReceivedIpPacket::DecryptionInfo             decryption
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::ReceivedIpPacket CreateFromLegacy(
        uchar const*                   data,
        uint64                         size,
        int64                          packet_time_us,
        ::webrtc::SocketAddress const& source_address
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::ArrayView<uchar const, 18446744073709546905> payload,
        ::webrtc::SocketAddress const&                         source_address,
        ::std::optional<::webrtc::Timestamp>                   arrival_time,
        ::webrtc::EcnMarking                                   ecn,
        ::webrtc::ReceivedIpPacket::DecryptionInfo             decryption
    );
    // NOLINTEND
};

} // namespace webrtc
