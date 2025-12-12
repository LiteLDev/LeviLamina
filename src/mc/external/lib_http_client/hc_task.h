#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class hc_task : public ::std::enable_shared_from_this<::xbox::httpclient::hc_task> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~hc_task() = default;
    // NOLINTEND
};

} // namespace xbox::httpclient
