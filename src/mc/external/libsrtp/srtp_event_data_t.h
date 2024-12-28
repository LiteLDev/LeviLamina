#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_event_data_t {
public:
    // prevent constructor by default
    srtp_event_data_t& operator=(srtp_event_data_t const&);
    srtp_event_data_t(srtp_event_data_t const&);
    srtp_event_data_t();
};
