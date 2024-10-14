#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Biome;
class Block;
class BlockVolume;
class ISurfaceBuilder;
class Pos;
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
        // prevent constructor by default
        MaterialHelper& operator=(MaterialHelper const&);
        MaterialHelper(MaterialHelper const&);
        MaterialHelper();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~MaterialHelper() = default;

        // vIndex: 1
        virtual bool isFoundationBlock(class Block const& block) const;

        // vIndex: 2
        virtual bool isWaterBlock(class Block const& block) const;

        // vIndex: 3
        virtual bool isSolidBlock(class Block const& block) const;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI bool isFoundationBlock$(class Block const& block) const;

        MCAPI bool isSolidBlock$(class Block const& block) const;

        MCAPI bool isWaterBlock$(class Block const& block) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CappedSurfaceBuilder& operator=(CappedSurfaceBuilder const&);
    CappedSurfaceBuilder(CappedSurfaceBuilder const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CappedSurfaceBuilder() = default;

    // vIndex: 1
    virtual void init(class Biome& biome, uint levelSeed);

    // vIndex: 2
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    MCAPI CappedSurfaceBuilder();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void addSurfaceMaterial(
        class BlockVolume&                            blockVolume,
        class Pos                                     currentPosition,
        int                                           endHeight,
        std::function<class Block const*(int)> const& getBlockFn
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void buildSurfaceAt$(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    MCAPI void init$(class Biome& biome, uint levelSeed);

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
