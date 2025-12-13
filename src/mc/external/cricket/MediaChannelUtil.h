#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Transport.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct PacketOptions; }
// clang-format on

namespace cricket {

class MediaChannelUtil {
public:
    // MediaChannelUtil inner types declare
    // clang-format off
    class TransportForMediaChannels;
    // clang-format on

    // MediaChannelUtil inner types define
    class TransportForMediaChannels : public ::webrtc::Transport {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb32755;
        ::ll::UntypedStorage<8, 8> mUnka0594a;
        ::ll::UntypedStorage<1, 1> mUnk75b3ac;
        ::ll::UntypedStorage<8, 8> mUnk81bc1f;
        ::ll::UntypedStorage<4, 4> mUnkb7bb9c;
        // NOLINTEND

    public:
        // prevent constructor by default
        TransportForMediaChannels& operator=(TransportForMediaChannels const&);
        TransportForMediaChannels(TransportForMediaChannels const&);
        TransportForMediaChannels();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 2
        virtual ~TransportForMediaChannels() /*override*/ = default;

        // vIndex: 0
        virtual bool SendRtp(::rtc::ArrayView<uchar const>, ::webrtc::PacketOptions const&) /*override*/;

        // vIndex: 1
        virtual bool SendRtcp(::rtc::ArrayView<uchar const>) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk84ff94;
    ::ll::UntypedStorage<8, 48> mUnkd1454b;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaChannelUtil& operator=(MediaChannelUtil const&);
    MediaChannelUtil(MediaChannelUtil const&);
    MediaChannelUtil();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MediaChannelUtil() = default;

    // vIndex: 1
    virtual int GetRtpSendTimeExtnId() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
