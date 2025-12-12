#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/Result.h"

class CompoundTag;
class BinaryStream;
class ReadOnlyBinaryStream;

template <typename T>
struct serialize {
public:
    MCAPI static void               write(T const&, ::BinaryStream&);
    MCAPI static Bedrock::Result<T> read(::ReadOnlyBinaryStream&);
};

template <>
struct serialize<::CompoundTag> {
public:
    LLAPI static void                           write(::CompoundTag const&, ::BinaryStream&);
    LLAPI static Bedrock::Result<::CompoundTag> read(::ReadOnlyBinaryStream&);
};
