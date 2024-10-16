#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

namespace Core {

class StorageAreaStateListener {
public:
    // prevent constructor by default
    StorageAreaStateListener& operator=(StorageAreaStateListener const&);
    StorageAreaStateListener(StorageAreaStateListener const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StorageAreaStateListener();

    // vIndex: 1
    virtual void onExtendDiskSpace(
        bool                                        bSet,
        std::weak_ptr<class Core::FileStorageArea>& fileStorageAreaWeakPtr,
        uint64                                      freeSpace,
        std::function<void()>                       onHandledEventCallback
    );

    // vIndex: 2
    virtual void onLowDiskSpace(bool bSet);

    // vIndex: 3
    virtual void onOutOfDiskSpace(bool bSet);

    // vIndex: 4
    virtual void onCriticalDiskError(bool bSet, ::Core::LevelStorageState const& errorCode);

    MCAPI StorageAreaStateListener();

    MCAPI void initListener(std::shared_ptr<class Core::FileStorageArea> fileStorageArea);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void onCriticalDiskError$(bool bSet, ::Core::LevelStorageState const& errorCode);

    MCAPI void onExtendDiskSpace$(
        bool                                        bSet,
        std::weak_ptr<class Core::FileStorageArea>& fileStorageAreaWeakPtr,
        uint64                                      freeSpace,
        std::function<void()>                       onHandledEventCallback
    );

    MCAPI void onLowDiskSpace$(bool bSet);

    MCAPI void onOutOfDiskSpace$(bool bSet);

    // NOLINTEND
};

}; // namespace Core
