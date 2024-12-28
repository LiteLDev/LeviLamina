#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct CategoryQueryDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkf84f3d;
    ::ll::UntypedStorage<4, 4>   mUnk16ee00;
    ::ll::UntypedStorage<4, 4>   mUnk1c7aad;
    ::ll::UntypedStorage<8, 432> mUnkffbda2;
    ::ll::UntypedStorage<1, 1>   mUnkf032f9;
    // NOLINTEND

public:
    // prevent constructor by default
    CategoryQueryDocument& operator=(CategoryQueryDocument const&);
    CategoryQueryDocument(CategoryQueryDocument const&);
    CategoryQueryDocument();
};

} // namespace persona
