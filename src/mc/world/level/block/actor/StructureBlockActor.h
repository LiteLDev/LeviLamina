#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/VanillaBlockActor.h"
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
class LevelChunk;
class SaveContext;
class IStructureWireframeQueue;
// clang-format on

class StructureBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 216, ::StructureEditorData>         mStructureEditorData;
    ::ll::TypedStorage<4, 16, ::StructureTelemetryServerData> mTelemetryServerData;
    ::ll::TypedStorage<1, 1, bool>                            mIsPowered;
    // NOLINTEND

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _loadStructure(::BlockSource& region, ::BlockPos const& position, ::BaseGameVersion const& version);

    MCNAPI bool _saveStructure(::BlockSource& region, ::BlockPos const& position, bool redstoneTriggered);

#ifdef LL_PLAT_C
    MCNAPI void
    onBoundsChanged(::IStructureWireframeQueue& wireframeQueue, ::StructureEditorData const& newStructureData);
#endif

    MCNAPI void setPowered(::BlockSource& region, ::BlockPos const& pos, bool shouldTrigger, bool redstoneTriggered);

    MCNAPI void setStructureData(::StructureEditorData const& data);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI void $onPlace(::BlockSource& region);

    MCNAPI void $onRemoved(::BlockSource& region);

    MCNAPI void $onChunkLoaded(::LevelChunk& lc);

    MCNAPI void $onSubChunkLoaded(::LevelChunk& lc, short, bool);

    MCNAPI void $onChunkUnloaded(::LevelChunk& lc);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();
    // NOLINTEND
};
