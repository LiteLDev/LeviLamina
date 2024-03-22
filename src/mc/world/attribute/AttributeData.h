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
    // symbol: ??0AttributeData@@QEAA@XZ
    MCAPI AttributeData();

    // symbol: ??0AttributeData@@QEAA@AEBVAttributeInstance@@@Z
    MCAPI explicit AttributeData(class AttributeInstance const&);

    // symbol: ??0AttributeData@@QEAA@AEBU0@@Z
    MCAPI AttributeData(struct AttributeData const&);

    // symbol: ?read@AttributeData@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    // symbol: ?write@AttributeData@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream&) const;

    // symbol: ??1AttributeData@@QEAA@XZ
    MCAPI ~AttributeData();

    // NOLINTEND
};
