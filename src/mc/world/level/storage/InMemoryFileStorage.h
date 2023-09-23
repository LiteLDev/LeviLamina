#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class InMemoryFileStorage {
public:
    // prevent constructor by default
    InMemoryFileStorage& operator=(InMemoryFileStorage const&);
    InMemoryFileStorage(InMemoryFileStorage const&);
    InMemoryFileStorage();

public:
    // NOLINTBEGIN
    // symbol: ??0InMemoryFileStorage@@QEAA@PEAVEnv@leveldb@@@Z
    MCAPI explicit InMemoryFileStorage(leveldb::Env*);

    // symbol: ?createFile@InMemoryFileStorage@@QEAA?AV?$shared_ptr@VInMemoryFile@@@std@@AEBVPath@Core@@@Z
    MCAPI std::shared_ptr<class InMemoryFile> createFile(class Core::Path const&);

    // symbol: ?deleteFile@InMemoryFileStorage@@QEAA_NAEBVPath@Core@@@Z
    MCAPI bool deleteFile(class Core::Path const&);

    // symbol: ?findFile@InMemoryFileStorage@@QEAA_NAEBVPath@Core@@AEAV?$shared_ptr@VInMemoryFile@@@std@@@Z
    MCAPI bool findFile(class Core::Path const&, std::shared_ptr<class InMemoryFile>&);

    // symbol: ?flushToDisk@InMemoryFileStorage@@QEAAXXZ
    MCAPI void flushToDisk();

    // symbol:
    // ?populateFileList@InMemoryFileStorage@@QEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI void populateFileList(std::vector<std::string>&);

    // symbol: ??1InMemoryFileStorage@@QEAA@XZ
    MCAPI ~InMemoryFileStorage();

    // NOLINTEND
};
