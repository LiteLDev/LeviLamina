#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct VersionConflict {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk4bdd5f;
    ::ll::UntypedStorage<8, 96> mUnkbb2d45;
    ::ll::UntypedStorage<8, 96> mUnk10a861;
    ::ll::UntypedStorage<8, 96> mUnkaf947b;
    ::ll::UntypedStorage<8, 96> mUnk8c70b9;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionConflict& operator=(VersionConflict const&);
    VersionConflict(VersionConflict const&);
    VersionConflict();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VersionConflict();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
