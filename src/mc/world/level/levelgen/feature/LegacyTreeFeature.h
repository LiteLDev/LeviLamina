#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FeatureRegistry;
class Random;
// clang-format on

class LegacyTreeFeature : public ::IFeature {
public:
    // LegacyTreeFeature inner types define
    enum class Type : int {
        BambooJungle          = 0,
        BirchForest           = 1,
        BirchForestMutated    = 2,
        ExtremeHillsPlusTrees = 3,
        FlowerForest          = 4,
        Meadow                = 5,
        Forest                = 6,
        Ice                   = 7,
        Jungle                = 8,
        JungleEdge            = 9,
        MesaForest            = 10,
        Plains                = 11,
        Savanna               = 12,
        SavannaMutated        = 13,
        Taiga                 = 14,
        TaigaMega             = 15,
        TaigaMegaSpruce       = 16,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>                        mBiomeInfoNoise;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>                             mTallGrassFeature;
    ::ll::TypedStorage<4, 4, float>                                              mTreeChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::IFeature>>>              mFeatureRefs;
    ::ll::TypedStorage<8, 64, ::std::function<::WeakRef<::IFeature>(::Random&)>> mGetTreeFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTreeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;

    virtual ~LegacyTreeFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    LegacyTreeFeature(::LegacyTreeFeature::Type placementType, ::FeatureRegistry& registry, bool shouldPlaceLeafLitter);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyTreeFeature::Type placementType, ::FeatureRegistry& registry, bool shouldPlaceLeafLitter);
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
