#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class SculkShriekerBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    SculkShriekerBlockActor& operator=(SculkShriekerBlockActor const&);
    SculkShriekerBlockActor(SculkShriekerBlockActor const&);
    SculkShriekerBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkShriekerBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 13
    virtual void onRemoved(class BlockSource& region);

    MCAPI explicit SculkShriekerBlockActor(class BlockPos const& pos);

    MCAPI void tryRespond(class BlockSource& region, class BlockPos const& pos);

    MCAPI bool tryShriek(class BlockSource& region, class BlockPos pos, class Player&);

    MCAPI static class SculkShriekerBlockActor* tryGet(class BlockSource& region, class BlockPos blockPos);

    MCAPI static class Player* tryGetPlayerInHierarchy(class Actor* actor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _canRespond(class BlockSource const& region, class BlockPos const& pos);

    // NOLINTEND
};
