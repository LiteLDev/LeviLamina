#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
namespace SharedTypes::v1_20_60 { struct IBiomeJsonComponent; }
// clang-format on

struct MesaSurfaceBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdbee4d;
    ::ll::UntypedStorage<8, 8> mUnk66bd7c;
    ::ll::UntypedStorage<8, 8> mUnka30f5a;
    ::ll::UntypedStorage<8, 8> mUnkcb30a2;
    ::ll::UntypedStorage<8, 8> mUnk318d22;
    ::ll::UntypedStorage<8, 8> mUnkcb23d4;
    ::ll::UntypedStorage<8, 8> mUnke18a51;
    // NOLINTEND

public:
    // prevent constructor by default
    MesaSurfaceBiomeComponentGlue& operator=(MesaSurfaceBiomeComponentGlue const&);
    MesaSurfaceBiomeComponentGlue(MesaSurfaceBiomeComponentGlue const&);
    MesaSurfaceBiomeComponentGlue();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool resolveAndValidate(
        ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent,
        ::BiomeRegistry const&
    ) /*override*/;

    // vIndex: 2
    virtual void
    applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const
        /*override*/;

    // vIndex: 0
    virtual ~MesaSurfaceBiomeComponentGlue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent, ::BiomeRegistry const&);

    MCNAPI void
    $applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
