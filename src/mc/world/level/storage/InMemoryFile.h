#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class InMemoryFile {
public:
    // prevent constructor by default
    InMemoryFile& operator=(InMemoryFile const&);
    InMemoryFile(InMemoryFile const&);
    InMemoryFile();

public:
    // NOLINTBEGIN
    // symbol: ??0InMemoryFile@@QEAA@AEBVPath@Core@@@Z
    MCAPI explicit InMemoryFile(class Core::Path const& fileName);

    // symbol: ?flushToDisk@InMemoryFile@@QEAA?AVStatus@leveldb@@PEAVEnv@3@@Z
    MCAPI leveldb::Status flushToDisk(leveldb::Env* env);

    // symbol:
    // ?getFilename@InMemoryFile@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCAPI class Core::PathBuffer<std::string> getFilename() const;

    // symbol: ?getFlushSize@InMemoryFile@@QEBA_KXZ
    MCAPI uint64 getFlushSize() const;

    // symbol: ?isReadyForFlush@InMemoryFile@@QEBA_NXZ
    MCAPI bool isReadyForFlush() const;

    // symbol: ?isSafeToDelete@InMemoryFile@@QEBA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isSafeToDelete(std::string&) const;

    // symbol: ?markForDelete@InMemoryFile@@QEAAXXZ
    MCAPI void markForDelete();

    // symbol: ??1InMemoryFile@@QEAA@XZ
    MCAPI ~InMemoryFile();

    // NOLINTEND
};
