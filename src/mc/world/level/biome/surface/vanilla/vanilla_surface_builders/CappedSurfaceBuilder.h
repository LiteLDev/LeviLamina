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
        // prevent constructor by default
        MaterialHelper& operator=(MaterialHelper const&);
        MaterialHelper(MaterialHelper const&);
        MaterialHelper();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~MaterialHelper() = default;

        // vIndex: 1
        virtual bool isFoundationBlock(::Block const& block) const;

        // vIndex: 2
        virtual bool isWaterBlock(::Block const& block) const;

        // vIndex: 3
        virtual bool isSolidBlock(::Block const& block) const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI bool $isFoundationBlock(::Block const& block) const;

        MCAPI bool $isWaterBlock(::Block const& block) const;

        MCAPI bool $isSolidBlock(::Block const& block) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void init(::Biome& biome, uint levelSeed) /*override*/;

    // vIndex: 2
    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;

    // vIndex: 0
    virtual ~CappedSurfaceBuilder() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CappedSurfaceBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(::Biome& biome, uint levelSeed);

    MCAPI void $buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders
