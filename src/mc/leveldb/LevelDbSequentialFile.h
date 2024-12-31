#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbSequentialFile : public ::leveldb::SequentialFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3a2e4e;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbSequentialFile& operator=(LevelDbSequentialFile const&);
    LevelDbSequentialFile(LevelDbSequentialFile const&);
    LevelDbSequentialFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::leveldb::Status Read(uint64 n, ::leveldb::Slice* result, char* scratch) /*override*/;

    // vIndex: 2
    virtual ::leveldb::Status Skip(uint64 n) /*override*/;

    // vIndex: 0
    virtual ~LevelDbSequentialFile() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::leveldb::Status $Read(uint64 n, ::leveldb::Slice* result, char* scratch);

    MCAPI ::leveldb::Status $Skip(uint64 n);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
