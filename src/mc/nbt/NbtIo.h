#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NbtIo {
public:
    // prevent constructor by default
    NbtIo& operator=(NbtIo const&);
    NbtIo(NbtIo const&);
    NbtIo();

public:
    // NOLINTBEGIN
    // symbol:
    // ?read@NbtIo@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVIDataInput@@@Z
    MCAPI static std::unique_ptr<class CompoundTag> read(class IDataInput& dis);

    // symbol: ?write@NbtIo@@SAXPEBVCompoundTag@@AEAVIDataOutput@@@Z
    MCAPI static void write(class CompoundTag const* tag, class IDataOutput& dos);

    // NOLINTEND
};
