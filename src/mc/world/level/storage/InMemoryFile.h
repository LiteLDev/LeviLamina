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
    MCAPI explicit InMemoryFile(class Core::Path const& fileName);

    MCAPI leveldb::Status flushToDisk(leveldb::Env* env);

    MCAPI class Core::PathBuffer<std::string> getFilename() const;

    MCAPI uint64 getFlushSize() const;

    MCAPI bool isReadyForFlush() const;

    MCAPI bool isSafeToDelete(std::string&) const;

    MCAPI void markForDelete();

    MCAPI ~InMemoryFile();

    // NOLINTEND
};
