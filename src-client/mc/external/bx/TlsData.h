#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

class TlsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 64, uchar[64]> m_internal;
    // NOLINTEND
};

} // namespace bx
