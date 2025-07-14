#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/IRequestAction.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class JigsawStructureElementRegistry;
class ServerLevel;
namespace br::worldgen { class PoolElementStructureSection; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class JigsawStructurePostprocessAction : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::br::worldgen::PoolElementStructureSection>> mSection;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                    mOriginPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                 mChunkBounds;
    ::ll::TypedStorage<1, 1, ::br::worldgen::JigsawReplacement>                              mJigsawReplacement;
    ::ll::TypedStorage<1, 1, bool>                                                           mIncludeEntities;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>                                 mLiquidSettings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void execute(::ServerLevel& level, ::Dimension& dimension) /*override*/;

    // vIndex: 2
    virtual void serialize(::CompoundTag& tag) /*override*/;

    // vIndex: 0
    virtual ~JigsawStructurePostprocessAction() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::JigsawStructurePostprocessAction>
    load(::CompoundTag const& tag, ::JigsawStructureElementRegistry const& elementReg);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::cereal::ReflectionCtx>& mCerealContext();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::ServerLevel& level, ::Dimension& dimension);

    MCNAPI void $serialize(::CompoundTag& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
