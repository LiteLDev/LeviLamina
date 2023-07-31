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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Append\@LevelDbWritableFile\@\@UEAA?AVStatus\@leveldb\@\@AEBVSlice\@3\@\@Z
     */
    virtual class leveldb::Status Append(class leveldb::Slice const&);
    /**
     * @vftbl 2
     * @symbol ?Close\@LevelDbWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Close();
    /**
     * @vftbl 3
     * @symbol ?Flush\@LevelDbWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Flush();
    /**
     * @vftbl 4
     * @symbol ?Sync\@LevelDbWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Sync();
    /**
     * @symbol
     * ??0LevelDbWritableFile\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVFile\@Core\@\@\@Z
     */
    MCAPI LevelDbWritableFile(std::string, class Core::File&&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?SyncDirIfManifest\@LevelDbWritableFile\@\@AEAA?AVStatus\@leveldb\@\@XZ
     */
    MCAPI class leveldb::Status SyncDirIfManifest();
    // NOLINTEND
};
