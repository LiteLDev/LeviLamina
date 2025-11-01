#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityOptionalOwnerRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1833e5;
    ::ll::UntypedStorage<8, 24> mUnk276e9c;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityOptionalOwnerRef& operator=(EntityOptionalOwnerRef const&);
    EntityOptionalOwnerRef(EntityOptionalOwnerRef const&);
    EntityOptionalOwnerRef();

};
