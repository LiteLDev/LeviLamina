#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

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
    MCAPI UserStorageChecker(
        std::unique_ptr<class TaskGroup>                     taskGroup,
        std::unique_ptr<class Core::IFileStorageAreaFetcher> fileStorageFetcher
    );

    MCAPI void queueCheckUserStorage(class Core::PathBuffer<std::string> const& storagePath);

    MCAPI ~UserStorageChecker();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class TaskResult _checkUserStoragePath(class Core::PathBuffer<std::string> const& storagePath) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
