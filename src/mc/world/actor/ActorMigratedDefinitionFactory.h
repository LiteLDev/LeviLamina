#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/puv/ComponentStorageLoadDataRefVariant.h"
#include "mc/deps/puv/LoadResultBetaVariant.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class ActorDefinitionDescriptor;
class BedrockLoadContext;
class Experiments;
class IJsonDefinitionSerializer;
class SemVersion;
struct DeserializeDataSettings;
struct LegacyGoalDefinition;
namespace JsonComponentGlueUtils { struct ActorLoaderTraits; }
namespace JsonComponentGlueUtils { struct CustomUpgradeData; }
namespace Puv { class Input; }
namespace SharedTypes::Beta { struct ActorDefinitions; }
namespace SharedTypes::Beta { struct ActorDocument; }
namespace SharedTypes::Legacy { struct ActorDocument; }
namespace SharedTypes::Legacy { struct ActorDocumentCorrected; }
namespace SharedTypes::v1_21_100 { struct ActorDocument; }
namespace SharedTypes::v1_21_110 { struct ActorDocument; }
namespace SharedTypes::v1_21_120 { struct ActorDocument; }
namespace SharedTypes::v1_21_130 { struct ActorDocument; }
namespace SharedTypes::v1_21_90 { struct ActorDocument; }
namespace SharedTypes::v1_26_0 { struct ActorDocument; }
namespace SharedTypes::v1_26_10 { struct ActorDocument; }
namespace SharedTypes::v1_26_20 { struct ActorDefinitions; }
namespace SharedTypes::v1_26_20 { struct ActorDocument; }
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorMigratedDefinitionFactory {
public:
    // ActorMigratedDefinitionFactory inner types define
    enum class InitResult : int {
        Success                = 0,
        BetaFeaturesNotEnabled = 1,
    };

    using FillDefinitionCb = ::std::function<::ActorMigratedDefinitionFactory::InitResult(
        ::ActorDefinitionDescriptor&,
        ::ComponentStorageLoadDataRefVariant<
            ::SharedTypes::v1_26_20::ActorDefinitions,
            ::SharedTypes::Beta::ActorDefinitions>,
        ::JsonBetaState
    )>;

    using FillDescriptionCb = ::ActorMigratedDefinitionFactory::InitResult (*)(
        ::ActorDefinition&,
        ::ActorDefinitionDescriptor&,
        ::ComponentStorageLoadDataRefVariant<
            ::SharedTypes::v1_26_20::ActorDefinitions,
            ::SharedTypes::Beta::ActorDefinitions>
    );

    using LoaderPtr =
        ::std::unique_ptr<::Bedrock::Resources::CategoryLoader<::JsonComponentGlueUtils::ActorLoaderTraits>>;

    using PuvLoader = ::Bedrock::Resources::CategoryLoader<::JsonComponentGlueUtils::ActorLoaderTraits>;

    using SerializerPtr = ::std::unique_ptr<::IJsonDefinitionSerializer>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::ReflectionCtx>> mCerealContext;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::unique_ptr<::IJsonDefinitionSerializer>>>
        mDefinitionSerializers;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::ActorMigratedDefinitionFactory::InitResult (*)(
            ::ActorDefinition&,
            ::ActorDefinitionDescriptor&,
            ::ComponentStorageLoadDataRefVariant<
                ::SharedTypes::v1_26_20::ActorDefinitions,
                ::SharedTypes::Beta::ActorDefinitions>
        )>>
        mFillActorDescriptionCbs;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<::ActorMigratedDefinitionFactory::InitResult(
            ::ActorDefinitionDescriptor&,
            ::ComponentStorageLoadDataRefVariant<
                ::SharedTypes::v1_26_20::ActorDefinitions,
                ::SharedTypes::Beta::ActorDefinitions>,
            ::JsonBetaState
        )>>>
        mFillActorDefinitionCbs;
    ::ll::TypedStorage<
        8,
        216,
        ::std::tuple<
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::Legacy::ActorDocumentCorrected,
                                   ::SharedTypes::v1_21_90::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_21_90::ActorDocument,
                                   ::SharedTypes::v1_21_100::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_21_100::ActorDocument,
                                   ::SharedTypes::v1_21_110::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_21_110::ActorDocument,
                                   ::SharedTypes::v1_21_120::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_21_120::ActorDocument,
                                   ::SharedTypes::v1_21_130::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_21_130::ActorDocument,
                                   ::SharedTypes::v1_26_0::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_26_0::ActorDocument,
                                   ::SharedTypes::v1_26_10::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_26_10::ActorDocument,
                                   ::SharedTypes::v1_26_20::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_26_20::ActorDocument,
                                   ::SharedTypes::Beta::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>>>
                                                                        mLegacyUpgradeCallbacks;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::SemVersion>> mVersionedDefinitions;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::Resources::CategoryLoader<::JsonComponentGlueUtils::ActorLoaderTraits>>>
        mDocumentLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorMigratedDefinitionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorMigratedDefinitionFactory(::Experiments const& experiments);

    MCAPI void _bindActorDocumentTypes();

    MCAPI void _initialize(::Experiments const&);

    MCAPI ::IJsonDefinitionSerializer* _tryGetDefinitionSerializer(::std::string_view name) const;

    MCAPI void applyLegacyUpgradeCallbacks_v1_21_89(
        ::Puv::CerealUpgrader<
            ::SharedTypes::Legacy::ActorDocument,
            ::SharedTypes::Legacy::ActorDocumentCorrected,
            ::JsonComponentGlueUtils::CustomUpgradeData const&>& upgrader
    ) const;

    MCAPI ::ActorMigratedDefinitionFactory::InitResult fillActorDefinition(
        ::ActorDefinition&           def,
        ::ActorDefinitionDescriptor& desc,
        ::ComponentStorageLoadDataRefVariant<
            ::SharedTypes::v1_26_20::ActorDefinitions,
            ::SharedTypes::Beta::ActorDefinitions> components,
        ::JsonBetaState                            canUseBeta
    ) const;

    MCAPI ::Puv::LoadResultBetaVariant<::SharedTypes::v1_26_20::ActorDocument, ::SharedTypes::Beta::ActorDocument>
    loadDocument(::Puv::Input const& input, ::SemVersion const& version, ::Experiments const& experiments) const;

    MCAPI void resetLoader();

    MCAPI void
    setLoaderCustomData(::BedrockLoadContext customParseData, ::DeserializeDataSettings customUpgradeData) const;

    MCAPI ~ActorMigratedDefinitionFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::LegacyGoalDefinition _parseLegacyGoalDefinition(
        ::std::string                    name,
        ::cereal::DynamicValue const&    def,
        ::DeserializeDataSettings const& settings
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Experiments const& experiments);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
