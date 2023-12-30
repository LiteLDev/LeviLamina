#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

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
        // symbol: ??1DeleteFileEntry@SnapshotEnv@@QEAA@XZ
        MCAPI ~DeleteFileEntry();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SnapshotEnv& operator=(SnapshotEnv const&);
    SnapshotEnv(SnapshotEnv const&);
    SnapshotEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SnapshotEnv@@UEAA@XZ
    virtual ~SnapshotEnv() = default;

    // vIndex: 1, symbol:
    // ?NewSequentialFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
    virtual leveldb::Status NewSequentialFile(std::string const& f, leveldb::SequentialFile** r);

    // vIndex: 2, symbol:
    // ?NewRandomAccessFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
    virtual leveldb::Status NewRandomAccessFile(std::string const& f, leveldb::RandomAccessFile** r);

    // vIndex: 3, symbol:
    // ?NewWritableFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    virtual leveldb::Status NewWritableFile(std::string const& f, leveldb::WritableFile** r);

    // vIndex: 4, symbol:
    // ?NewAppendableFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    virtual leveldb::Status NewAppendableFile(std::string const& f, leveldb::WritableFile** r);

    // vIndex: 7, symbol:
    // ?DeleteFileA@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual leveldb::Status DeleteFileA(std::string const&);

    // vIndex: 11, symbol:
    // ?RenameFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual leveldb::Status RenameFile(std::string const& from, std::string const& to);

    // symbol: ??0SnapshotEnv@@QEAA@PEAVEnv@leveldb@@@Z
    MCAPI explicit SnapshotEnv(leveldb::Env* env);

    // symbol:
    // ?createSnapshot@SnapshotEnv@@QEAA?AV?$vector@USnapshotFilenameAndLength@@V?$allocator@USnapshotFilenameAndLength@@@std@@@std@@AEBVPath@Core@@@Z
    MCAPI std::vector<struct SnapshotFilenameAndLength> createSnapshot(class Core::Path const& dir);

    // symbol: ?releaseSnapshot@SnapshotEnv@@QEAAXXZ
    MCAPI void releaseSnapshot();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_isQueuedForRemoval@SnapshotEnv@@AEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
    MCAPI bool _isQueuedForRemoval(class Core::PathBuffer<std::string> const& file);

    // NOLINTEND
};
