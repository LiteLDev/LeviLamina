/**
 * @file  UserStorageChecker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class UserStorageChecker {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_USERSTORAGECHECKER
public:
    class UserStorageChecker& operator=(class UserStorageChecker const &) = delete;
    UserStorageChecker(class UserStorageChecker const &) = delete;
    UserStorageChecker() = delete;
#endif

public:
    /**
     * @symbol ??0UserStorageChecker\@\@QEAA\@V?$unique_ptr\@VTaskGroup\@\@U?$default_delete\@VTaskGroup\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VIFileStorageAreaFetcher\@Core\@\@U?$default_delete\@VIFileStorageAreaFetcher\@Core\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI UserStorageChecker(std::unique_ptr<class TaskGroup>, std::unique_ptr<class Core::IFileStorageAreaFetcher>);
    /**
     * @symbol ?queueCheckUserStorage\@UserStorageChecker\@\@QEAAXAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    MCAPI void queueCheckUserStorage(class Core::PathBuffer<std::string> const &);
    /**
     * @symbol ??1UserStorageChecker\@\@QEAA\@XZ
     */
    MCAPI ~UserStorageChecker();

//private:
    /**
     * @symbol ?_checkUserStoragePath\@UserStorageChecker\@\@AEBA?AVTaskResult\@\@AEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    MCAPI class TaskResult _checkUserStoragePath(class Core::PathBuffer<std::string> const &) const;

private:

};
