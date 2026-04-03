#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Url {

struct Components {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk765e7d;
    ::ll::UntypedStorage<8, 32> mUnkd60fb8;
    ::ll::UntypedStorage<8, 32> mUnke6f14c;
    ::ll::UntypedStorage<8, 32> mUnk27a341;
    ::ll::UntypedStorage<8, 32> mUnk93f566;
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
