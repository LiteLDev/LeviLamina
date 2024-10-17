#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class SnapshotEnv {
public:
    // SnapshotEnv inner types declare
    // clang-format off
    class DeleteFileEntry;
    // clang-format on

    // SnapshotEnv inner types define
    class DeleteFileEntry {
    public:
        // prevent constructor by default
        DeleteFileEntry& operator=(DeleteFileEntry const&);
        DeleteFileEntry(DeleteFileEntry const&);
        DeleteFileEntry();

    public:
        // NOLINTBEGIN
        MCAPI ~DeleteFileEntry();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SnapshotEnv& operator=(SnapshotEnv const&);
    SnapshotEnv(SnapshotEnv const&);
    SnapshotEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SnapshotEnv() = default;

    // vIndex: 1
    virtual leveldb::Status NewSequentialFile(std::string const& f, leveldb::SequentialFile** r);

    // vIndex: 2
    virtual leveldb::Status NewRandomAccessFile(std::string const& f, leveldb::RandomAccessFile** r);

    // vIndex: 3
    virtual leveldb::Status NewWritableFile(std::string const& f, leveldb::WritableFile** r);

    // vIndex: 4
    virtual leveldb::Status NewAppendableFile(std::string const& f, leveldb::WritableFile** r);

    // vIndex: 7
    virtual leveldb::Status DeleteFileA(std::string const&);

    // vIndex: 11
    virtual leveldb::Status RenameFile(std::string const& from, std::string const& to);

    MCAPI explicit SnapshotEnv(leveldb::Env* env);

    MCAPI std::vector<struct SnapshotFilenameAndLength> createSnapshot(class Core::Path const& dir);

    MCAPI void releaseSnapshot();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isQueuedForRemoval(class Core::PathBuffer<std::string> const& file);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(leveldb::Env* env);

    MCAPI leveldb::Status DeleteFileA$(std::string const&);

    MCAPI leveldb::Status NewAppendableFile$(std::string const& f, leveldb::WritableFile** r);

    MCAPI leveldb::Status NewRandomAccessFile$(std::string const& f, leveldb::RandomAccessFile** r);

    MCAPI leveldb::Status NewSequentialFile$(std::string const& f, leveldb::SequentialFile** r);

    MCAPI leveldb::Status NewWritableFile$(std::string const& f, leveldb::WritableFile** r);

    MCAPI leveldb::Status RenameFile$(std::string const& from, std::string const& to);

    // NOLINTEND
};
