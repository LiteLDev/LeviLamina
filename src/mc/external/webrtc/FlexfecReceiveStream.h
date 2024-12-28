#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ReceiveStreamInterface.h"
#include "mc/external/webrtc/RtcpMode.h"
#include "mc/external/webrtc/RtpPacketSinkInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ReceiveStatistics; }
// clang-format on

namespace webrtc {

class FlexfecReceiveStream : public ::webrtc::RtpPacketSinkInterface, public ::webrtc::ReceiveStreamInterface {
public:
    // FlexfecReceiveStream inner types declare
    // clang-format off
    struct Config;
    // clang-format on

    // FlexfecReceiveStream inner types define
    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk9478dd;
        ::ll::UntypedStorage<4, 8>  mUnk5894a5;
        ::ll::UntypedStorage<8, 24> mUnkac5132;
        ::ll::UntypedStorage<4, 4>  mUnk1510c6;
        ::ll::UntypedStorage<8, 8>  mUnk137f72;
        // NOLINTEND

    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

public:
    // prevent constructor by default
    FlexfecReceiveStream& operator=(FlexfecReceiveStream const&);
    FlexfecReceiveStream(FlexfecReceiveStream const&);
    FlexfecReceiveStream();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlexfecReceiveStream() /*override*/;

    // vIndex: 2
    virtual void SetRtcpMode(::webrtc::RtcpMode) = 0;

    // vIndex: 3
    virtual void SetPayloadType(int) = 0;

    // vIndex: 4
    virtual int payload_type() const = 0;

    // vIndex: 5
    virtual ::webrtc::ReceiveStatistics const* GetStats() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
