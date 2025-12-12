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
    virtual ~SnapshotWritableFile() /*override*/ = default;

    virtual ::leveldb::Status Append(::leveldb::Slice const& data) /*override*/;

    virtual ::leveldb::Status Close() /*override*/;

    virtual ::leveldb::Status Flush() /*override*/;

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
