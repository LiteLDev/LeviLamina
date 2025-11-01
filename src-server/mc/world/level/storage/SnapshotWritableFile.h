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
    virtual ~SnapshotWritableFile() /*override*/ = default;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $Append(::leveldb::Slice const& data);

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
