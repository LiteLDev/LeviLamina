#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

class PersonaCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk59038c;
    ::ll::UntypedStorage<8, 32> mUnk7bc79c;
    ::ll::UntypedStorage<8, 32> mUnk9038a8;
    ::ll::UntypedStorage<8, 16> mUnk25b99c;
    ::ll::UntypedStorage<8, 24> mUnk2822ed;
    ::ll::UntypedStorage<1, 1>  mUnk6b7e06;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaCategory& operator=(PersonaCategory const&);
    PersonaCategory(PersonaCategory const&);
    PersonaCategory();
};

} // namespace persona
