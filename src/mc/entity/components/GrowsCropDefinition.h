#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GrowsCropDefinition {

public:
    // prevent constructor by default
    GrowsCropDefinition& operator=(GrowsCropDefinition const&) = delete;
    GrowsCropDefinition(GrowsCropDefinition const&)            = delete;

public:
    /**
     * @symbol ??0GrowsCropDefinition\@\@QEAA\@XZ
     */
    MCAPI GrowsCropDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@GrowsCropDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVGrowsCropComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class GrowsCropComponent&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@GrowsCropDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VGrowsCropDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class GrowsCropDefinition>>&); // NOLINT
};
