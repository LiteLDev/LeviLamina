#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { enum class LevelStorageState; }
// clang-format on

namespace Core {

class StorageAreaState {

public:
    // prevent constructor by default
    StorageAreaState& operator=(StorageAreaState const&) = delete;
    StorageAreaState(StorageAreaState const&)            = delete;
    StorageAreaState()                                   = delete;

public:
    /**
     * @symbol
     * ?checkUserStorage\@StorageAreaState\@Core\@\@QEAAXAEAV?$weak_ptr\@VFileStorageArea\@Core\@\@\@std\@\@_K1\@Z
     */
    MCAPI void
    checkUserStorage(class std::weak_ptr<class Core::FileStorageArea>&, unsigned __int64, unsigned __int64); // NOLINT
    /**
     * @symbol ?isOutOfDiskSpaceError\@StorageAreaState\@Core\@\@QEBA_NXZ
     */
    MCAPI bool isOutOfDiskSpaceError() const; // NOLINT
    /**
     * @symbol ?notifyCriticalDiskError\@StorageAreaState\@Core\@\@QEAAXAEBW4LevelStorageState\@2\@\@Z
     */
    MCAPI void notifyCriticalDiskError(enum class Core::LevelStorageState const&); // NOLINT
    /**
     * @symbol ??1StorageAreaState\@Core\@\@QEAA\@XZ
     */
    MCAPI ~StorageAreaState(); // NOLINT
};

}; // namespace Core
