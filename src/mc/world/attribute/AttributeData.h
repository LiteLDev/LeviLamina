#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

struct AttributeData {
public:
    // prevent constructor by default
    AttributeData& operator=(AttributeData const&);

public:
    // NOLINTBEGIN
    MCAPI AttributeData();

    MCAPI explicit AttributeData(class AttributeInstance const& instance);

    MCAPI AttributeData(struct AttributeData const&);

    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    MCAPI void write(class BinaryStream& stream) const;

    MCAPI ~AttributeData();

    // NOLINTEND
};
