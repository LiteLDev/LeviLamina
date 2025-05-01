#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/EcnMarking.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace rtc {

class ReceivedPacket {
public:
    // ReceivedPacket inner types define
    enum class DecryptionInfo : int {
        KNotDecrypted  = 0,
        KDtlsDecrypted = 1,
        KSrtpEncrypted = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk397e9a;
    ::ll::UntypedStorage<8, 16> mUnk1f04f3;
    ::ll::UntypedStorage<8, 8>  mUnk1afa82;
    ::ll::UntypedStorage<4, 4>  mUnkb85533;
    ::ll::UntypedStorage<4, 4>  mUnk50706b;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceivedPacket& operator=(ReceivedPacket const&);
    ReceivedPacket(ReceivedPacket const&);
    ReceivedPacket();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::ReceivedPacket CopyAndSet(::rtc::ReceivedPacket::DecryptionInfo) const;

    MCNAPI ReceivedPacket(
        ::rtc::ArrayView<uchar const>,
        ::rtc::SocketAddress const&,
        ::std::optional<::webrtc::Timestamp>,
        ::rtc::EcnMarking,
        ::rtc::ReceivedPacket::DecryptionInfo
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::rtc::ReceivedPacket CreateFromLegacy(uchar const*, uint64, int64, ::rtc::SocketAddress const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::ArrayView<uchar const>,
        ::rtc::SocketAddress const&,
        ::std::optional<::webrtc::Timestamp>,
        ::rtc::EcnMarking,
        ::rtc::ReceivedPacket::DecryptionInfo
    );
    // NOLINTEND
};

} // namespace rtc
