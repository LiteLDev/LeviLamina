#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/LevelStorageState.h"

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
    MCAPI void checkUserStorage(std::weak_ptr<class Core::FileStorageArea>&, uint64, uint64, uint64);

    MCAPI bool isCriticalDiskError() const;

    MCAPI bool isOutOfDiskSpaceError() const;

    MCAPI void notifyCriticalDiskError(::Core::LevelStorageState const& errorCode);

    MCAPI ~StorageAreaState();

    // NOLINTEND
};

}; // namespace Core
