#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class BlockPalette;
class FeatureRegistry;
struct BiomeDefinitionData;
struct BiomeStringList;
struct BiomeTagIDType;
struct BiomeTagSetIDType;
// clang-format on

class BiomeComponentFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7fbe74;
    ::ll::UntypedStorage<8, 64> mUnk9cfa41;
    ::ll::UntypedStorage<8, 64> mUnkfd048a;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeComponentFactory& operator=(BiomeComponentFactory const&);
    BiomeComponentFactory(BiomeComponentFactory const&);
    BiomeComponentFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerBiomeDefinitionSerializers(
        ::std::function<void(
            ::Biome const&,
            ::BiomeDefinitionData&,
            bool,
            ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const&,
            ::FeatureRegistry const&,
            ::BiomeStringList&
        )> serializeToData,
        ::std::function<void(
            ::BiomeDefinitionData const&,
            ::Biome&,
            ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>&,
            ::BlockPalette const&,
            ::BiomeRegistry const&,
            ::FeatureRegistry&,
            ::BiomeStringList const&
        )> applyFromData
    );
    // NOLINTEND
};
