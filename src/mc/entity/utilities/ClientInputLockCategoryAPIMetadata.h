#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientInputLockCategoryAPIMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk6f9dc3;
    ::ll::UntypedStorage<8, 24> mUnk604d0b;
    ::ll::UntypedStorage<8, 32> mUnkbed38e;
    ::ll::UntypedStorage<8, 32> mUnked24bf;
    ::ll::UntypedStorage<8, 32> mUnkcf13aa;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputLockCategoryAPIMetadata& operator=(ClientInputLockCategoryAPIMetadata const&);
    ClientInputLockCategoryAPIMetadata(ClientInputLockCategoryAPIMetadata const&);
    ClientInputLockCategoryAPIMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientInputLockCategoryAPIMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::array<::ClientInputLockCategoryAPIMetadata, 11> const& getAllMetadata();

    MCNAPI static ::std::vector<::std::string> getCommandFacingNames();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
