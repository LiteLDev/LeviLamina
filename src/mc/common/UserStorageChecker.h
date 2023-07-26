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
    UserStorageChecker& operator=(UserStorageChecker const&) = delete;
    UserStorageChecker(UserStorageChecker const&)            = delete;
    UserStorageChecker()                                     = delete;

public:
    /**
     * @symbol
     * ??0UserStorageChecker\@\@QEAA\@V?$unique_ptr\@VTaskGroup\@\@U?$default_delete\@VTaskGroup\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VIFileStorageAreaFetcher\@Core\@\@U?$default_delete\@VIFileStorageAreaFetcher\@Core\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI
        UserStorageChecker(std::unique_ptr<class TaskGroup>, std::unique_ptr<class Core::IFileStorageAreaFetcher>); // NOLINT
    /**
     * @symbol
     * ?queueCheckUserStorage\@UserStorageChecker\@\@QEAAXAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    MCAPI void queueCheckUserStorage(class Core::PathBuffer<std::string> const&); // NOLINT
    /**
     * @symbol ??1UserStorageChecker\@\@QEAA\@XZ
     */
    MCAPI ~UserStorageChecker(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_checkUserStoragePath\@UserStorageChecker\@\@AEBA?AVTaskResult\@\@AEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    MCAPI class TaskResult _checkUserStoragePath(class Core::PathBuffer<std::string> const&) const; // NOLINT

private:
};
