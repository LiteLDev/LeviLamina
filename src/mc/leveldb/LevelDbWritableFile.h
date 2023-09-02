#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
// clang-format on

class LevelDbWritableFile {
public:
    // prevent constructor by default
    LevelDbWritableFile& operator=(LevelDbWritableFile const&) = delete;
    LevelDbWritableFile(LevelDbWritableFile const&)            = delete;
    LevelDbWritableFile()                                      = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?Append@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@AEBVSlice@3@@Z
    virtual leveldb::Status Append(leveldb::Slice const&);

    // vIndex: 2, symbol: ?Close@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Close();

    // vIndex: 3, symbol: ?Flush@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Flush();

    // vIndex: 4, symbol: ?Sync@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Sync();

    // symbol:
    // ??0LevelDbWritableFile@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVFile@Core@@@Z
    MCAPI LevelDbWritableFile(std::string, class Core::File&&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?SyncDirIfManifest@LevelDbWritableFile@@AEAA?AVStatus@leveldb@@XZ
    MCAPI leveldb::Status SyncDirIfManifest();

    // NOLINTEND
};
