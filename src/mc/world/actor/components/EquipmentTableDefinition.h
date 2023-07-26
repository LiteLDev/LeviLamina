#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EquipmentTableDefinition {

public:
    // prevent constructor by default
    EquipmentTableDefinition& operator=(EquipmentTableDefinition const&) = delete;
    EquipmentTableDefinition(EquipmentTableDefinition const&)            = delete;
    EquipmentTableDefinition()                                           = delete;

public:
    /**
     * @symbol
     * ?buildSchema\@EquipmentTableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UEquipmentTableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      struct EquipmentTableDefinition>>&); // NOLINT
};
