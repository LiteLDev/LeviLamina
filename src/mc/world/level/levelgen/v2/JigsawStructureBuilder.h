#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/DimensionPadding.h"
#include "mc/world/level/levelgen/v2/JigsawExpansion.h"
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
    ::ll::TypedStorage<1, 1, char>                                                  mMaxDepth;
    ::ll::TypedStorage<4, 4, int>                                                   mMaxDistanceFromCenter;
    ::ll::TypedStorage<4, 8, ::br::worldgen::DimensionPadding>                      mDimensionPadding;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mStart;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mAnchorName;
    ::ll::TypedStorage<8, 56, ::br::worldgen::StructureHeightProvider>              mStartHeight;
    ::ll::TypedStorage<1, 1, ::br::worldgen::HeightmapProjection::Type>             mProjectStartToHeightmap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PoolAliasBinding>>> mPoolAliases;
    ::ll::TypedStorage<1, 1, ::br::worldgen::JigsawExpansion>                       mExpansion;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JigsawStructureBuilder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawStructureBuilder(::std::string_view key, ::HashedString type, int maxDistanceFromCenter);

    MCNAPI ::br::worldgen::JigsawStructure build();

    MCNAPI ::br::worldgen::JigsawStructureBuilder& startPool(::std::string_view key);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::JigsawStructureBuilder create(::std::string_view key, ::HashedString type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view key, ::HashedString type, int maxDistanceFromCenter);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
