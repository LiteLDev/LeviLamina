#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/vec.h"
#include "mc/world/level/block/utils/BlockVolumeBase.h"

class ListBlockVolume : public ::BlockVolumeBase {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ListBlockVolume@@UEAA@XZ
    virtual ~ListBlockVolume() = default;

    // vIndex: 1, symbol: ?getBoundingBox@ListBlockVolume@@UEBA?AVBoundingBox@@XZ
    virtual class BoundingBox getBoundingBox() const;

    // vIndex: 2, symbol: ?getMin@ListBlockVolume@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getMin() const;

    // vIndex: 3, symbol: ?getMax@ListBlockVolume@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getMax() const;

    // vIndex: 4, symbol: ?getSpan@ListBlockVolume@@UEBA?AU?$vec@$02H$0A@@glm@@XZ
    virtual struct glm::vec<3, int, 0> getSpan() const;

    // vIndex: 5, symbol: ?getCapacity@ListBlockVolume@@UEBAHXZ
    virtual int getCapacity() const;

    // vIndex: 6, symbol: ?isInside@ListBlockVolume@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isInside(class BlockPos const&) const;

    // vIndex: 7, symbol: ?translate@ListBlockVolume@@UEAAXAEBVBlockPos@@@Z
    virtual void translate(class BlockPos const&);

    // vIndex: 8, symbol: ?forEach@ListBlockVolume@@UEBAXV?$function@$$A6A_NAEBVBlockPos@@@Z@std@@@Z
    virtual void forEach(std::function<bool(class BlockPos const&)>) const;

    // vIndex: 9, symbol:
    // ?getChunks@ListBlockVolume@@UEBA?AV?$set@VChunkPos@@U?$less@VChunkPos@@@std@@V?$allocator@VChunkPos@@@3@@std@@XZ
    virtual std::set<class ChunkPos> getChunks() const;

    // symbol: ??0ListBlockVolume@@QEAA@XZ
    MCAPI ListBlockVolume();

    // symbol: ??0ListBlockVolume@@QEAA@AEBV0@@Z
    MCAPI ListBlockVolume(class ListBlockVolume const&);

    // symbol: ??0ListBlockVolume@@QEAA@AEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@@Z
    MCAPI explicit ListBlockVolume(std::vector<class Vec3> const&);

    // symbol: ?begin@ListBlockVolume@@QEBA?AVListBlockVolumeIterator@@XZ
    MCAPI class ListBlockVolumeIterator begin() const;

    // symbol: ?erase@ListBlockVolume@@QEAAXAEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@@Z
    MCAPI void erase(std::vector<class Vec3> const&);

    // symbol: ?getChangeCount@ListBlockVolume@@QEBA_KXZ
    MCAPI uint64 getChangeCount() const;

    // symbol: ?insert@ListBlockVolume@@QEAAXAEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@@Z
    MCAPI void insert(std::vector<class Vec3> const&);

    // symbol: ??4ListBlockVolume@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ListBlockVolume& operator=(class ListBlockVolume const&);

    // NOLINTEND
};
