#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

class PersonaSubCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk74cf9e;
    ::ll::UntypedStorage<8, 32> mUnk3c16f9;
    ::ll::UntypedStorage<8, 32> mUnk99807b;
    ::ll::UntypedStorage<8, 32> mUnkfd81a6;
    ::ll::UntypedStorage<8, 16> mUnk11d706;
    ::ll::UntypedStorage<1, 1>  mUnke520f0;
    ::ll::UntypedStorage<1, 1>  mUnkc45033;
    ::ll::UntypedStorage<1, 1>  mUnk29bf9a;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaSubCategory& operator=(PersonaSubCategory const&);
    PersonaSubCategory(PersonaSubCategory const&);
    PersonaSubCategory();
};

} // namespace persona
