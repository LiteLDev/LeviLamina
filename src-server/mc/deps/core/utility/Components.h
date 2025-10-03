#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Url {

struct Components {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk71620b;
    ::ll::UntypedStorage<8, 32> mUnk6cf9aa;
    ::ll::UntypedStorage<8, 32> mUnk561d59;
    ::ll::UntypedStorage<8, 32> mUnkd1c11d;
    ::ll::UntypedStorage<8, 32> mUnk4448d1;
    // NOLINTEND

public:
    // prevent constructor by default
    Components& operator=(Components const&);
    Components(Components const&);
    Components();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Components();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Util::Url
