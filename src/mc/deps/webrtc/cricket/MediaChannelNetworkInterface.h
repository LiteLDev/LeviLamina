#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class MediaChannelNetworkInterface {
public:
    // MediaChannelNetworkInterface inner types define
    enum class SocketType {};

public:
    // prevent constructor by default
    MediaChannelNetworkInterface& operator=(MediaChannelNetworkInterface const&);
    MediaChannelNetworkInterface(MediaChannelNetworkInterface const&);
    MediaChannelNetworkInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3, symbol: ??1MediaChannelNetworkInterface@cricket@@UEAA@XZ
    virtual ~MediaChannelNetworkInterface();

    // NOLINTEND
};

}; // namespace cricket
