#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
namespace Core { class StorageAreaStateListener; }
// clang-format on

namespace Core {

class StorageAreaState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk26e6b4;
    ::ll::UntypedStorage<8, 32> mUnk94aba7;
    ::ll::UntypedStorage<1, 1>  mUnk3f48e4;
    ::ll::UntypedStorage<1, 1>  mUnk8adcca;
    ::ll::UntypedStorage<1, 1>  mUnkd72f6a;
    ::ll::UntypedStorage<1, 1>  mUnk628078;
    ::ll::UntypedStorage<8, 24> mUnk665856;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageAreaState& operator=(StorageAreaState const&);
    StorageAreaState(StorageAreaState const&);
    StorageAreaState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StorageAreaState(::Core::PathView storageAreaRootPath);

#ifdef LL_PLAT_C
    MCNAPI void addListener(::Core::StorageAreaStateListener* l);
#endif

    MCNAPI void checkUserStorage(
        ::std::shared_ptr<::Core::FileStorageArea> const& fileStorageArea,
        uint64                                            freeSpace,
        uint64                                            usedSpace,
        uint64                                            totalCapacity,
        bool                                              canExtendSize
    );

#ifdef LL_PLAT_C
    MCNAPI void notifyCriticalDiskError(::Core::LevelStorageState const& errorCode);
#endif

    MCNAPI ~StorageAreaState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::PathView storageAreaRootPath);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
