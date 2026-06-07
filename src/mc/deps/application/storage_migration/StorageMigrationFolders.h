#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

struct StorageMigrationFolders {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb88184;
    ::ll::UntypedStorage<8, 32> mUnk2a6b0b;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    StorageMigrationFolders& operator=(StorageMigrationFolders const&);
    StorageMigrationFolders(StorageMigrationFolders const&);
    StorageMigrationFolders();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    StorageMigrationFolders& operator=(StorageMigrationFolders const&);
    StorageMigrationFolders();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI StorageMigrationFolders(::Bedrock::StorageMigration::StorageMigrationFolders const&);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Bedrock::StorageMigration::StorageMigrationFolders const&);
#endif
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
