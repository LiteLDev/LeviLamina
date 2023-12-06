#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/Result.h"

template <typename T>
struct serialize {
public:
    MCAPI static void               write(T const&, class BinaryStream&);
    MCAPI static Bedrock::Result<T> read(class ReadOnlyBinaryStream&);
};
