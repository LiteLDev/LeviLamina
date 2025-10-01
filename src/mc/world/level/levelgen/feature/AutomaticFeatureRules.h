#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class FeatureRegistry;
class HashedString;
class IMinecraftEventing;
class IWorldRegistriesProvider;
class MinEngineVersion;
class ResourcePackManager;
class SemVersionConstant;
struct BiomeDecorationFeature;
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
        ::ll::UntypedStorage<8, 328> mUnk6ed10e;
        ::ll::UntypedStorage<8, 64>  mUnk9f3a19;
        // NOLINTEND

    public:
        // prevent constructor by default
        AutomaticFeatureRule& operator=(AutomaticFeatureRule const&);
        AutomaticFeatureRule(AutomaticFeatureRule const&);
        AutomaticFeatureRule();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~AutomaticFeatureRule();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnka8c11c;
    ::ll::UntypedStorage<8, 8>   mUnkd6d3f6;
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

    MCAPI void _applyAutomaticFeatureRuleDefinition(
        ::AutomaticFeatureRules::AutomaticFeatureRule&            automaticFeatureRule,
        ::SharedTypes::v1_21_20::AutomaticFeatureRulesData const& automaticFeatureRulesData,
        ::MinEngineVersion const&                                 minEngineVersion,
        ::FeatureRegistry&                                        featureRegistry
    ) const;

    MCAPI ::Puv::LoadResult<::SharedTypes::v1_21_20::AutomaticFeatureRulesData> _parseAndInsertUnsorted(
        ::std::string const&        filename,
        ::std::string&&             data,
        ::MinEngineVersion const&   minEngineVersion,
        ::IWorldRegistriesProvider& worldRegistries,
        ::std::unordered_map<
            ::std::string,
            ::std::unordered_map<::HashedString, ::AutomaticFeatureRules::AutomaticFeatureRule>>& bucketedFeatures,
        bool                                                                                      isBasePack
    ) const;

    MCAPI void attachAutomaticFeatures(
        ::ResourcePackManager&                                          resourcePackManager,
        ::IWorldRegistriesProvider&                                     worldRegistries,
        ::std::unordered_map<::HashedString, ::BiomeDecorationFeature>& biomeDecorationFeatureMap
    ) const;

    MCAPI ::std::unordered_map<
        ::std::string,
        ::std::unordered_map<::HashedString, ::AutomaticFeatureRules::AutomaticFeatureRule>>
    parseAutomaticFeatures(
        ::ServiceReference<::AppPlatform> appPlatform,
        ::ResourcePackManager&            resourcePackManager,
        ::IWorldRegistriesProvider&       worldRegistries
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& SCHEMA_VERSION_1();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::IMinecraftEventing& eventing);
    // NOLINTEND
};
