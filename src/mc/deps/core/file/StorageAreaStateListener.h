#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/platform/threading/Mutex.h"

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
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                mMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageAreaStateListener();

    virtual void onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& fileStorageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    );

    virtual void onLowDiskSpace(bool const bSet);

    virtual void onOutOfDiskSpace(bool const bSet);

    virtual void onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initListener(::std::shared_ptr<::Core::FileStorageArea> fileStorageArea);

    MCAPI void removeListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& fileStorageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    );

    MCFOLD void $onLowDiskSpace(bool const bSet);

    MCFOLD void $onOutOfDiskSpace(bool const bSet);

    MCFOLD void $onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
