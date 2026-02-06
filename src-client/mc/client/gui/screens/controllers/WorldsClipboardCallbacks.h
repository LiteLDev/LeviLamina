#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

struct WorldsClipboardCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::string const&()>> mGetLevelId;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string const&()>> mGetLevelName;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string const&()>> mGetEduCloudFileName;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::shared_ptr<::Core::FileStorageArea>)>>
                                                                                 mHasAvailableSpaceForLevel;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mIsEduCloudWorld;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mCanCopy;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                           mPreCopyCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                           mCopySuccess;
    ::ll::TypedStorage<8, 64, ::std::function<void(::FileArchiver::ExportType)>> mExportWorld;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mShouldShowDeleteWarning;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                           mDeleteCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldsClipboardCallbacks& operator=(WorldsClipboardCallbacks const&);
    WorldsClipboardCallbacks(WorldsClipboardCallbacks const&);
    WorldsClipboardCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldsClipboardCallbacks(::WorldsClipboardCallbacks&&);

    MCAPI bool hasAvailableSpaceForLevel(::std::shared_ptr<::Core::FileStorageArea> sptStorageArea);

    MCAPI ::WorldsClipboardCallbacks& operator=(::WorldsClipboardCallbacks&&);

    MCAPI ~WorldsClipboardCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WorldsClipboardCallbacks&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
