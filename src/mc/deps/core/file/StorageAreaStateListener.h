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
    // vIndex: 0
    virtual ~StorageAreaStateListener();

    // vIndex: 1
    virtual void onExtendDiskSpace(
        bool const                                bSet,
        ::std::weak_ptr<::Core::FileStorageArea>& fileStorageAreaWeakPtr,
        uint64                                    freeSpace,
        ::std::function<void()>                   onHandledEventCallback
    );

    // vIndex: 2
    virtual void onLowDiskSpace(bool const bSet);

    // vIndex: 3
    virtual void onOutOfDiskSpace(bool const bSet);

    // vIndex: 4
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
    MCNAPI void $onExtendDiskSpace(
        bool const                                bSet,
        ::std::weak_ptr<::Core::FileStorageArea>& fileStorageAreaWeakPtr,
        uint64                                    freeSpace,
        ::std::function<void()>                   onHandledEventCallback
    );

    MCNAPI void $onLowDiskSpace(bool const bSet);

    MCNAPI void $onOutOfDiskSpace(bool const bSet);

    MCNAPI void $onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
