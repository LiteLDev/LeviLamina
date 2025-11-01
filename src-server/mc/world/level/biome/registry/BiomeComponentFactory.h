#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"

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
    // BiomeComponentFactory inner types define
    using SerializeToDataFunc = ::std::function<void(::Biome const&, ::BiomeDefinitionData&, bool, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const&, ::FeatureRegistry const&, ::BiomeStringList&)>;
    
    using ApplySerializedDataFunc = ::std::function<void(::BiomeDefinitionData const&, ::Biome&, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>&, ::BlockPalette const&, ::BiomeRegistry const&, ::FeatureRegistry&, ::BiomeStringList const&)>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::BiomeJsonDocumentGlue> mBiomeJsonDocumentGlue;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Biome const&, ::BiomeDefinitionData&, bool, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const&, ::FeatureRegistry const&, ::BiomeStringList&)>> mSerializeToDataFunc;
    ::ll::TypedStorage<8, 64, ::std::function<void(::BiomeDefinitionData const&, ::Biome&, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>&, ::BlockPalette const&, ::BiomeRegistry const&, ::FeatureRegistry&, ::BiomeStringList const&)>> mApplyFromDataFunc;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void registerBiomeDefinitionSerializers(::std::function<void(::Biome const&, ::BiomeDefinitionData&, bool, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const&, ::FeatureRegistry const&, ::BiomeStringList&)> serializeToData, ::std::function<void(::BiomeDefinitionData const&, ::Biome&, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>&, ::BlockPalette const&, ::BiomeRegistry const&, ::FeatureRegistry&, ::BiomeStringList const&)> applyFromData);
    // NOLINTEND

};
