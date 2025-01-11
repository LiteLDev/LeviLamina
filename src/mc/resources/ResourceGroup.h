#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/NonCopyable.h"

class ResourceGroup : public ::Bedrock::NonCopyable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk67338e;
    ::ll::UntypedStorage<8, 24> mUnk696ad3;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceGroup& operator=(ResourceGroup const&);
    ResourceGroup(ResourceGroup const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourceGroup();

    MCAPI ~ResourceGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
