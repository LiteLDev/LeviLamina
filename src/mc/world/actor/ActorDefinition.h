#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDefinitionParseStatus.h"
#include "mc/enums/LogArea.h"

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
    // symbol: ??0ActorDefinition@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit ActorDefinition(std::string const& id);

    // symbol:
    // ?parse@ActorDefinition@@QEAA?AW4ActorDefinitionParseStatus@@UDeserializeDataParams@@AEAVActorDefinitionDescriptor@@AEAVActorFactory@@W4LogArea@@@Z
    MCAPI ::ActorDefinitionParseStatus parse(
        struct DeserializeDataParams     deserializeDataParams,
        class ActorDefinitionDescriptor& desc,
        class ActorFactory&              actorFactory,
        ::LogArea                        logArea
    );

    // symbol: ?parseAttributes@ActorDefinition@@QEAAXUDeserializeDataParams@@AEAVActorDefinitionDescriptor@@@Z
    MCAPI void
    parseAttributes(struct DeserializeDataParams deserializeDataParams, class ActorDefinitionDescriptor& desc);

    // symbol: ?parseEntityDescription@ActorDefinition@@QEAAXUDeserializeDataParams@@@Z
    MCAPI void parseEntityDescription(struct DeserializeDataParams deserializeDataParams);

    // symbol: ?parseEvents@ActorDefinition@@QEAAXAEBVValue@Json@@AEBVSemVersion@@1PEAVActorEventResponseFactory@@@Z
    MCAPI void parseEvents(
        class Json::Value const&         root,
        class SemVersion const&          engineVersion,
        class SemVersion const&          formatVersion,
        class ActorEventResponseFactory* responseFactory
    );

    // symbol: ?parsePermutations@ActorDefinition@@QEAAXAEAVValue@Json@@AEBVSemVersion@@1AEAVActorFactory@@@Z
    MCAPI void parsePermutations(
        class Json::Value&,
        class SemVersion const& formatVersion,
        class SemVersion const& engineVersion,
        class ActorFactory&     actorFactory
    );

    // symbol: ?validatePermutationJson@ActorDefinition@@QEAA_NAEAVValue@Json@@@Z
    MCAPI bool validatePermutationJson(class Json::Value&);

    // symbol: ??1ActorDefinition@@QEAA@XZ
    MCAPI ~ActorDefinition();

    // NOLINTEND
};
