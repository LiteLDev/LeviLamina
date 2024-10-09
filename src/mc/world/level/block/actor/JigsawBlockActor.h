#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class JigsawBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    JigsawBlockActor& operator=(JigsawBlockActor const&);
    JigsawBlockActor(JigsawBlockActor const&);
    JigsawBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JigsawBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 37
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const&) const;

    // vIndex: 38
    virtual void setUgcStrings(class CompoundTag&, std::vector<std::string> const&) const;

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit JigsawBlockActor(class BlockPos const& pos);

    // NOLINTEND
};
