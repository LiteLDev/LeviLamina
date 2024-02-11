#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/LevelStorageState.h"

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
    // vIndex: 0, symbol: ??1StorageAreaStateListener@Core@@UEAA@XZ
    virtual ~StorageAreaStateListener();

    // vIndex: 1, symbol:
    // ?onExtendDiskSpace@StorageAreaStateListener@Core@@UEAAX_NAEAV?$weak_ptr@VFileStorageArea@Core@@@std@@_KV?$function@$$A6AXXZ@4@@Z
    virtual void onExtendDiskSpace(
        bool                                        bSet,
        std::weak_ptr<class Core::FileStorageArea>& fileStorageAreaWeakPtr,
        uint64                                      freeSpace,
        std::function<void()>                       onHandledEventCallback
    );

    // vIndex: 2, symbol: ?onLowDiskSpace@StorageAreaStateListener@Core@@UEAAX_N@Z
    virtual void onLowDiskSpace(bool bSet);

    // vIndex: 3, symbol: ?onOutOfDiskSpace@StorageAreaStateListener@Core@@UEAAX_N@Z
    virtual void onOutOfDiskSpace(bool bSet);

    // vIndex: 4, symbol: ?onCriticalDiskError@StorageAreaStateListener@Core@@UEAAX_NAEBW4LevelStorageState@2@@Z
    virtual void onCriticalDiskError(bool bSet, ::Core::LevelStorageState const& errorCode);

    // symbol: ??0StorageAreaStateListener@Core@@QEAA@XZ
    MCAPI StorageAreaStateListener();

    // symbol: ?initListener@StorageAreaStateListener@Core@@QEAAXV?$shared_ptr@VFileStorageArea@Core@@@std@@@Z
    MCAPI void initListener(std::shared_ptr<class Core::FileStorageArea> fileStorageArea);

    // NOLINTEND
};

}; // namespace Core
