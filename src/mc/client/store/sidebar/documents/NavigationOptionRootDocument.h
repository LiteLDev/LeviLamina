#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sidebar {

struct NavigationOptionRootDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk254c90;
    ::ll::UntypedStorage<8, 32> mUnk7919cb;
    ::ll::UntypedStorage<8, 24> mUnk41a687;
    ::ll::UntypedStorage<8, 16> mUnk88652f;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationOptionRootDocument& operator=(NavigationOptionRootDocument const&);
    NavigationOptionRootDocument(NavigationOptionRootDocument const&);
    NavigationOptionRootDocument();
};

} // namespace sidebar
