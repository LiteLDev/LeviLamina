#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DashDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DASHDEFINITION
public:
    DashDefinition& operator=(DashDefinition const&) = delete;
    DashDefinition(DashDefinition const&)            = delete;
    DashDefinition()                                 = delete;
#endif

public:
    /**
     * @symbol ?initialize\@DashDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDashComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DashComponent&) const;
    /**
     * @symbol ?uninitialize\@DashDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDashComponent\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&, class DashComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@DashDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDashDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DashDefinition>>&);
};
