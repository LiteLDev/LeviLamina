#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/Transport.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct PacketOptions; }
// clang-format on

namespace webrtc {

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
        ::ll::UntypedStorage<8, 8> mUnk6a23b6;
        ::ll::UntypedStorage<8, 8> mUnkaa5e16;
        ::ll::UntypedStorage<1, 1> mUnk26bb0d;
        ::ll::UntypedStorage<8, 8> mUnk221863;
        ::ll::UntypedStorage<4, 4> mUnkebed19;
        // NOLINTEND

    public:
        // prevent constructor by default
        TransportForMediaChannels& operator=(TransportForMediaChannels const&);
        TransportForMediaChannels(TransportForMediaChannels const&);
        TransportForMediaChannels();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~TransportForMediaChannels() /*override*/ = default;

        virtual bool
        SendRtp(::webrtc::ArrayView<uchar const, 18446744073709546905>, ::webrtc::PacketOptions const&) /*override*/;

        virtual bool
        SendRtcp(::webrtc::ArrayView<uchar const, 18446744073709546905>, ::webrtc::PacketOptions const&) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk7fdc61;
    ::ll::UntypedStorage<8, 48> mUnkf64d38;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaChannelUtil& operator=(MediaChannelUtil const&);
    MediaChannelUtil(MediaChannelUtil const&);
    MediaChannelUtil();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MediaChannelUtil() = default;

    virtual int GetRtpSendTimeExtnId() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
