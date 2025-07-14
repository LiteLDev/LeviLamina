#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class ActorDefinitionDescriptor;
struct ActorMigratedDefinitionCustomData;
struct DeserializeDataSettings;
struct LegacyGoalDefinition;
namespace SharedTypes::Legacy { struct ActorDocument; }
namespace SharedTypes::v1_21_90 { struct ActorDefinitions; }
namespace SharedTypes::v1_21_90 { struct ActorDocument; }
namespace cereal { class DynamicValue; }
// clang-format on

class ActorMigratedDefinitionFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb29052;
    ::ll::UntypedStorage<8, 64> mUnk322222;
    ::ll::UntypedStorage<8, 24> mUnk50cbad;
    ::ll::UntypedStorage<8, 24> mUnk9c554c;
    ::ll::UntypedStorage<8, 24> mUnk42574f;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorMigratedDefinitionFactory& operator=(ActorMigratedDefinitionFactory const&);
    ActorMigratedDefinitionFactory(ActorMigratedDefinitionFactory const&);
    ActorMigratedDefinitionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void customizeUpgrader_v1_21_90(
        ::Puv::CerealUpgrader<
            ::SharedTypes::Legacy::ActorDocument,
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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
