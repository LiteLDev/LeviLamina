#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct hc_websocket_impl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XBOX_HTTPCLIENT_HC_WEBSOCKET_IMPL
public:
    hc_websocket_impl& operator=(hc_websocket_impl const&) = delete;
    hc_websocket_impl(hc_websocket_impl const&)            = delete;
    hc_websocket_impl()                                    = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_XBOX_HTTPCLIENT_HC_WEBSOCKET_IMPL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~hc_websocket_impl();
#endif
};

}; // namespace xbox::httpclient
