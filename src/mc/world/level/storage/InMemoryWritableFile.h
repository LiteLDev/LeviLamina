#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemoryWritableFile : public ::leveldb::WritableFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkeee101;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryWritableFile& operator=(InMemoryWritableFile const&);
    InMemoryWritableFile(InMemoryWritableFile const&);
    InMemoryWritableFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InMemoryWritableFile() /*override*/ = default;

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
