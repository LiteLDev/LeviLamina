#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

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

    MCAPI void clear(bool resetOrigin);

    MCAPI void forEachPosition(std::function<bool(class BlockPos const&)> const& callback) const;

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
          peekLastVolume(std::optional<::CompoundBlockVolumePositionRelativity> optRelativity) const;

    MCAPI bool popVolume();

    MCAPI void pushVolume(class CompoundBlockVolumeItem&& item);

    MCAPI void setOrigin(class BlockPos const& newPos, bool preserveExistingVolumes);

    MCAPI void translateOrigin(class BlockPos const& deltaPos, bool preserveExistingVolumes);

    MCAPI uint64 volumeCount() const;

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _recalculateBounds();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
