#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
class TaskResult;
namespace Core { class IFileStorageAreaFetcher; }
// clang-format on

class UserStorageChecker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8064a4;
    ::ll::UntypedStorage<8, 8> mUnk2dbcef;
    // NOLINTEND

public:
    // prevent constructor by default
    UserStorageChecker& operator=(UserStorageChecker const&);
    UserStorageChecker(UserStorageChecker const&);
    UserStorageChecker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UserStorageChecker(
        ::std::unique_ptr<::TaskGroup>                     taskGroup,
        ::std::unique_ptr<::Core::IFileStorageAreaFetcher> fileStorageFetcher
    );

    MCAPI ::TaskResult _checkUserStoragePath(::Core::PathBuffer<::std::string> const& storagePath) const;

    MCAPI void queueCheckUserStorage(::Core::PathBuffer<::std::string> const& storagePath);

    MCAPI ~UserStorageChecker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::TaskGroup>                     taskGroup,
        ::std::unique_ptr<::Core::IFileStorageAreaFetcher> fileStorageFetcher
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
