#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Level;
class SaveContext;
class StructureEditorData;
class StructureTelemetryServerData;
namespace mce { class Color; }
// clang-format on

class StructureBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::StructureEditorData>         mStructureEditorData;
    ::ll::TypedStorage<4, 16, ::StructureTelemetryServerData> mTelemetryServerData;
    ::ll::TypedStorage<1, 1, bool>                            mIsPowered;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 8
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~StructureBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StructureBlockActor(::BlockPos const& pos);

    MCAPI bool _loadStructure(::BlockSource& region, ::BlockPos const& position, ::BaseGameVersion const& version);

    MCAPI bool _saveStructure(::BlockSource& region, ::BlockPos const& position, bool redstoneTriggered);

    MCFOLD ::StructureEditorData const& getStructureData() const;

    MCAPI void setIsWaterlogged(bool waterlogged);

    MCAPI void setPowered(::BlockSource& region, ::BlockPos const& pos, bool shouldTrigger, bool redstoneTriggered);

    MCAPI void setStructureData(::StructureEditorData const& data);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& MAX_WIREFRAME_RENDER_DISTANCE();

    MCAPI static ::mce::Color const& X_AXIS_COLOR();

    MCAPI static ::mce::Color const& Y_AXIS_COLOR();

    MCAPI static ::mce::Color const& Z_AXIS_COLOR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::Level& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $onChanged(::BlockSource& region);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
