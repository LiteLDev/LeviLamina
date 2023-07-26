#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { enum class LevelStorageState; }
// clang-format on

namespace Core {

class StorageAreaStateListener {

public:
    // prevent constructor by default
    StorageAreaStateListener& operator=(StorageAreaStateListener const&) = delete;
    StorageAreaStateListener(StorageAreaStateListener const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?onExtendDiskSpace\@StorageAreaStateListener\@Core\@\@UEAAX_NAEAV?$weak_ptr\@VFileStorageArea\@Core\@\@\@std\@\@_KV?$function\@$$A6AXXZ\@4\@\@Z
     */
    virtual void
    onExtendDiskSpace(bool, class std::weak_ptr<class Core::FileStorageArea>&, unsigned __int64, class std::function<void(void)>); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORE_STORAGEAREASTATELISTENER
    /**
     * @symbol ?onCriticalDiskError\@StorageAreaStateListener\@Core\@\@UEAAX_NAEBW4LevelStorageState\@2\@\@Z
     */
    MCVAPI void onCriticalDiskError(bool, enum class Core::LevelStorageState const&); // NOLINT
    /**
     * @symbol ?onLowDiskSpace\@StorageAreaStateListener\@Core\@\@UEAAX_N\@Z
     */
    MCVAPI void onLowDiskSpace(bool); // NOLINT
    /**
     * @symbol ?onOutOfDiskSpace\@StorageAreaStateListener\@Core\@\@UEAAX_N\@Z
     */
    MCVAPI void onOutOfDiskSpace(bool); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StorageAreaStateListener(); // NOLINT
#endif
    /**
     * @symbol ??0StorageAreaStateListener\@Core\@\@QEAA\@XZ
     */
    MCAPI StorageAreaStateListener(); // NOLINT
    /**
     * @symbol
     * ?initListener\@StorageAreaStateListener\@Core\@\@QEAAXV?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@\@Z
     */
    MCAPI void initListener(class std::shared_ptr<class Core::FileStorageArea>); // NOLINT
};

}; // namespace Core
