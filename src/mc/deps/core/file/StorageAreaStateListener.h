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
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Core::FileStorageArea>> mFileStorageArea;
    ::ll::TypedStorage<8, 80, ::std::mutex>                               mMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageAreaStateListener();

#ifdef LL_PLAT_S
    virtual void
    onExtendDiskSpace(bool const, ::std::weak_ptr<::Core::FileStorageArea> const&, uint64, ::std::function<void()>);
#else // LL_PLAT_C
    virtual void onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& storageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    );
#endif

#ifdef LL_PLAT_S
    virtual void onLowDiskSpace(bool const, uint64);
#else // LL_PLAT_C
    virtual void onLowDiskSpace(bool const bSet, uint64 freeSpace);
#endif

#ifdef LL_PLAT_S
    virtual void onOutOfDiskSpace(bool const, uint64);
#else // LL_PLAT_C
    virtual void onOutOfDiskSpace(bool const bSet, uint64 freeSpace);
#endif

    virtual void onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initListener(::std::shared_ptr<::Core::FileStorageArea> fileStorageArea);

    MCNAPI void removeListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void
    $onExtendDiskSpace(bool const, ::std::weak_ptr<::Core::FileStorageArea> const&, uint64, ::std::function<void()>);
#else // LL_PLAT_C
    MCNAPI void $onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& storageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    );
#endif

#ifdef LL_PLAT_S
    MCNAPI void $onLowDiskSpace(bool const, uint64);
#else // LL_PLAT_C
    MCNAPI void $onLowDiskSpace(bool const bSet, uint64 freeSpace);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $onOutOfDiskSpace(bool const, uint64);
#else // LL_PLAT_C
    MCNAPI void $onOutOfDiskSpace(bool const bSet, uint64 freeSpace);
#endif

    MCNAPI void $onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
