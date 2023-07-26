#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct hc_websocket_impl {

public:
    // prevent constructor by default
    hc_websocket_impl& operator=(hc_websocket_impl const&) = delete;
    hc_websocket_impl(hc_websocket_impl const&)            = delete;
    hc_websocket_impl()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_XBOX_HTTPCLIENT_HC_WEBSOCKET_IMPL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~hc_websocket_impl(); // NOLINT
#endif
};

}; // namespace xbox::httpclient
