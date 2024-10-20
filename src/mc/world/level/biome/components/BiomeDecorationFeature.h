#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/ExpressionNode.h"
#include "mc/world/level/ScatterParams.h"
#include "mc/world/level/levelgen/feature/gamerefs_feature/FeatureRefTraits.h"

struct BiomeDecorationFeature {
public:
public:
    ScatterParams     mScatter;
    WeakRef<IFeature> mFeature;
    HashedString      mIdentifier;
    std::string       mPlacementPass;
    bool              mCanUseInternalFeature;

public:
    // prevent constructor by default
    BiomeDecorationFeature& operator=(BiomeDecorationFeature const&);
    BiomeDecorationFeature();

public:
    // NOLINTBEGIN
    MCAPI BiomeDecorationFeature(struct BiomeDecorationFeature&&);

    MCAPI BiomeDecorationFeature(struct BiomeDecorationFeature const&);

    MCAPI ~BiomeDecorationFeature();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct BiomeDecorationFeature const&);

    MCAPI void* ctor$(struct BiomeDecorationFeature&&);

    MCAPI void dtor$();

    // NOLINTEND
};
