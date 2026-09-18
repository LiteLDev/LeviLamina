#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/value_providers/UniformFloat.h"
#include "mc/util/value_providers/UniformInt.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
// clang-format on

class LargeSpeleothemFeature : public ::IFeature {
public:
    // LargeSpeleothemFeature inner types define
    using VanillaBlockTypeGroup = ::std::vector<::std::reference_wrapper<::HashedString const>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mSpeleothemBlock;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::reference_wrapper<::HashedString const>> const&> mReplaceableBlocks;
    ::ll::TypedStorage<4, 4, int>                                                                  mMinRadiusForWind;
    ::ll::TypedStorage<4, 4, float>                                                                mMinBluntnessForWind;
    ::ll::TypedStorage<4, 8, ::ValueProviders::UniformInt>                                         mRadius;
    ::ll::TypedStorage<4, 8, ::ValueProviders::UniformFloat>                                       mStalactiteBluntness;
    ::ll::TypedStorage<4, 8, ::ValueProviders::UniformFloat>                                       mStalagmiteBluntness;
    ::ll::TypedStorage<4, 8, ::ValueProviders::UniformFloat>                                       mHeightScale;
    ::ll::TypedStorage<4, 8, ::ValueProviders::UniformFloat>                                       mWindSpeed;
    // NOLINTEND

public:
    // prevent constructor by default
    LargeSpeleothemFeature& operator=(LargeSpeleothemFeature const&);
    LargeSpeleothemFeature(LargeSpeleothemFeature const&);
    LargeSpeleothemFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
