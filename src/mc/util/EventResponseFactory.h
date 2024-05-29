#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EventResponseFactory {
public:
    // prevent constructor by default
    EventResponseFactory& operator=(EventResponseFactory const&);
    EventResponseFactory(EventResponseFactory const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EventResponseFactory@@UEAA@XZ
    virtual ~EventResponseFactory();

    // vIndex: 1, symbol: ?initializeFactory@BlockEventResponseFactory@@UEAAXAEBVExperiments@@@Z
    virtual void initializeFactory(class Experiments const& experiments) = 0;

    // vIndex: 2, symbol: ?initSchema@BlockEventResponseFactory@@UEAAXXZ
    virtual void initSchema() = 0;

    // symbol: ??0EventResponseFactory@@QEAA@XZ
    MCAPI EventResponseFactory();

    // symbol:
    // ?getSchema@EventResponseFactory@@QEBAAEBV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@XZ
    MCAPI std::shared_ptr<
        class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> const&
    getSchema() const;

    // symbol:
    // ?initSchema@EventResponseFactory@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@@Z
    MCAPI void initSchema(std::string const& schemaName, class SemVersion const& version);

    // NOLINTEND
};
