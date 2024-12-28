#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class CompoundTag;
class IWorldRegistriesProvider;
struct BiomeJsonDocumentGlue;
// clang-format on

class BiomeComponentFactory {
public:
    // BiomeComponentFactory inner types define
    enum class FactoryScope : int {
        Client = 0,
        Server = 1,
    };

    enum class ComponentScope : int {
        Client          = 0,
        Server          = 1,
        ClientAndServer = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf669f8;
    ::ll::UntypedStorage<8, 24> mUnkd8de80;
    ::ll::UntypedStorage<4, 4>  mUnkf09523;
    ::ll::UntypedStorage<1, 1>  mUnkbf5004;
    ::ll::UntypedStorage<1, 1>  mUnk489c98;
    ::ll::UntypedStorage<8, 16> mUnk7fbe74;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeComponentFactory& operator=(BiomeComponentFactory const&);
    BiomeComponentFactory(BiomeComponentFactory const&);
    BiomeComponentFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BiomeJsonDocumentGlue& getBiomeJsonDocumentGlue();

    MCAPI void registrationFinished();

    MCAPI void
    writeComponentsToTag(::Biome const& biome, ::IWorldRegistriesProvider const& lookupProvider, ::CompoundTag& tag)
        const;

    MCAPI ~BiomeComponentFactory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
