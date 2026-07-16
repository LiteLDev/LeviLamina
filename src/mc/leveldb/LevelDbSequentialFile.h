#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbSequentialFile : public ::leveldb::SequentialFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk4fd923;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbSequentialFile& operator=(LevelDbSequentialFile const&);
    LevelDbSequentialFile(LevelDbSequentialFile const&);
    LevelDbSequentialFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::leveldb::Status Read(uint64, ::leveldb::Slice*, char*) /*override*/;

    virtual ::leveldb::Status Skip(uint64) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
