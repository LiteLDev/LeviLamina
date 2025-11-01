#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_event_data_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1a3311;
    ::ll::UntypedStorage<4, 4> mUnkcfd5e3;
    ::ll::UntypedStorage<4, 4> mUnk59ffdb;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_event_data_t& operator=(srtp_event_data_t const&);
    srtp_event_data_t(srtp_event_data_t const&);
    srtp_event_data_t();

};
