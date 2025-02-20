#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientInputLockCategoryAPIMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk6f9dc3;
    ::ll::UntypedStorage<8, 24> mUnk604d0b;
    ::ll::UntypedStorage<8, 32> mUnk915cd8;
    ::ll::UntypedStorage<8, 32> mUnk324092;
    ::ll::UntypedStorage<8, 32> mUnk24908a;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputLockCategoryAPIMetadata& operator=(ClientInputLockCategoryAPIMetadata const&);
    ClientInputLockCategoryAPIMetadata(ClientInputLockCategoryAPIMetadata const&);
    ClientInputLockCategoryAPIMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ClientInputLockCategoryAPIMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::array<::ClientInputLockCategoryAPIMetadata, 11> const& getAllMetadata();

    MCAPI static ::std::vector<::std::string> getCommandFacingNames();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
