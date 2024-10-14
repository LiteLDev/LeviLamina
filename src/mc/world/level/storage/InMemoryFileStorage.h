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
    MCAPI explicit InMemoryFileStorage(leveldb::Env* env);

    MCAPI std::shared_ptr<class InMemoryFile> createFile(class Core::Path const& fileName);

    MCAPI bool deleteFile(class Core::Path const& fileName);

    MCAPI bool findFile(class Core::Path const& fileName, std::shared_ptr<class InMemoryFile>& outFile);

    MCAPI void flushToDisk();

    MCAPI void populateFileList(std::vector<std::string>& fileList);

    MCAPI ~InMemoryFileStorage();

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
