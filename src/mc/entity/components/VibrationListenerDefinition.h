#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VibrationListenerDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENERDEFINITION
public:
    VibrationListenerDefinition& operator=(VibrationListenerDefinition const&) = delete;
    VibrationListenerDefinition(VibrationListenerDefinition const&)            = delete;
    VibrationListenerDefinition()                                              = delete;
#endif

public:
    /**
     * @symbol ?initialize\@VibrationListenerDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol
     * ?buildSchema\@VibrationListenerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VVibrationListenerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class VibrationListenerDefinition>>&);
};
