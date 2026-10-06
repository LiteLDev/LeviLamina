#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct MappedAddressRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mInternalAddress;
    ::ll::TypedStorage<2, 2, ushort>                          mInternalPortMin;
    ::ll::TypedStorage<2, 2, ushort>                          mInternalPortMax;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mExternalAddress;
    ::ll::TypedStorage<4, 4, int>                             mExternalPortOffset;
    // NOLINTEND
};

} // namespace NetherNet
