#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/levelgen/structure/StructureEditorData.h"
#include "mc/world/level/levelgen/structure/StructureTelemetryServerData.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class IStructureWireframeQueue;
class LevelChunk;
class SaveContext;
namespace mce { class Color; }
// clang-format on

class StructureBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 216, ::StructureEditorData>         mStructureEditorData;
    ::ll::TypedStorage<4, 16, ::StructureTelemetryServerData> mTelemetryServerData;
    ::ll::TypedStorage<1, 1, bool>                            mIsPowered;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual void onPlace(::BlockSource& region) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;

    virtual void onChunkLoaded(::LevelChunk& lc) /*override*/;

    virtual void onSubChunkLoaded(::LevelChunk& lc, short, bool) /*override*/;

    virtual void onChunkUnloaded(::LevelChunk& lc) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    virtual ~StructureBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C explicit StructureBlockActor(::BlockPos const& pos);

    MCAPI bool _loadStructure(::BlockSource& region, ::BlockPos const& position, ::BaseGameVersion const& version);

    MCAPI void _queueStructure(::IStructureWireframeQueue& wireframeQueue, ::StructureEditorData const& dataToQueue);

    MCAPI bool _saveStructure(::BlockSource& region, ::BlockPos const& position, bool redstoneTriggered);

    MCAPI void setPowered(::BlockSource& region, ::BlockPos const& pos, bool shouldTrigger, bool redstoneTriggered);

    MCAPI_S void setStructureData(::StructureEditorData const& data);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static float const& MAX_WIREFRAME_RENDER_DISTANCE();

    MCAPI_C static ::mce::Color const& X_AXIS_COLOR();

    MCAPI_C static ::mce::Color const& Y_AXIS_COLOR();

    MCAPI_C static ::mce::Color const& Z_AXIS_COLOR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $onChanged(::BlockSource& region);

    MCAPI void $onPlace(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);

    MCAPI void $onChunkLoaded(::LevelChunk& lc);

    MCAPI void $onSubChunkLoaded(::LevelChunk& lc, short, bool);

    MCAPI void $onChunkUnloaded(::LevelChunk& lc);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
