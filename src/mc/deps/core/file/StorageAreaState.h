#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class StorageAreaStateListener; }
// clang-format on

namespace Core {

class StorageAreaState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk26e6b4;
    ::ll::UntypedStorage<8, 32> mUnk380d66;
    ::ll::UntypedStorage<1, 1>  mUnk3f48e4;
    ::ll::UntypedStorage<1, 1>  mUnk8adcca;
    ::ll::UntypedStorage<1, 1>  mUnkd72f6a;
    ::ll::UntypedStorage<1, 1>  mUnk628078;
    ::ll::UntypedStorage<8, 24> mUnk844666;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageAreaState& operator=(StorageAreaState const&);
    StorageAreaState(StorageAreaState const&);
    StorageAreaState();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StorageAreaState(::Core::Path storageAreaRootPath);

    MCAPI void addListener(::Core::StorageAreaStateListener* l);

    MCAPI void checkUserStorage(
        ::std::weak_ptr<::Core::FileStorageArea>& fileStorageAreaWeakPtr,
        uint64                                    freeSpace,
        uint64                                    usedSpace,
        uint64                                    totalCapacity
    );

    MCAPI bool isCriticalDiskError() const;

    MCAPI bool isOutOfDiskSpaceError() const;

    MCAPI void notifyCriticalDiskError(::Core::LevelStorageState const& errorCode);

    MCAPI void removeListener(::Core::StorageAreaStateListener* l);

    MCAPI ~StorageAreaState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path storageAreaRootPath);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
