#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

struct AttributeData {
public:
    // prevent constructor by default
    AttributeData& operator=(AttributeData const&);

public:
    // NOLINTBEGIN
    MCAPI AttributeData();

    MCAPI explicit AttributeData(class AttributeInstance const&);

    MCAPI AttributeData(struct AttributeData const&);

    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    MCAPI void write(class BinaryStream&) const;

    MCAPI ~AttributeData();

    // NOLINTEND
};
