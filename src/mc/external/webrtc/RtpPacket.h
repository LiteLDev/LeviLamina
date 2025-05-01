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
    MCNAPI ::rtc::ArrayView<uchar> AllocateExtension(::webrtc::RTPExtensionType, uint64);

    MCNAPI uchar* AllocatePayload(uint64);

    MCNAPI ::rtc::ArrayView<uchar> AllocateRawExtension(int, uint64);

    MCNAPI void Clear();

    MCNAPI ::std::vector<uint> Csrcs() const;

    MCNAPI ::rtc::ArrayView<uchar const> FindExtension(::webrtc::RTPExtensionType) const;

    MCNAPI ::webrtc::RtpPacket::ExtensionInfo const* FindExtensionInfo(int) const;

    MCNAPI ::webrtc::RtpPacket::ExtensionInfo& FindOrCreateExtensionInfo(int);

    MCNAPI bool HasExtension(::webrtc::RTPExtensionType) const;

    MCNAPI bool Parse(::rtc::CopyOnWriteBuffer);

    MCNAPI bool ParseBuffer(uchar const*, uint64);

    MCNAPI void PromoteToTwoByteHeaderExtension();

    MCNAPI RtpPacket(::webrtc::RtpPacket const&);

    MCNAPI explicit RtpPacket(::webrtc::RtpHeaderExtensionMap const*);

    MCNAPI RtpPacket(::webrtc::RtpHeaderExtensionMap const*, uint64);

    MCNAPI void SetCsrcs(::rtc::ArrayView<uint const>);

    MCNAPI ushort SetExtensionLengthMaybeAddZeroPadding(uint64);

    MCNAPI void SetMarker(bool);

    MCNAPI bool SetPadding(uint64);

    MCNAPI uchar* SetPayloadSize(uint64);

    MCNAPI void SetPayloadType(uchar);

    MCNAPI void SetSequenceNumber(ushort);

    MCNAPI void SetSsrc(uint);

    MCNAPI void SetTimestamp(uint);

    MCNAPI uchar* WriteAt(uint64);

    MCNAPI void WriteAt(uint64, uchar);

    MCNAPI uchar const* data() const;

    MCNAPI ::webrtc::RtpPacket& operator=(::webrtc::RtpPacket const&);

    MCNAPI ~RtpPacket();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpPacket const&);

    MCNAPI void* $ctor(::webrtc::RtpHeaderExtensionMap const*);

    MCNAPI void* $ctor(::webrtc::RtpHeaderExtensionMap const*, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
