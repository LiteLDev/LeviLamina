#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace VanillaSurfaceBuilders {

class NetherSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // NetherSurfaceBuilder inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // NetherSurfaceBuilder inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkd93d92;
        ::ll::UntypedStorage<8, 8> mUnk5568d2;
        ::ll::UntypedStorage<8, 8> mUnk66c612;
        ::ll::UntypedStorage<8, 8> mUnk7ce050;
        ::ll::UntypedStorage<8, 8> mUnkc3cf77;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalRegistry& operator=(LocalRegistry const&);
        LocalRegistry(LocalRegistry const&);
        LocalRegistry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9a2cfd;
    ::ll::UntypedStorage<8, 40> mUnk124b4b;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherSurfaceBuilder& operator=(NetherSurfaceBuilder const&);
    NetherSurfaceBuilder(NetherSurfaceBuilder const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void init(::Biome&, uint levelSeed) /*override*/;

    // vIndex: 2
    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const /*override*/;

    // vIndex: 0
    virtual ~NetherSurfaceBuilder() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetherSurfaceBuilder();
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
    MCAPI void $init(::Biome&, uint levelSeed);

    MCAPI void $buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders
