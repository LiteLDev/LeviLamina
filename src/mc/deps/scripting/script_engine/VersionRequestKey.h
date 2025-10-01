#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct VersionRequestKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk392781;
    ::ll::UntypedStorage<8, 32> mUnkef6151;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRequestKey& operator=(VersionRequestKey const&);
    VersionRequestKey(VersionRequestKey const&);
    VersionRequestKey();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VersionRequestKey();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
