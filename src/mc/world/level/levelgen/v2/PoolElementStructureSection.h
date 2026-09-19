#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/v2/JigsawJunction.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"

// auto generated forward declare list
// clang-format off
class StructurePoolElement;
namespace SharedTypes::v1_21_50 { struct PoolElementStructureSection; }
namespace br::worldgen { struct JigsawJunction; }
// clang-format on

namespace br::worldgen {

class PoolElementStructureSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                 mBoundingBox;
    ::ll::TypedStorage<8, 8, ::StructurePoolElement const*>                  mElement;
    ::ll::TypedStorage<4, 4, int>                                            mGroundOffset;
    ::ll::TypedStorage<1, 1, ::Rotation>                                     mRot;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                    mPosition;
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::JigsawJunction>> mJunctions;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>                 mLiquidSettings;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PoolElementStructureSection();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI PoolElementStructureSection(
        ::StructurePoolElement const&                        element,
        ::BlockPos                                           position,
        int                                                  groundOffset,
        ::Rotation                                           rot,
        ::BoundingBox                                        box,
        ::std::vector<::br::worldgen::JigsawJunction> const& junctions,
        ::br::worldgen::LiquidSettings                       liquidSettings
    );
#endif

    MCAPI ::SharedTypes::v1_21_50::PoolElementStructureSection serialize() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::StructurePoolElement const&                        element,
        ::BlockPos                                           position,
        int                                                  groundOffset,
        ::Rotation                                           rot,
        ::BoundingBox                                        box,
        ::std::vector<::br::worldgen::JigsawJunction> const& junctions,
        ::br::worldgen::LiquidSettings                       liquidSettings
    );
#endif
    // NOLINTEND
};

} // namespace br::worldgen
