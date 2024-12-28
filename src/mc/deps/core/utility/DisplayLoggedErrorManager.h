#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class DisplayLoggedErrorManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk787867;
    ::ll::UntypedStorage<8, 24> mUnk9c3ab5;
    ::ll::UntypedStorage<8, 32> mUnk306e9c;
    ::ll::UntypedStorage<1, 1>  mUnkc38836;
    ::ll::UntypedStorage<8, 80> mUnkf3e4dd;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayLoggedErrorManager& operator=(DisplayLoggedErrorManager const&);
    DisplayLoggedErrorManager(DisplayLoggedErrorManager const&);
    DisplayLoggedErrorManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DisplayLoggedErrorManager() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
