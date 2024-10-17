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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class AttributeInstance const& instance);

    MCAPI void* ctor$(struct AttributeData const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
