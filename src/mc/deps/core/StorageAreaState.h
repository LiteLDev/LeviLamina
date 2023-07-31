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
    // NOLINTBEGIN
    /**
     * @symbol
     * ?checkUserStorage\@StorageAreaState\@Core\@\@QEAAXAEAV?$weak_ptr\@VFileStorageArea\@Core\@\@\@std\@\@_K1\@Z
     */
    MCAPI void checkUserStorage(std::weak_ptr<class Core::FileStorageArea>&, uint64_t, uint64_t);
    /**
     * @symbol ?isOutOfDiskSpaceError\@StorageAreaState\@Core\@\@QEBA_NXZ
     */
    MCAPI bool isOutOfDiskSpaceError() const;
    /**
     * @symbol ?notifyCriticalDiskError\@StorageAreaState\@Core\@\@QEAAXAEBW4LevelStorageState\@2\@\@Z
     */
    MCAPI void notifyCriticalDiskError(enum class Core::LevelStorageState const&);
    /**
     * @symbol ??1StorageAreaState\@Core\@\@QEAA\@XZ
     */
    MCAPI ~StorageAreaState();
    // NOLINTEND
};

}; // namespace Core
