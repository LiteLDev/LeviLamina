#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class InMemoryFileStorage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYFILESTORAGE
public:
    InMemoryFileStorage& operator=(InMemoryFileStorage const&) = delete;
    InMemoryFileStorage(InMemoryFileStorage const&)            = delete;
    InMemoryFileStorage()                                      = delete;
#endif

public:
    /**
     * @symbol ?createFile\@InMemoryFileStorage\@\@QEAA?AV?$shared_ptr\@VInMemoryFile\@\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI class std::shared_ptr<class InMemoryFile> createFile(class Core::Path const&);
    /**
     * @symbol ?deleteFile\@InMemoryFileStorage\@\@QEAA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool deleteFile(class Core::Path const&);
    /**
     * @symbol ?flushToDisk\@InMemoryFileStorage\@\@QEAAXXZ
     */
    MCAPI void flushToDisk();
    /**
     * @symbol
     * ?populateFileList\@InMemoryFileStorage\@\@QEAAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void populateFileList(std::vector<std::string>&);
};
