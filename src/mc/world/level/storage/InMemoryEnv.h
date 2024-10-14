#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/FlushableEnv.h"

class InMemoryEnv : public ::FlushableEnv {
public:
    // prevent constructor by default
    InMemoryEnv& operator=(InMemoryEnv const&);
    InMemoryEnv(InMemoryEnv const&);
    InMemoryEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InMemoryEnv() = default;

    // vIndex: 1
    virtual leveldb::Status NewSequentialFile(std::string const& f, leveldb::SequentialFile** r);

    // vIndex: 2
    virtual leveldb::Status NewRandomAccessFile(std::string const& f, leveldb::RandomAccessFile** r);

    // vIndex: 3
    virtual leveldb::Status NewWritableFile(std::string const& f, leveldb::WritableFile** r);

    // vIndex: 4
    virtual leveldb::Status NewAppendableFile(std::string const& f, leveldb::WritableFile** r);

    // vIndex: 5
    virtual bool FileExists(std::string const& f);

    // vIndex: 6
    virtual leveldb::Status GetChildren(std::string const& dir, std::vector<std::string>* r);

    // vIndex: 7
    virtual leveldb::Status DeleteFileA(std::string const&);

    // vIndex: 11
    virtual leveldb::Status RenameFile(std::string const& from, std::string const& to);

    // vIndex: 20
    virtual void flushToPermanentStorage();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _flushWithTransaction();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI leveldb::Status DeleteFileA$(std::string const&);

    MCAPI bool FileExists$(std::string const& f);

    MCAPI leveldb::Status GetChildren$(std::string const& dir, std::vector<std::string>* r);

    MCAPI leveldb::Status NewAppendableFile$(std::string const& f, leveldb::WritableFile** r);

    MCAPI leveldb::Status NewRandomAccessFile$(std::string const& f, leveldb::RandomAccessFile** r);

    MCAPI leveldb::Status NewSequentialFile$(std::string const& f, leveldb::SequentialFile** r);

    MCAPI leveldb::Status NewWritableFile$(std::string const& f, leveldb::WritableFile** r);

    MCAPI leveldb::Status RenameFile$(std::string const& from, std::string const& to);

    MCAPI void flushToPermanentStorage$();

    // NOLINTEND
};
