#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/DimensionPadding.h"
#include "mc/world/level/levelgen/v2/JigsawExpansion.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"
#include "mc/world/level/levelgen/v2/MaxDistanceFromCenter.h"
#include "mc/world/level/levelgen/v2/StructureBuilder.h"
#include "mc/world/level/levelgen/v2/StructureHeightProvider.h"
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class PoolAliasBinding;
namespace br::worldgen { struct JigsawStructure; }
// clang-format on

namespace br::worldgen {

class JigsawStructureBuilder : public ::br::worldgen::StructureBuilder<::br::worldgen::JigsawStructureBuilder> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar>                                                 mMaxDepth;
    ::ll::TypedStorage<4, 8, ::br::worldgen::MaxDistanceFromCenter>                 mMaxDistanceFromCenter;
    ::ll::TypedStorage<4, 8, ::br::worldgen::DimensionPadding>                      mDimensionPadding;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mStart;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mStartJigsawName;
    ::ll::TypedStorage<8, 56, ::br::worldgen::StructureHeightProvider>              mStartHeight;
    ::ll::TypedStorage<1, 1, ::br::worldgen::HeightmapProjection::Type>             mProjectStartToHeightmap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PoolAliasBinding>>> mPoolAliases;
    ::ll::TypedStorage<1, 1, ::br::worldgen::JigsawExpansion>                       mExpansion;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>                        mLiquidSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureBuilder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JigsawStructureBuilder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawStructureBuilder(::std::string_view key, ::HashedString type);

    MCAPI ::br::worldgen::JigsawStructure build();

    MCAPI ::br::worldgen::JigsawStructureBuilder& startPool(::std::string_view key);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view key, ::HashedString type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
