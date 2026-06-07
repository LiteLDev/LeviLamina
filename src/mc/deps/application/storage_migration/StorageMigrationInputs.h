#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

struct StorageMigrationInputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkacb940;
    ::ll::UntypedStorage<8, 24> mUnk9aee8b;
    ::ll::UntypedStorage<8, 24> mUnkfccab3;
    ::ll::UntypedStorage<8, 64> mUnkf0ee31;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    StorageMigrationInputs& operator=(StorageMigrationInputs const&);
    StorageMigrationInputs(StorageMigrationInputs const&);
    StorageMigrationInputs();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    StorageMigrationInputs& operator=(StorageMigrationInputs const&);
    StorageMigrationInputs();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI StorageMigrationInputs(::Bedrock::StorageMigration::StorageMigrationInputs const&);

    MCNAPI ~StorageMigrationInputs();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Bedrock::StorageMigration::StorageMigrationInputs const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
