#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

namespace Core {

class StorageAreaState {
public:
    // prevent constructor by default
    StorageAreaState& operator=(StorageAreaState const&);
    StorageAreaState(StorageAreaState const&);
    StorageAreaState();

public:
    // NOLINTBEGIN
    MCAPI void checkUserStorage(
        std::weak_ptr<class Core::FileStorageArea>& fileStorageAreaWeakPtr,
        uint64                                      freeSpace,
        uint64                                      usedSpace,
        uint64                                      totalCapacity
    );

    MCAPI bool isCriticalDiskError() const;

    MCAPI bool isOutOfDiskSpaceError() const;

    MCAPI void notifyCriticalDiskError(::Core::LevelStorageState const& errorCode);

    MCAPI ~StorageAreaState();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core
