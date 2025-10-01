#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/SlicedLoader.h"
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class ActorDefinitionDescriptor;
class BedrockLoadContext;
class IJsonDefinitionSerializer;
struct ActorMigratedDefinitionCustomData;
struct DeserializeDataSettings;
struct LegacyGoalDefinition;
namespace SharedTypes::Legacy { struct ActorDocument; }
namespace SharedTypes::Legacy { struct ActorDocumentCorrected; }
namespace SharedTypes::v1_21_100 { struct ActorDocument; }
namespace SharedTypes::v1_21_110 { struct ActorDefinitions; }
namespace SharedTypes::v1_21_110 { struct ActorDocument; }
namespace SharedTypes::v1_21_90 { struct ActorDocument; }
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
    ::ll::UntypedStorage<8, 24>  mUnke94062;
    ::ll::UntypedStorage<8, 24>  mUnkb5abb3;
    ::ll::UntypedStorage<8, 72>  mUnke5381a;
    ::ll::UntypedStorage<8, 16>  mUnka1ca7f;
    ::ll::UntypedStorage<8, 8>   mUnk7329b0;
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
