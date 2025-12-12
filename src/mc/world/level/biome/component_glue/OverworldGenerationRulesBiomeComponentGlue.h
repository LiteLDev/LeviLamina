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

struct OverworldGenerationRulesBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk59e8dd;
    ::ll::UntypedStorage<8, 24> mUnk6573f3;
    ::ll::UntypedStorage<8, 24> mUnk733fd8;
    ::ll::UntypedStorage<8, 24> mUnk76939f;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldGenerationRulesBiomeComponentGlue& operator=(OverworldGenerationRulesBiomeComponentGlue const&);
    OverworldGenerationRulesBiomeComponentGlue(OverworldGenerationRulesBiomeComponentGlue const&);
    OverworldGenerationRulesBiomeComponentGlue();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool resolveAndValidate(
        ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent,
        ::BiomeRegistry const&                              biomeRegistry
    ) /*override*/;

    virtual void
    applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const
        /*override*/;

    virtual ~OverworldGenerationRulesBiomeComponentGlue() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $resolveAndValidate(
        ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent,
        ::BiomeRegistry const&                              biomeRegistry
    );

    MCNAPI void
    $applyToBiome(::Biome& biome, ::SharedTypes::v1_20_60::IBiomeJsonComponent const& biomeJsonComponent) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
