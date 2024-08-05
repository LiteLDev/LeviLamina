#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class SkullBlockActor : public ::BlockActor {
public:
    // SkullBlockActor inner types define
    enum class SkullType {};

public:
    // prevent constructor by default
    SkullBlockActor& operator=(SkullBlockActor const&);
    SkullBlockActor(SkullBlockActor const&);
    SkullBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SkullBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 8
    virtual void onChanged(class BlockSource& region);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit SkullBlockActor(class BlockPos const& pos);

    MCAPI ::SkullBlockActor::SkullType getSkullType() const;

    MCAPI void setRotation(float rot);

    MCAPI void setSkullType(int type);

    MCAPI static std::optional<::SkullBlockActor::SkullType>
    getSkullType(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
