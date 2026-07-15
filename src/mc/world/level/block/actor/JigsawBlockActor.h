#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/VanillaBlockActor.h"
#include "mc/world/level/levelgen/structure/JigsawEditorData.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class JigsawBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::JigsawEditorData> mCurrData;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& context) const /*override*/;

    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const&) const /*override*/;

    virtual void setUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const /*override*/;

    virtual void onChanged(::BlockSource&) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JigsawBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
