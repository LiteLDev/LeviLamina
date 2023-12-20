#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DataChannelObserver.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class NetworkSession; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DataChannelObserver; }
namespace webrtc { struct DataBuffer; }
// clang-format on

namespace NetherNet {

class MyDataChannelObserver : public ::webrtc::DataChannelObserver {
public:
    // prevent constructor by default
    MyDataChannelObserver& operator=(MyDataChannelObserver const&);
    MyDataChannelObserver(MyDataChannelObserver const&);
    MyDataChannelObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?OnStateChange@MyDataChannelObserver@NetherNet@@UEAAXXZ
    virtual void OnStateChange();

    // vIndex: 1, symbol: ?OnMessage@MyDataChannelObserver@NetherNet@@UEAAXAEBUDataBuffer@webrtc@@@Z
    virtual void OnMessage(struct webrtc::DataBuffer const&);

    // vIndex: 2, symbol: ?OnBufferedAmountChange@DataChannelObserver@webrtc@@UEAAX_K@Z
    virtual void OnBufferedAmountChange(uint64);

    // vIndex: 3, symbol: __gen_??1MyDataChannelObserver@NetherNet@@UEAA@XZ
    virtual ~MyDataChannelObserver() = default;

    // symbol:
    // ??0MyDataChannelObserver@NetherNet@@QEAA@PEAVNetworkSession@1@V?$scoped_refptr@VDataChannelInterface@webrtc@@@rtc@@@Z
    MCAPI
    MyDataChannelObserver(class NetherNet::NetworkSession*, class rtc::scoped_refptr<class webrtc::DataChannelInterface>);

    // NOLINTEND
};

}; // namespace NetherNet
