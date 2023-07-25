#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ScaleByAgeDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCALEBYAGEDEFINITION
public:
    ScaleByAgeDefinition& operator=(ScaleByAgeDefinition const&) = delete;
    ScaleByAgeDefinition(ScaleByAgeDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ScaleByAgeDefinition\@\@QEAA\@XZ
     */
    MCAPI ScaleByAgeDefinition();
    /**
     * @symbol ?initialize\@ScaleByAgeDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVScaleByAgeComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ScaleByAgeComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@ScaleByAgeDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VScaleByAgeDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ScaleByAgeDefinition>>&);
};
