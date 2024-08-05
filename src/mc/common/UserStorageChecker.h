#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class IFileStorageAreaFetcher; }
// clang-format on

class UserStorageChecker {
public:
    // prevent constructor by default
    UserStorageChecker& operator=(UserStorageChecker const&);
    UserStorageChecker(UserStorageChecker const&);
    UserStorageChecker();

public:
    // NOLINTBEGIN
    MCAPI UserStorageChecker(std::unique_ptr<class TaskGroup>, std::unique_ptr<class Core::IFileStorageAreaFetcher>);

    MCAPI void queueCheckUserStorage(class Core::PathBuffer<std::string> const&);

    MCAPI ~UserStorageChecker();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class TaskResult _checkUserStoragePath(class Core::PathBuffer<std::string> const&) const;

    // NOLINTEND
};
