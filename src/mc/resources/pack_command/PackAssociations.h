#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackCommand {

struct PackAssociations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc835a2;
    ::ll::UntypedStorage<8, 24> mUnkcd988a;
    // NOLINTEND

public:
    // prevent constructor by default
    PackAssociations& operator=(PackAssociations const&);
    PackAssociations(PackAssociations const&);
    PackAssociations();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackAssociations();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackCommand
