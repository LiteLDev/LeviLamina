#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelDbLazyFile;
// clang-format on

class LevelDbWritableFile : public ::leveldb::WritableFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk289cca;
    ::ll::UntypedStorage<8, 32> mUnk5a9cb8;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbWritableFile& operator=(LevelDbWritableFile const&);
    LevelDbWritableFile(LevelDbWritableFile const&);
    LevelDbWritableFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::leveldb::Status Append(::leveldb::Slice const& slice) /*override*/;

    // vIndex: 2
    virtual ::leveldb::Status Close() /*override*/;

    // vIndex: 3
    virtual ::leveldb::Status Flush() /*override*/;

    // vIndex: 4
    virtual ::leveldb::Status Sync() /*override*/;

    // vIndex: 0
    virtual ~LevelDbWritableFile() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelDbWritableFile(::std::string filename, ::LevelDbLazyFile file);

    MCNAPI ::leveldb::Status SyncDirIfManifest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string filename, ::LevelDbLazyFile file);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $Append(::leveldb::Slice const& slice);

    MCNAPI ::leveldb::Status $Close();

    MCNAPI ::leveldb::Status $Flush();

    MCNAPI ::leveldb::Status $Sync();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
