#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_21_20/structure/ConstantHeight.h"
#include "mc/deps/shared_types/v1_21_20/structure/DimensionPaddingRange.h"
#include "mc/deps/shared_types/v1_21_20/structure/UniformHeight.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/Description.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/GenerationStep.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/HeightmapProjection.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/LiquidSettings.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/MaxDistanceFromCenter.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/TerrainAdaptation.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_21_20::PoolAliases { struct Direct; }
namespace SharedTypes::v1_21_20::PoolAliases { struct Random; }
namespace SharedTypes::v1_21_20::PoolAliases { struct RandomGroup; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20::JigsawStructureDefinition {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_20::JigsawStructureDefinition::Description>      mDescription;
    ::ll::TypedStorage<8, 32, ::std::string>                                                        mStartJigsawName;
    ::ll::TypedStorage<8, 328, ::SharedTypes::v1_21_20::FilterGroupData>                            mBiomeFilters;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureDefinition::GenerationStep>    mStep;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureDefinition::TerrainAdaptation> mTerrainAdaptation;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<15>>                                         mStartPool;
    ::ll::TypedStorage<1, 1, uchar>                                                                 mMaxDepth;
    ::ll::TypedStorage<
        2,
        10,
        ::std::variant<::SharedTypes::v1_21_20::UniformHeight, ::SharedTypes::v1_21_20::ConstantHeight>>
        mStartHeight;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureDefinition::HeightmapProjection>
        mHeightmapProjection;
    ::ll::TypedStorage<4, 16, ::std::optional<::std::variant<uint, ::SharedTypes::v1_21_20::DimensionPaddingRange>>>
        mDimensionPadding;
    ::ll::TypedStorage<4, 8, ::SharedTypes::v1_21_20::JigsawStructureDefinition::MaxDistanceFromCenter>
        mMaxDistanceFromCenter;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::SharedTypes::v1_21_20::PoolAliases::Direct,
            ::SharedTypes::v1_21_20::PoolAliases::Random,
            ::SharedTypes::v1_21_20::PoolAliases::RandomGroup>>>
                                                                                                 mPoolAliases;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureDefinition::LiquidSettings> mLiquidSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Contents();

    MCAPI Contents(::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&&);

    MCAPI Contents(::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents const&);

    MCAPI ::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&&);

    MCAPI ::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents const&);

    MCAPI ~Contents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureDefinition
