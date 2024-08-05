#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class RakDataOutput : public ::BytesDataOutput {
public:
    // prevent constructor by default
    RakDataOutput& operator=(RakDataOutput const&);
    RakDataOutput(RakDataOutput const&);
    RakDataOutput();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakDataOutput();

    // vIndex: 9
    virtual void writeBytes(void const* data, uint64 bytes);

    // NOLINTEND
};
