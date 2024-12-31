#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
// clang-format on

class LevelDbWritableFile : public ::leveldb::WritableFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb3ea74;
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
    MCAPI LevelDbWritableFile(::std::string filename, ::Core::File&& file);

    MCAPI ::leveldb::Status SyncDirIfManifest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string filename, ::Core::File&& file);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::leveldb::Status $Append(::leveldb::Slice const& slice);

    MCAPI ::leveldb::Status $Close();

    MCAPI ::leveldb::Status $Flush();

    MCAPI ::leveldb::Status $Sync();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
