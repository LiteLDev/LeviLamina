#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Biome;
class Block;
// clang-format on

namespace VanillaSurfaceBuilders {

class CappedSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // CappedSurfaceBuilder inner types declare
    // clang-format off
    class MaterialHelper;
    // clang-format on

    // CappedSurfaceBuilder inner types define
    class MaterialHelper {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~MaterialHelper() = default;

        virtual bool isFoundationBlock(::Block const& block) const;

        virtual bool isWaterBlock(::Block const& block) const;

        virtual bool isLavaBlock(::Block const& block) const;

        virtual bool isSolidBlock(::Block const& block) const;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $isFoundationBlock(::Block const& block) const;

        MCNAPI bool $isWaterBlock(::Block const& block) const;

        MCNAPI bool $isLavaBlock(::Block const& block) const;

        MCNAPI bool $isSolidBlock(::Block const& block) const;


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1ee40d;
    ::ll::UntypedStorage<8, 8> mUnk5234e5;
    ::ll::UntypedStorage<8, 8> mUnkdfa19e;
    // NOLINTEND

public:
    // prevent constructor by default
    CappedSurfaceBuilder& operator=(CappedSurfaceBuilder const&);
    CappedSurfaceBuilder(CappedSurfaceBuilder const&);
    CappedSurfaceBuilder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initBuilder(uint levelSeed) /*override*/;

    virtual void initBiomeSurface(::Biome& biome) const /*override*/;

    virtual bool isBestBuilder(::Biome const& biome) const /*override*/;

    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;

    virtual ~CappedSurfaceBuilder() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initBuilder(uint levelSeed);

    MCNAPI void $initBiomeSurface(::Biome& biome) const;

    MCNAPI bool $isBestBuilder(::Biome const& biome) const;

    MCNAPI void $buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders
