#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct VibrationDamperDefinition {

public:
    // prevent constructor by default
    VibrationDamperDefinition& operator=(VibrationDamperDefinition const&) = delete;
    VibrationDamperDefinition(VibrationDamperDefinition const&)            = delete;
    VibrationDamperDefinition()                                            = delete;

public:
    /**
     * @symbol
     * ?buildSchema\@VibrationDamperDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UVibrationDamperDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      struct VibrationDamperDefinition>>&); // NOLINT
};
