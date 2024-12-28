#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sigslot {

class _opaque_connection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkbbe12d;
    ::ll::UntypedStorage<8, 8>  mUnkfb41a1;
    ::ll::UntypedStorage<1, 24> mUnk6b3d43;
    // NOLINTEND

public:
    // prevent constructor by default
    _opaque_connection& operator=(_opaque_connection const&);
    _opaque_connection(_opaque_connection const&);
    _opaque_connection();
};

} // namespace sigslot
