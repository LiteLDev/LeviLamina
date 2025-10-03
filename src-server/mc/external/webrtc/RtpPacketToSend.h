#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacket.h"
#include "mc/external/webrtc/RtpPacketMediaType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpHeaderExtensionMap; }
// clang-format on

namespace webrtc {

class RtpPacketToSend : public ::webrtc::RtpPacket {
public:
    // RtpPacketToSend inner types define
    enum class OriginalType : int {
        KAudio = 0,
        KVideo = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk74698b;
    ::ll::UntypedStorage<8, 16> mUnk48c0c4;
    ::ll::UntypedStorage<4, 8>  mUnke1841f;
    ::ll::UntypedStorage<4, 8>  mUnkf4631f;
    ::ll::UntypedStorage<8, 16> mUnk5e4b65;
    ::ll::UntypedStorage<1, 1>  mUnk9b7691;
    ::ll::UntypedStorage<2, 4>  mUnk1d20f7;
    ::ll::UntypedStorage<8, 8>  mUnk35704f;
    ::ll::UntypedStorage<1, 1>  mUnk52ebe4;
    ::ll::UntypedStorage<1, 1>  mUnkf2cc7e;
    ::ll::UntypedStorage<1, 1>  mUnk27f54a;
    ::ll::UntypedStorage<1, 1>  mUnka548b2;
    ::ll::UntypedStorage<8, 16> mUnk3b3796;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketToSend();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpPacketToSend(::webrtc::RtpPacketToSend const&);

    MCNAPI explicit RtpPacketToSend(::webrtc::RtpHeaderExtensionMap const* extensions);

    MCNAPI RtpPacketToSend(::webrtc::RtpHeaderExtensionMap const* extensions, uint64 capacity);

    MCNAPI ::webrtc::RtpPacketToSend& operator=(::webrtc::RtpPacketToSend const&);

    MCNAPI void set_packet_type(::webrtc::RtpPacketMediaType type);

    MCNAPI ~RtpPacketToSend();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpPacketToSend const&);

    MCNAPI void* $ctor(::webrtc::RtpHeaderExtensionMap const* extensions);

    MCNAPI void* $ctor(::webrtc::RtpHeaderExtensionMap const* extensions, uint64 capacity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
