#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
// clang-format on

class LevelDbWritableFile {
public:
    // prevent constructor by default
    LevelDbWritableFile& operator=(LevelDbWritableFile const&);
    LevelDbWritableFile(LevelDbWritableFile const&);
    LevelDbWritableFile();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LevelDbWritableFile@@UEAA@XZ
    virtual ~LevelDbWritableFile() = default;

    // vIndex: 1, symbol: ?Append@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@AEBVSlice@3@@Z
    virtual leveldb::Status Append(leveldb::Slice const& slice);

    // vIndex: 2, symbol: ?Close@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Close();

    // vIndex: 3, symbol: ?Flush@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Flush();

    // vIndex: 4, symbol: ?Sync@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Sync();

    // symbol:
    // ??0LevelDbWritableFile@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVFile@Core@@@Z
    MCAPI LevelDbWritableFile(std::string filename, class Core::File&& file);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?SyncDirIfManifest@LevelDbWritableFile@@AEAA?AVStatus@leveldb@@XZ
    MCAPI leveldb::Status SyncDirIfManifest();

    // NOLINTEND
};
