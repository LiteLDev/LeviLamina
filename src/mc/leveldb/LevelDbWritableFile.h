#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbWritableFile : public ::leveldb::WritableFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk289cca;
    ::ll::UntypedStorage<8, 32> mUnk7f131b;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbWritableFile& operator=(LevelDbWritableFile const&);
    LevelDbWritableFile(LevelDbWritableFile const&);
    LevelDbWritableFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::leveldb::Status Append(::leveldb::Slice const&) /*override*/;

    virtual ::leveldb::Status Close() /*override*/;

    virtual ::leveldb::Status Flush() /*override*/;

    virtual ::leveldb::Status Sync() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
