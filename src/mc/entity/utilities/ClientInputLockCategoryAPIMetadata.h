#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/enums/ClientInputLockCategory.h"

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
    ClientInputLockCategoryAPIMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientInputLockCategoryAPIMetadata(::ClientInputLockCategoryAPIMetadata const&);

    MCNAPI ~ClientInputLockCategoryAPIMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::array<::ClientInputLockCategoryAPIMetadata, 11> const& getAllMetadata();

    MCNAPI static ::std::vector<::std::string> getCommandFacingNames();

    MCNAPI static ::std::optional<::ClientInputLockCategoryAPIMetadata> getMetadata(::ClientInputLockCategory category);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientInputLockCategoryAPIMetadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
