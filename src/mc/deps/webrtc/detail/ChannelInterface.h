#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class ChannelInterface {
public:
    // prevent constructor by default
    ChannelInterface& operator=(ChannelInterface const&);
    ChannelInterface(ChannelInterface const&);
    ChannelInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChannelInterface@cricket@@UEAA@XZ
    virtual ~ChannelInterface() = default;

    // NOLINTEND
};

}; // namespace cricket
