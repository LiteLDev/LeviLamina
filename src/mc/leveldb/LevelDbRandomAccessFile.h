#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbRandomAccessFile : public ::leveldb::RandomAccessFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkd171ca;
    ::ll::UntypedStorage<8, 80> mUnk2ca349;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbRandomAccessFile& operator=(LevelDbRandomAccessFile const&);
    LevelDbRandomAccessFile(LevelDbRandomAccessFile const&);
    LevelDbRandomAccessFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::leveldb::Status Read(uint64 offset, uint64 n, ::leveldb::Slice* result, char* scratch) const /*override*/;

    virtual ~LevelDbRandomAccessFile() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $Read(uint64 offset, uint64 n, ::leveldb::Slice* result, char* scratch) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
