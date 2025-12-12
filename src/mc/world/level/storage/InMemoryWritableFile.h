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
    virtual ~InMemoryWritableFile() /*override*/ = default;

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
