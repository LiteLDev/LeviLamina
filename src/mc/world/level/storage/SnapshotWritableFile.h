#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SnapshotWritableFile : public ::leveldb::WritableFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd25792;
    ::ll::UntypedStorage<8, 8> mUnk3809e9;
    // NOLINTEND

public:
    // prevent constructor by default
    SnapshotWritableFile& operator=(SnapshotWritableFile const&);
    SnapshotWritableFile(SnapshotWritableFile const&);
    SnapshotWritableFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SnapshotWritableFile() /*override*/;

    // vIndex: 1
    virtual ::leveldb::Status Append(::leveldb::Slice const& data) /*override*/;

    // vIndex: 2
    virtual ::leveldb::Status Close() /*override*/;

    // vIndex: 3
    virtual ::leveldb::Status Flush() /*override*/;

    // vIndex: 4
    virtual ::leveldb::Status Sync() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::leveldb::Status $Append(::leveldb::Slice const& data);

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
