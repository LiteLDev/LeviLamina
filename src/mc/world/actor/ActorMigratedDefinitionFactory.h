#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class ActorDefinitionDescriptor;
class IJsonDefinitionSerializer;
struct ActorMigratedDefinitionCustomData;
struct DeserializeDataSettings;
struct LegacyGoalDefinition;
namespace SharedTypes::Legacy { struct ActorDocument; }
namespace SharedTypes::Legacy { struct ActorDocumentCorrected; }
namespace SharedTypes::v1_21_100 { struct ActorDefinitions; }
namespace SharedTypes::v1_21_100 { struct ActorDocument; }
namespace SharedTypes::v1_21_90 { struct ActorDocument; }
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorMigratedDefinitionFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb29052;
    ::ll::UntypedStorage<8, 64> mUnk322222;
    ::ll::UntypedStorage<8, 24> mUnk47cdab;
    ::ll::UntypedStorage<8, 24> mUnk60cd24;
    ::ll::UntypedStorage<8, 24> mUnke308f5;
    ::ll::UntypedStorage<8, 24> mUnk87cd52;
    ::ll::UntypedStorage<8, 16> mUnka1ca7f;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorMigratedDefinitionFactory& operator=(ActorMigratedDefinitionFactory const&);
    ActorMigratedDefinitionFactory(ActorMigratedDefinitionFactory const&);
    ActorMigratedDefinitionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorMigratedDefinitionFactory(::cereal::ReflectionCtx& ctx);

    MCNAPI ::IJsonDefinitionSerializer* _tryGetDefinitionSerializer(::std::string_view name) const;

    MCNAPI void customizeUpgrader_v1_21_100(
        ::Puv::CerealUpgrader<
            ::SharedTypes::v1_21_90::ActorDocument,
            ::SharedTypes::v1_21_100::ActorDocument,
            ::ActorMigratedDefinitionCustomData const&>& upgrader
    ) const;

    MCNAPI void customizeUpgrader_v1_21_89(
        ::Puv::CerealUpgrader<
            ::SharedTypes::Legacy::ActorDocument,
            ::SharedTypes::Legacy::ActorDocumentCorrected,
            ::ActorMigratedDefinitionCustomData const&>& upgrader
    ) const;

    MCNAPI void customizeUpgrader_v1_21_90(
        ::Puv::CerealUpgrader<
            ::SharedTypes::Legacy::ActorDocumentCorrected,
            ::SharedTypes::v1_21_90::ActorDocument,
            ::ActorMigratedDefinitionCustomData const&>& upgrader
    ) const;

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
    MCNAPI void* $ctor(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
