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
    // vIndex: 0
    virtual ~CompoundBlockVolume() = default;

    MCAPI CompoundBlockVolume();

    MCAPI uint64 capacity() const;

    MCAPI void clear(bool);

    MCAPI void forEachPosition(std::function<bool(class BlockPos const&)> const&) const;

    MCAPI std::vector<class CompoundBlockVolumeItem> getAbsoluteVolumeList() const;

    MCAPI class BoundingBox getBoundingBox() const;

    MCAPI class BlockPos getMax() const;

    MCAPI class BlockPos getMin() const;

    MCAPI class BlockPos const& getOrigin() const;

    MCAPI std::vector<class CompoundBlockVolumeItem> getVolumeList() const;

    MCAPI bool isEmpty() const;

    MCAPI bool isInside(class BlockPos const& pos) const;

    MCAPI class CompoundBlockVolume& operator=(class CompoundBlockVolume const& other);

    MCAPI bool operator==(class CompoundBlockVolume const& other) const;

    MCAPI std::optional<class CompoundBlockVolumeItem>
          peekLastVolume(std::optional<::CompoundBlockVolumePositionRelativity>) const;

    MCAPI bool popVolume();

    MCAPI void pushVolume(class CompoundBlockVolumeItem&& item);

    MCAPI void setOrigin(class BlockPos const&, bool);

    MCAPI void translateOrigin(class BlockPos const&, bool);

    MCAPI uint64 volumeCount() const;

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _recalculateBounds();

    // NOLINTEND
};
