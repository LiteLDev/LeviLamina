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
class SaveContext;
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
    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 10
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 42
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 43
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~StructureBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StructureBlockActor(::BlockPos const& pos);

    MCNAPI bool _loadStructure(::BlockSource& region, ::BlockPos const& position, ::BaseGameVersion const& version);

    MCNAPI bool _saveStructure(::BlockSource& region, ::BlockPos const& position, bool redstoneTriggered);

    MCNAPI void setPowered(::BlockSource& region, ::BlockPos const& pos, bool shouldTrigger, bool redstoneTriggered);

    MCNAPI void setStructureData(::StructureEditorData const& data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
