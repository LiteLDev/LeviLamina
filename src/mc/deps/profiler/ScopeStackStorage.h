#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profile {

class ScopeStackStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk1b8b6b;
    ::ll::UntypedStorage<1, 1> mUnkf6d55c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeStackStorage& operator=(ScopeStackStorage const&);
    ScopeStackStorage(ScopeStackStorage const&);
    ScopeStackStorage();
};

} // namespace Bedrock::Profile
