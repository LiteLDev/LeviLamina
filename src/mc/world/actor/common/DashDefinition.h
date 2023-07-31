#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DashDefinition {

public:
    // prevent constructor by default
    DashDefinition& operator=(DashDefinition const&) = delete;
    DashDefinition(DashDefinition const&)            = delete;
    DashDefinition()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?buildSchema\@DashDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDashDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DashDefinition>>&);
    /**
     * @symbol ?initialize\@DashDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDashComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DashComponent&) const;
    /**
     * @symbol ?uninitialize\@DashDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDashComponent\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&, class DashComponent&) const;
    // NOLINTEND
};
