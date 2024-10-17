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
    // vIndex: 0
    virtual ~hc_websocket_impl();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace xbox::httpclient
