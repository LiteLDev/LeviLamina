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
class HashedString;
class IJsonDefinitionSerializer;
class SemVersion;
struct DeserializeDataSettings;
struct LegacyGoalDefinition;
namespace JsonComponentGlueUtils { struct ActorLoaderTraits; }
namespace JsonComponentGlueUtils { struct CustomUpgradeData; }
namespace SharedTypes::Legacy { struct ActorDocumentCorrected; }
namespace SharedTypes::v1_21_100 { struct ActorDocument; }
namespace SharedTypes::v1_21_110 { struct ActorDocument; }
namespace SharedTypes::v1_21_120 { struct ActorDocument; }
namespace SharedTypes::v1_21_130 { struct ActorDefinitions; }
namespace SharedTypes::v1_21_130 { struct ActorDocument; }
namespace SharedTypes::v1_21_90 { struct ActorDocument; }
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

    using FillDefinitionCb = ::std::function<
        ::ActorMigratedDefinitionFactory::
            InitResult(::ActorDefinitionDescriptor&, ::SharedTypes::v1_21_130::ActorDefinitions&, ::JsonBetaState)>;

    using FillDescriptionCb = ::ActorMigratedDefinitionFactory::InitResult (*)(
        ::ActorDefinition&,
        ::ActorDefinitionDescriptor&,
        ::SharedTypes::v1_21_130::ActorDefinitions&
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
            ::SharedTypes::v1_21_130::ActorDefinitions&
        )>>
        mFillActorDescriptionCbs;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<::ActorMigratedDefinitionFactory::InitResult(
            ::ActorDefinitionDescriptor&,
            ::SharedTypes::v1_21_130::ActorDefinitions&,
            ::JsonBetaState
        )>>>
        mFillActorDefinitionCbs;
    ::ll::TypedStorage<
        8,
        120,
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
    // member functions
    // NOLINTBEGIN
    MCAPI void _bindActorDocumentTypes();

    MCAPI void _initialize();

    MCAPI ::IJsonDefinitionSerializer* _tryGetDefinitionSerializer(::std::string_view name) const;

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
