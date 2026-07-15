#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BiomeFilterGroup.h"
#include "mc/world/level/biome/components/BiomeDecorationFeature.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class HashedString;
class IMinecraftEventing;
class IWorldRegistriesProvider;
class ResourcePackManager;
namespace SharedTypes::v1_21_20 { struct AutomaticFeatureRulesData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class AutomaticFeatureRules {
public:
    // AutomaticFeatureRules inner types declare
    // clang-format off
    struct AutomaticFeatureRule;
    // clang-format on

    // AutomaticFeatureRules inner types define
    struct AutomaticFeatureRule {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 328, ::BiomeDecorationFeature> mAutoFeature;
        ::ll::TypedStorage<8, 64, ::BiomeFilterGroup>        mBiomeFilter;
        // NOLINTEND
    };

    using AutomaticFeaturePriorityList = ::std::unordered_map<
        ::std::string,
        ::std::unordered_map<::HashedString, ::AutomaticFeatureRules::AutomaticFeatureRule>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_20::AutomaticFeatureRulesData,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::v1_21_20::AutomaticFeatureRulesData>>
                                                    mLoader;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomaticFeatureRules& operator=(AutomaticFeatureRules const&);
    AutomaticFeatureRules(AutomaticFeatureRules const&);
    AutomaticFeatureRules();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AutomaticFeatureRules(::cereal::ReflectionCtx const& ctx, ::IMinecraftEventing& eventing);

    MCAPI void attachAutomaticFeatures(
        ::ResourcePackManager&                                          resourcePackManager,
        ::IWorldRegistriesProvider&                                     worldRegistries,
        ::std::unordered_map<::HashedString, ::BiomeDecorationFeature>& biomeDecorationFeatureMap
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::IMinecraftEventing& eventing);
    // NOLINTEND
};
