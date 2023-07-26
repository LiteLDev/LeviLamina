#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LeashableDefinition {

public:
    // prevent constructor by default
    LeashableDefinition& operator=(LeashableDefinition const&) = delete;
    LeashableDefinition(LeashableDefinition const&)            = delete;

public:
    /**
     * @symbol ??0LeashableDefinition\@\@QEAA\@XZ
     */
    MCAPI LeashableDefinition(); // NOLINT
    /**
     * @symbol
     * ?buildSchema\@LeashableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VLeashableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class LeashableDefinition>>&); // NOLINT
};
