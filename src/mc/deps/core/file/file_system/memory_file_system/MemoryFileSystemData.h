#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct MemoryFileSystemData {
public:
    // MemoryFileSystemData inner types declare
    // clang-format off
    struct WriteOp;
    // clang-format on

    // MemoryFileSystemData inner types define
    struct WriteOp {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk39e929;
        ::ll::UntypedStorage<8, 8>  mUnka2604c;
        // NOLINTEND

    public:
        // prevent constructor by default
        WriteOp& operator=(WriteOp const&);
        WriteOp(WriteOp const&);
        WriteOp();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkd1cd69;
    ::ll::UntypedStorage<8, 80> mUnkdadc03;
    ::ll::UntypedStorage<8, 80> mUnkab95a9;
    ::ll::UntypedStorage<8, 24> mUnk79cb8a;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystemData& operator=(MemoryFileSystemData const&);
    MemoryFileSystemData(MemoryFileSystemData const&);
    MemoryFileSystemData();
};

} // namespace Core
