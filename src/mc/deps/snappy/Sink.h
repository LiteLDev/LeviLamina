#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class Sink {
public:
    // prevent constructor by default
    Sink& operator=(Sink const&);
    Sink(Sink const&);
    Sink();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Sink();

    // vIndex: 1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2
    virtual char* GetAppendBuffer(uint64 length, char* scratch);

    // vIndex: 3
    virtual void AppendAndTakeOwnership(char* bytes, uint64 n, void (*deleter)(void*, char const*, uint64), void*);

    // vIndex: 4
    virtual char* GetAppendBufferVariable(uint64, uint64, char* scratch, uint64, uint64*);

    // NOLINTEND
};

}; // namespace snappy
