#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTPExtensionType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace webrtc { class RtpHeaderExtensionMap; }
// clang-format on

namespace webrtc {

class RtpPacket {
public:
    // RtpPacket inner types declare
    // clang-format off
    struct ExtensionInfo;
    // clang-format on

    // RtpPacket inner types define
    struct ExtensionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkff9a06;
        ::ll::UntypedStorage<1, 1> mUnkcecab5;
        ::ll::UntypedStorage<2, 2> mUnk4986b4;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExtensionInfo& operator=(ExtensionInfo const&);
        ExtensionInfo(ExtensionInfo const&);
        ExtensionInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb81bfa;
    ::ll::UntypedStorage<1, 1>  mUnk9c66f5;
    ::ll::UntypedStorage<1, 1>  mUnk54a66d;
    ::ll::UntypedStorage<2, 2>  mUnkaa527e;
    ::ll::UntypedStorage<4, 4>  mUnk790d2c;
    ::ll::UntypedStorage<4, 4>  mUnk45bd2f;
    ::ll::UntypedStorage<8, 8>  mUnkea8ad5;
    ::ll::UntypedStorage<8, 8>  mUnkb68566;
    ::ll::UntypedStorage<1, 22> mUnk1ffc18;
    ::ll::UntypedStorage<8, 24> mUnk6909e9;
    ::ll::UntypedStorage<8, 8>  mUnk5ddf48;
    ::ll::UntypedStorage<8, 24> mUnkc4d7dc;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacket();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::rtc::ArrayView<uchar> AllocateExtension(::webrtc::RTPExtensionType, uint64);

    MCAPI uchar* AllocatePayload(uint64);

    MCAPI ::rtc::ArrayView<uchar> AllocateRawExtension(int, uint64);

    MCAPI void Clear();

    MCAPI ::std::vector<uint> Csrcs() const;

    MCAPI ::rtc::ArrayView<uchar const> FindExtension(::webrtc::RTPExtensionType) const;

    MCAPI ::webrtc::RtpPacket::ExtensionInfo const* FindExtensionInfo(int) const;

    MCAPI ::webrtc::RtpPacket::ExtensionInfo& FindOrCreateExtensionInfo(int);

    MCAPI bool HasExtension(::webrtc::RTPExtensionType) const;

    MCAPI bool Parse(::rtc::CopyOnWriteBuffer);

    MCAPI bool ParseBuffer(uchar const*, uint64);

    MCAPI void PromoteToTwoByteHeaderExtension();

    MCAPI RtpPacket(::webrtc::RtpPacket const&);

    MCAPI explicit RtpPacket(::webrtc::RtpHeaderExtensionMap const*);

    MCAPI RtpPacket(::webrtc::RtpHeaderExtensionMap const*, uint64);

    MCAPI void SetCsrcs(::rtc::ArrayView<uint const>);

    MCAPI ushort SetExtensionLengthMaybeAddZeroPadding(uint64);

    MCAPI void SetMarker(bool);

    MCAPI bool SetPadding(uint64);

    MCAPI uchar* SetPayloadSize(uint64);

    MCAPI void SetPayloadType(uchar);

    MCAPI void SetSequenceNumber(ushort);

    MCAPI void SetSsrc(uint);

    MCAPI void SetTimestamp(uint);

    MCAPI uchar* WriteAt(uint64);

    MCAPI void WriteAt(uint64, uchar);

    MCAPI uchar const* data() const;

    MCAPI ::webrtc::RtpPacket& operator=(::webrtc::RtpPacket const&);

    MCAPI ~RtpPacket();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RtpPacket const&);

    MCAPI void* $ctor(::webrtc::RtpHeaderExtensionMap const*);

    MCAPI void* $ctor(::webrtc::RtpHeaderExtensionMap const*, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
