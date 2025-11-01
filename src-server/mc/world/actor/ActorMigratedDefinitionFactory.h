#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class ActorDefinitionDescriptor;
class BedrockLoadContext;
class IJsonDefinitionSerializer;
struct DeserializeDataSettings;
struct LegacyGoalDefinition;
namespace ActorMigratedUtils { struct ActorLoaderTraits; }
namespace SharedTypes::v1_21_120 { struct ActorDefinitions; }
namespace cereal { class DynamicValue; }
// clang-format on

class ActorMigratedDefinitionFactory {
public:
    // ActorMigratedDefinitionFactory inner types define
    enum class InitResult : int {
        Success                = 0,
        BetaFeaturesNotEnabled = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnkc17365;
    ::ll::UntypedStorage<8, 64>  mUnk322222;
    ::ll::UntypedStorage<8, 24>  mUnk43953f;
    ::ll::UntypedStorage<8, 24>  mUnk24e3b7;
    ::ll::UntypedStorage<8, 96>  mUnke046e6;
    ::ll::UntypedStorage<8, 16>  mUnka1ca7f;
    ::ll::UntypedStorage<8, 8>   mUnk77c2be;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorMigratedDefinitionFactory& operator=(ActorMigratedDefinitionFactory const&);
    ActorMigratedDefinitionFactory(ActorMigratedDefinitionFactory const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorMigratedDefinitionFactory();

    MCNAPI void _bindActorDocumentTypes();

    MCNAPI void _initialize();

    MCNAPI ::IJsonDefinitionSerializer* _tryGetDefinitionSerializer(::std::string_view name) const;

    MCNAPI void resetLoader();

    MCNAPI void
    setLoaderCustomData(::BedrockLoadContext customParseData, ::DeserializeDataSettings customUpgradeData) const;

    MCNAPI ~ActorMigratedDefinitionFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::LegacyGoalDefinition _parseLegacyGoalDefinition(
        ::std::string                    name,
        ::cereal::DynamicValue const&    def,
        ::DeserializeDataSettings const& settings
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
