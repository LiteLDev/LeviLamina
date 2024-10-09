#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/world/actor/ActorDefinitionParseStatus.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorDefinition {
public:
    // prevent constructor by default
    ActorDefinition& operator=(ActorDefinition const&);
    ActorDefinition(ActorDefinition const&);
    ActorDefinition();

public:
    // NOLINTBEGIN
    MCAPI explicit ActorDefinition(std::string const& id);

    MCAPI ::ActorDefinitionParseStatus parse(
        struct DeserializeDataParams     deserializeDataParams,
        class ActorDefinitionDescriptor& desc,
        class ActorFactory&              actorFactory,
        ::LogArea                        logArea
    );

    MCAPI void
    parseAttributes(struct DeserializeDataParams deserializeDataParams, class ActorDefinitionDescriptor& desc);

    MCAPI void parseEntityDescription(struct DeserializeDataParams deserializeDataParams);

    MCAPI void parseEvents(
        class Json::Value const&         root,
        class SemVersion const&          engineVersion,
        class SemVersion const&          formatVersion,
        class ActorEventResponseFactory* responseFactory
    );

    MCAPI void parsePermutations(
        class Json::Value&      permutations,
        class SemVersion const& formatVersion,
        class SemVersion const& engineVersion,
        class ActorFactory&     actorFactory
    );

    MCAPI bool validatePermutationJson(class Json::Value& permutationValue);

    MCAPI ~ActorDefinition();

    // NOLINTEND
};
