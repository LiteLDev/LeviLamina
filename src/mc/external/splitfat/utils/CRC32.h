#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC32 {
public:
    // prevent constructor by default
    CRC32& operator=(CRC32 const&);
    CRC32(CRC32 const&);
    CRC32();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<uint const[]> table();
    // NOLINTEND
};

} // namespace SFAT
