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
    // vIndex: 0, symbol: ??1Sink@snappy@@UEAA@XZ
    virtual ~Sink();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: ?GetAppendBuffer@Sink@snappy@@UEAAPEAD_KPEAD@Z
    virtual char* GetAppendBuffer(uint64 length, char* scratch);

    // vIndex: 3, symbol: ?AppendAndTakeOwnership@Sink@snappy@@UEAAXPEAD_KP6AXPEAXPEBD1@Z2@Z
    virtual void AppendAndTakeOwnership(char* bytes, uint64 n, void (*deleter)(void*, char const*, uint64), void*);

    // vIndex: 4, symbol: ?GetAppendBufferVariable@Sink@snappy@@UEAAPEAD_K0PEAD0PEA_K@Z
    virtual char* GetAppendBufferVariable(uint64, uint64, char* scratch, uint64, uint64*);

    // NOLINTEND
};

}; // namespace snappy
