#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/vec.h"
#include "mc/world/level/block/utils/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SimpleBlockVolume : public ::BlockVolumeBase {
public:
    // SimpleBlockVolume inner types define
    enum class IntersectionResult {};

public:
    // prevent constructor by default
    SimpleBlockVolume();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SimpleBlockVolume@@UEAA@XZ
    virtual ~SimpleBlockVolume();

    // vIndex: 1, symbol: ?getBoundingBox@SimpleBlockVolume@@UEBA?AVBoundingBox@@XZ
    virtual class BoundingBox getBoundingBox() const;

    // vIndex: 2, symbol: ?getMin@SimpleBlockVolume@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getMin() const;

    // vIndex: 3, symbol: ?getMax@SimpleBlockVolume@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getMax() const;

    // vIndex: 4, symbol: ?getSpan@SimpleBlockVolume@@UEBA?AU?$vec@$02H$0A@@glm@@XZ
    virtual struct glm::vec<3, int, 0> getSpan() const;

    // vIndex: 5, symbol: ?getCapacity@SimpleBlockVolume@@UEBAHXZ
    virtual int getCapacity() const;

    // vIndex: 6, symbol: ?isInside@SimpleBlockVolume@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isInside(class BlockPos const&) const;

    // vIndex: 7, symbol: ?translate@SimpleBlockVolume@@UEAAXAEBVBlockPos@@@Z
    virtual void translate(class BlockPos const&);

    // vIndex: 8, symbol: ?forEach@SimpleBlockVolume@@UEBAXV?$function@$$A6A_NAEBVBlockPos@@@Z@std@@@Z
    virtual void forEach(std::function<bool(class BlockPos const&)>) const;

    // vIndex: 9, symbol:
    // ?getChunks@SimpleBlockVolume@@UEBA?AV?$set@VChunkPos@@U?$less@VChunkPos@@@std@@V?$allocator@VChunkPos@@@3@@std@@XZ
    virtual std::set<class ChunkPos> getChunks() const;

    // symbol: ??0SimpleBlockVolume@@QEAA@$$QEAV0@@Z
    MCAPI SimpleBlockVolume(class SimpleBlockVolume&& volume);

    // symbol: ??0SimpleBlockVolume@@QEAA@AEBV0@@Z
    MCAPI SimpleBlockVolume(class SimpleBlockVolume const& volume);

    // symbol: ??0SimpleBlockVolume@@QEAA@$$QEAVBlockPos@@0@Z
    MCAPI SimpleBlockVolume(class BlockPos&& from, class BlockPos&& to);

    // symbol: ?begin@SimpleBlockVolume@@QEBA?AVSimpleBlockVolumeIterator@@XZ
    MCAPI class SimpleBlockVolumeIterator begin() const;

    // symbol: ?contains@SimpleBlockVolume@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool contains(class BlockPos const& pos) const;

    // symbol: ?doesAreaTouchFaces@SimpleBlockVolume@@QEBA_NAEBVBlockPos@@0@Z
    MCAPI bool doesAreaTouchFaces(class BlockPos const& min, class BlockPos const& max) const;

    // symbol: ?doesBlockTouchFaces@SimpleBlockVolume@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool doesBlockTouchFaces(class BlockPos const& blockPos) const;

    // symbol: ?getFrom@SimpleBlockVolume@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getFrom() const;

    // symbol: ?getTo@SimpleBlockVolume@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getTo() const;

    // symbol: ?getWorldAABB@SimpleBlockVolume@@QEBA?AVAABB@@XZ
    MCAPI class AABB getWorldAABB() const;

    // symbol: ?intersects@SimpleBlockVolume@@QEBA?AW4IntersectionResult@1@AEBV1@@Z
    MCAPI ::SimpleBlockVolume::IntersectionResult intersects(class SimpleBlockVolume const& other) const;

    // symbol: ??4SimpleBlockVolume@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class SimpleBlockVolume& operator=(class SimpleBlockVolume&& other);

    // symbol: ??4SimpleBlockVolume@@QEAAAEAV0@AEBV0@@Z
    MCAPI class SimpleBlockVolume& operator=(class SimpleBlockVolume const& other);

    // symbol: ??8SimpleBlockVolume@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class SimpleBlockVolume const& other) const;

    // symbol: ?translated@SimpleBlockVolume@@QEBA?AV1@AEBU?$vec@$02H$0A@@glm@@@Z
    MCAPI class SimpleBlockVolume translated(struct glm::vec<3, int, 0> const&) const;

    // symbol: ?cerealBindTypes@SimpleBlockVolume@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void cerealBindTypes(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
