#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AtomicClientEntity {

class ComponentRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8fef4c;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentRegistry& operator=(ComponentRegistry const&);
    ComponentRegistry(ComponentRegistry const&);
    ComponentRegistry();
};

} // namespace AtomicClientEntity
