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
    // vIndex: 0
    virtual ~UncheckedByteArraySink();

    // vIndex: 1
    virtual void Append(char const* data, uint64 n);

    // vIndex: 2
    virtual char* GetAppendBuffer(uint64 len, char* scratch);

    // vIndex: 3
    virtual void AppendAndTakeOwnership(char* bytes, uint64 n, void (*deleter)(void*, char const*, uint64), void*);

    // vIndex: 4
    virtual char* GetAppendBufferVariable(uint64, uint64, char* scratch, uint64, uint64*);

    // NOLINTEND
};

}; // namespace snappy
