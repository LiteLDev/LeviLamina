#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/DimensionPadding.h"
#include "mc/world/level/levelgen/v2/JigsawExpansion.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"
#include "mc/world/level/levelgen/v2/MaxDistanceFromCenter.h"
#include "mc/world/level/levelgen/v2/Structure.h"
#include "mc/world/level/levelgen/v2/StructureHeightProvider.h"
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { struct GenerationContext; }
// clang-format on

namespace br::worldgen {

struct JigsawStructure : public ::br::worldgen::Structure {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                            mStartJigsawName;
    ::ll::TypedStorage<8, 32, ::std::string>                            mStart;
    ::ll::TypedStorage<1, 1, char>                                      mMaxDepth;
    ::ll::TypedStorage<8, 56, ::br::worldgen::StructureHeightProvider>  mStartHeight;
    ::ll::TypedStorage<4, 8, ::br::worldgen::MaxDistanceFromCenter>     mMaxDistanceFromCenter;
    ::ll::TypedStorage<4, 8, ::br::worldgen::DimensionPadding>          mDimensionPadding;
    ::ll::TypedStorage<1, 1, ::br::worldgen::HeightmapProjection::Type> mProjectStartToHeightmap;
    ::ll::TypedStorage<1, 1, ::br::worldgen::JigsawExpansion>           mExpansion;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>            mLiquidSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructure& operator=(JigsawStructure const&);
    JigsawStructure(JigsawStructure const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::br::worldgen::GenerationStub>
    findValidGenerationPoint(::br::worldgen::GenerationContext& context) const /*override*/;

    virtual ~JigsawStructure() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawStructure();

    MCNAPI JigsawStructure(::br::worldgen::JigsawStructure&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::br::worldgen::JigsawStructure&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::br::worldgen::GenerationStub>
    $findValidGenerationPoint(::br::worldgen::GenerationContext& context) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
