#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
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
    // vIndex: 0, symbol: __gen_??1StructureBlockActor@@UEAA@XZ
    virtual ~StructureBlockActor() = default;

    // vIndex: 1, symbol: ?load@StructureBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@StructureBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 8, symbol: ?onChanged@StructureBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource& region);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@StructureBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@StructureBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0StructureBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit StructureBlockActor(class BlockPos const& pos);

    // symbol: ?getStructureData@StructureBlockActor@@QEBAAEBVStructureEditorData@@XZ
    MCAPI class StructureEditorData const& getStructureData() const;

    // symbol: ?setIsWaterlogged@StructureBlockActor@@QEAAX_N@Z
    MCAPI void setIsWaterlogged(bool);

    // symbol: ?setPowered@StructureBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@_N2@Z
    MCAPI void
    setPowered(class BlockSource& region, class BlockPos const& pos, bool shouldTrigger, bool redstoneTriggered);

    // symbol: ?setStructureData@StructureBlockActor@@QEAAXAEBVStructureEditorData@@@Z
    MCAPI void setStructureData(class StructureEditorData const& data);

    // symbol: ?MAX_WIREFRAME_RENDER_DISTANCE@StructureBlockActor@@2MB
    MCAPI static float const MAX_WIREFRAME_RENDER_DISTANCE;

    // symbol: ?X_AXIS_COLOR@StructureBlockActor@@2VColor@mce@@B
    MCAPI static class mce::Color const X_AXIS_COLOR;

    // symbol: ?Y_AXIS_COLOR@StructureBlockActor@@2VColor@mce@@B
    MCAPI static class mce::Color const Y_AXIS_COLOR;

    // symbol: ?Z_AXIS_COLOR@StructureBlockActor@@2VColor@mce@@B
    MCAPI static class mce::Color const Z_AXIS_COLOR;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_loadStructure@StructureBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBaseGameVersion@@@Z
    MCAPI bool
    _loadStructure(class BlockSource& region, class BlockPos const& position, class BaseGameVersion const& version);

    // symbol: ?_saveStructure@StructureBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI bool _saveStructure(class BlockSource& region, class BlockPos const& position, bool redstoneTriggered);

    // symbol: ?_trigger@StructureBlockActor@@AEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVBaseGameVersion@@_N@Z
    MCAPI void _trigger(
        class BlockSource&           region,
        class BlockPos const&        pos,
        class BaseGameVersion const& version,
        bool                         redstoneTriggered
    );

    // NOLINTEND
};
