#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

struct StorageMigrationFiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1d307f;
    ::ll::UntypedStorage<8, 32> mUnkf7917d;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    StorageMigrationFiles& operator=(StorageMigrationFiles const&);
    StorageMigrationFiles(StorageMigrationFiles const&);
    StorageMigrationFiles();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    StorageMigrationFiles& operator=(StorageMigrationFiles const&);
    StorageMigrationFiles();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI StorageMigrationFiles(::Bedrock::StorageMigration::StorageMigrationFiles const&);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Bedrock::StorageMigration::StorageMigrationFiles const&);
#endif
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
