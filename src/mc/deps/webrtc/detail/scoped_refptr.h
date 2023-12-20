#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

template <typename T0>
class scoped_refptr {
public:
    // prevent constructor by default
    scoped_refptr& operator=(scoped_refptr const&);
    scoped_refptr(scoped_refptr const&);
    scoped_refptr();
};

}; // namespace rtc
