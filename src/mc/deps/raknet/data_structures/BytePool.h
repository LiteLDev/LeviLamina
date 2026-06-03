#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/MemoryPool.h"

namespace DataStructures {

class BytePool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<uchar[128]>>  pool128;
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<uchar[512]>>  pool512;
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<uchar[2048]>> pool2048;
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<uchar[8192]>> pool8192;
    // NOLINTEND
};

} // namespace DataStructures
