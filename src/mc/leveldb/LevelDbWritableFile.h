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
    // vIndex: 0
    virtual ~LevelDbWritableFile() = default;

    // vIndex: 1
    virtual leveldb::Status Append(leveldb::Slice const& slice);

    // vIndex: 2
    virtual leveldb::Status Close();

    // vIndex: 3
    virtual leveldb::Status Flush();

    // vIndex: 4
    virtual leveldb::Status Sync();

    MCAPI LevelDbWritableFile(std::string filename, class Core::File&& file);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI leveldb::Status SyncDirIfManifest();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string filename, class Core::File&& file);

    MCAPI leveldb::Status Append$(leveldb::Slice const& slice);

    MCAPI leveldb::Status Close$();

    MCAPI leveldb::Status Flush$();

    MCAPI leveldb::Status Sync$();

    // NOLINTEND
};
