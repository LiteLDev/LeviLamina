#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/vec.h"

class BlockVolumeBase {
public:
    // prevent constructor by default
    BlockVolumeBase& operator=(BlockVolumeBase const&);
    BlockVolumeBase(BlockVolumeBase const&);
    BlockVolumeBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockVolumeBase@@UEAA@XZ
    virtual ~BlockVolumeBase();

    // vIndex: 1, symbol: ?getBoundingBox@SimpleBlockVolume@@UEBA?AVBoundingBox@@XZ
    virtual class BoundingBox getBoundingBox() const = 0;

    // vIndex: 2, symbol: ?getMin@SimpleBlockVolume@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getMin() const = 0;

    // vIndex: 3, symbol: ?getMax@SimpleBlockVolume@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getMax() const = 0;

    // vIndex: 4, symbol: ?getSpan@SimpleBlockVolume@@UEBA?AU?$vec@$02H$0A@@glm@@XZ
    virtual struct glm::vec<3, int, 0> getSpan() const = 0;

    // vIndex: 5, symbol: ?getCapacity@SimpleBlockVolume@@UEBAHXZ
    virtual int getCapacity() const = 0;

    // vIndex: 6, symbol: ?isInside@SimpleBlockVolume@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isInside(class BlockPos const&) const = 0;

    // vIndex: 7, symbol: ?translate@SimpleBlockVolume@@UEAAXAEBVBlockPos@@@Z
    virtual void translate(class BlockPos const&) = 0;

    // NOLINTEND
};
