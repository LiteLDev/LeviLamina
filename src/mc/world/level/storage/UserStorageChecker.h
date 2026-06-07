#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
class TaskResult;
namespace Core { class IFileStorageAreaFetcher; }
namespace Core { class PathView; }
// clang-format on

class UserStorageChecker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb0f536;
    ::ll::UntypedStorage<8, 8> mUnk6cf0ff;
    // NOLINTEND

public:
    // prevent constructor by default
    UserStorageChecker& operator=(UserStorageChecker const&);
    UserStorageChecker(UserStorageChecker const&);
    UserStorageChecker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UserStorageChecker(
        ::std::unique_ptr<::TaskGroup>                     taskGroup,
        ::std::unique_ptr<::Core::IFileStorageAreaFetcher> fileStorageFetcher
    );

    MCNAPI ::TaskResult _checkUserStoragePath(::Core::PathView storagePath) const;

    MCNAPI void queueCheckUserStorage(::Core::PathView storagePath);

    MCNAPI ~UserStorageChecker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::TaskGroup>                     taskGroup,
        ::std::unique_ptr<::Core::IFileStorageAreaFetcher> fileStorageFetcher
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
