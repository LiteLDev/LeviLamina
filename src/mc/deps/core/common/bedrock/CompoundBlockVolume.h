#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/world/level/block/utils/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CompoundBlockVolume : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    CompoundBlockVolume(CompoundBlockVolume const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CompoundBlockVolume@@UEAA@XZ
    virtual ~CompoundBlockVolume() = default;

    // symbol: ??0CompoundBlockVolume@@QEAA@XZ
    MCAPI CompoundBlockVolume();

    // symbol: ?capacity@CompoundBlockVolume@@QEBA_KXZ
    MCAPI uint64 capacity() const;

    // symbol: ?clear@CompoundBlockVolume@@QEAAX_N@Z
    MCAPI void clear(bool);

    // symbol: ?getBoundingBox@CompoundBlockVolume@@QEBA?AVBoundingBox@@XZ
    MCAPI class BoundingBox getBoundingBox() const;

    // symbol: ?getMax@CompoundBlockVolume@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getMax() const;

    // symbol: ?getMin@CompoundBlockVolume@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getMin() const;

    // symbol: ?getOrigin@CompoundBlockVolume@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getOrigin() const;

    // symbol: ?isEmpty@CompoundBlockVolume@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?isInside@CompoundBlockVolume@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isInside(class BlockPos const& pos) const;

    // symbol: ??4CompoundBlockVolume@@QEAAAEAV0@AEBV0@@Z
    MCAPI class CompoundBlockVolume& operator=(class CompoundBlockVolume const& other);

    // symbol: ??8CompoundBlockVolume@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class CompoundBlockVolume const& other) const;

    // symbol:
    // ?peekLastVolume@CompoundBlockVolume@@QEBA?AV?$optional@VCompoundBlockVolumeItem@@@std@@V?$optional@W4CompoundBlockVolumePositionRelativity@@@3@@Z
    MCAPI std::optional<class CompoundBlockVolumeItem>
          peekLastVolume(std::optional<::CompoundBlockVolumePositionRelativity>) const;

    // symbol: ?popVolume@CompoundBlockVolume@@QEAA_NXZ
    MCAPI bool popVolume();

    // symbol: ?pushVolume@CompoundBlockVolume@@QEAAX$$QEAVCompoundBlockVolumeItem@@@Z
    MCAPI void pushVolume(class CompoundBlockVolumeItem&& item);

    // symbol: ?setOrigin@CompoundBlockVolume@@QEAAXAEBVBlockPos@@_N@Z
    MCAPI void setOrigin(class BlockPos const&, bool);

    // symbol: ?translateOrigin@CompoundBlockVolume@@QEAAXAEBVBlockPos@@_N@Z
    MCAPI void translateOrigin(class BlockPos const&, bool);

    // symbol: ?volumeCount@CompoundBlockVolume@@QEBA_KXZ
    MCAPI uint64 volumeCount() const;

    // symbol: ?bindType@CompoundBlockVolume@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_recalculateBounds@CompoundBlockVolume@@IEAAXXZ
    MCAPI void _recalculateBounds();

    // NOLINTEND
};
