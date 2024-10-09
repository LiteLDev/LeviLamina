#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class StructureBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    StructureBlockActor& operator=(StructureBlockActor const&);
    StructureBlockActor(StructureBlockActor const&);
    StructureBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 8
    virtual void onChanged(class BlockSource& region);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit StructureBlockActor(class BlockPos const& pos);

    MCAPI class StructureEditorData const& getStructureData() const;

    MCAPI void setIsWaterlogged(bool waterlogged);

    MCAPI void
    setPowered(class BlockSource& region, class BlockPos const& pos, bool shouldTrigger, bool redstoneTriggered);

    MCAPI void setStructureData(class StructureEditorData const& data);

    MCAPI static float const MAX_WIREFRAME_RENDER_DISTANCE;

    MCAPI static class mce::Color const X_AXIS_COLOR;

    MCAPI static class mce::Color const Y_AXIS_COLOR;

    MCAPI static class mce::Color const Z_AXIS_COLOR;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _loadStructure(class BlockSource& region, class BlockPos const& position, class BaseGameVersion const& version);

    MCAPI bool _saveStructure(class BlockSource& region, class BlockPos const& position, bool redstoneTriggered);

    MCAPI void _trigger(
        class BlockSource&           region,
        class BlockPos const&        pos,
        class BaseGameVersion const& version,
        bool                         redstoneTriggered
    );

    // NOLINTEND
};
