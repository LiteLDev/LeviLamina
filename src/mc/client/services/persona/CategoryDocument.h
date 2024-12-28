#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct CategoryDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk845714;
    ::ll::UntypedStorage<8, 32> mUnk3de1d9;
    ::ll::UntypedStorage<8, 32> mUnkc31f48;
    ::ll::UntypedStorage<8, 24> mUnk27930d;
    ::ll::UntypedStorage<8, 24> mUnk39563f;
    ::ll::UntypedStorage<1, 1>  mUnk9e8ce5;
    // NOLINTEND

public:
    // prevent constructor by default
    CategoryDocument& operator=(CategoryDocument const&);
    CategoryDocument(CategoryDocument const&);
    CategoryDocument();
};

} // namespace persona
