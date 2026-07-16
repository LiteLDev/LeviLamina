#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/external/webrtc/DataChannelObserver.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DataBuffer; }
// clang-format on

namespace NetherNet {

class PacketQueue : public ::NetherNet::ContextProxy {
public:
    // PacketQueue inner types declare
    // clang-format off
    class DataChannel;
    // clang-format on

    // PacketQueue inner types define
    class DataChannel : public ::NetherNet::ContextProxy, public ::webrtc::DataChannelObserver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkd0c200;
        ::ll::UntypedStorage<8, 64> mUnk7022e3;
        ::ll::UntypedStorage<8, 40> mUnk8ff5a6;
        ::ll::UntypedStorage<4, 4>  mUnkea7403;
        ::ll::UntypedStorage<8, 8>  mUnk6efd8f;
        ::ll::UntypedStorage<8, 8>  mUnk6bd75c;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataChannel& operator=(DataChannel const&);
        DataChannel(DataChannel const&);
        DataChannel();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~DataChannel() /*override*/ = default;

        virtual void OnStateChange() /*override*/;

        virtual void OnMessage(::webrtc::DataBuffer const&) /*override*/;

        virtual void OnBufferedAmountChange(uint64) /*override*/;

        virtual bool IsOkToCallOnTheNetworkThread() /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkc5324e;
    ::ll::UntypedStorage<8, 120> mUnkd1700a;
    ::ll::UntypedStorage<8, 64>  mUnk9b0d07;
    ::ll::UntypedStorage<8, 24>  mUnk236963;
    ::ll::UntypedStorage<8, 248> mUnkb28c4c;
    ::ll::UntypedStorage<8, 248> mUnk330e14;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketQueue& operator=(PacketQueue const&);
    PacketQueue(PacketQueue const&);
    PacketQueue();
};

} // namespace NetherNet
