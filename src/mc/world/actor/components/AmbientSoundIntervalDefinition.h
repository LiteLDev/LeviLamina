#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct AmbientSoundIntervalDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMBIENTSOUNDINTERVALDEFINITION
public:
    AmbientSoundIntervalDefinition& operator=(AmbientSoundIntervalDefinition const&) = delete;
    AmbientSoundIntervalDefinition(AmbientSoundIntervalDefinition const&)            = delete;
    AmbientSoundIntervalDefinition()                                                 = delete;
#endif

public:
    /**
     * @symbol ?addDynamic\@AmbientSoundIntervalDefinition\@\@QEAAXAEBUDynamicAmbientSound\@\@\@Z
     */
    MCAPI void addDynamic(struct DynamicAmbientSound const&);
    /**
     * @symbol
     * ?initialize\@AmbientSoundIntervalDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAmbientSoundServerComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class AmbientSoundServerComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@AmbientSoundIntervalDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UAmbientSoundIntervalDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      struct AmbientSoundIntervalDefinition>>&);
};
