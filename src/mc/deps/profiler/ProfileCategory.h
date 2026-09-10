#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ProfileCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc16f78;
    ::ll::UntypedStorage<8, 32> mUnkf11df5;
    ::ll::UntypedStorage<4, 4>  mUnka1683b;
    ::ll::UntypedStorage<1, 1>  mUnkad8ed1;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileCategory& operator=(ProfileCategory const&);
    ProfileCategory(ProfileCategory const&);
    ProfileCategory();
};

} // namespace Core::Profile
