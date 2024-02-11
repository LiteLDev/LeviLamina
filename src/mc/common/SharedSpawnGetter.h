#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/ISharedSpawnGetter.h"

class SharedSpawnGetter : public ::ISharedSpawnGetter {
public:
    // prevent constructor by default
    SharedSpawnGetter& operator=(SharedSpawnGetter const&);
    SharedSpawnGetter(SharedSpawnGetter const&);
    SharedSpawnGetter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SharedSpawnGetter@@UEAA@XZ
    virtual ~SharedSpawnGetter() = default;

    // vIndex: 1, symbol: ?getSharedSpawnPosition@SharedSpawnGetter@@UEBAAEBVBlockPos@@XZ
    virtual class BlockPos const& getSharedSpawnPosition() const;

    // symbol: ??0SharedSpawnGetter@@QEAA@AEAVLevelData@@@Z
    MCAPI explicit SharedSpawnGetter(class LevelData&);

    // NOLINTEND
};
