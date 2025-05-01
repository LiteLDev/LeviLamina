#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemoryFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk7ae000;
    ::ll::UntypedStorage<8, 24> mUnk41540f;
    ::ll::UntypedStorage<8, 32> mUnk93c79a;
    ::ll::UntypedStorage<1, 1>  mUnk2c24f7;
    ::ll::UntypedStorage<4, 4>  mUnk722073;
    ::ll::UntypedStorage<1, 1>  mUnk5894c2;
    ::ll::UntypedStorage<1, 1>  mUnkaa2208;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryFile& operator=(InMemoryFile const&);
    InMemoryFile(InMemoryFile const&);
    InMemoryFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status flushToDisk(::leveldb::Env* env);

    MCNAPI uint64 getFlushSize() const;
    // NOLINTEND
};
