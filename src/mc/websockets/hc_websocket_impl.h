#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct hc_websocket_impl {
public:
    // prevent constructor by default
    hc_websocket_impl& operator=(hc_websocket_impl const&);
    hc_websocket_impl(hc_websocket_impl const&);
    hc_websocket_impl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1hc_websocket_impl@httpclient@xbox@@UEAA@XZ
    virtual ~hc_websocket_impl();

    // NOLINTEND
};

}; // namespace xbox::httpclient
