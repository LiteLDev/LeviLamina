#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class UncheckedByteArraySink {
public:
    // prevent constructor by default
    UncheckedByteArraySink& operator=(UncheckedByteArraySink const&);
    UncheckedByteArraySink(UncheckedByteArraySink const&);
    UncheckedByteArraySink();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UncheckedByteArraySink@snappy@@UEAA@XZ
    virtual ~UncheckedByteArraySink();

    // vIndex: 1, symbol: ?Append@UncheckedByteArraySink@snappy@@UEAAXPEBD_K@Z
    virtual void Append(char const*, uint64);

    // vIndex: 2, symbol: ?GetAppendBuffer@UncheckedByteArraySink@snappy@@UEAAPEAD_KPEAD@Z
    virtual char* GetAppendBuffer(uint64, char*);

    // vIndex: 3, symbol: ?AppendAndTakeOwnership@UncheckedByteArraySink@snappy@@UEAAXPEAD_KP6AXPEAXPEBD1@Z2@Z
    virtual void AppendAndTakeOwnership(char*, uint64, void (*)(void*, char const*, uint64), void*);

    // vIndex: 4, symbol: ?GetAppendBufferVariable@UncheckedByteArraySink@snappy@@UEAAPEAD_K0PEAD0PEA_K@Z
    virtual char* GetAppendBufferVariable(uint64, uint64, char*, uint64, uint64*);

    // NOLINTEND
};

}; // namespace snappy
