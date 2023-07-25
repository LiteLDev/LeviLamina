#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreathableDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREATHABLEDEFINITION
public:
    BreathableDefinition& operator=(BreathableDefinition const&) = delete;
    BreathableDefinition(BreathableDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0BreathableDefinition\@\@QEAA\@XZ
     */
    MCAPI BreathableDefinition();
    /**
     * @symbol ?addBreathableBlockDescriptor\@BreathableDefinition\@\@QEAAXAEBVBlockDescriptor\@\@\@Z
     */
    MCAPI void addBreathableBlockDescriptor(class BlockDescriptor const&);
    /**
     * @symbol ?addNonBreathableBlockDescriptor\@BreathableDefinition\@\@QEAAXAEBVBlockDescriptor\@\@\@Z
     */
    MCAPI void addNonBreathableBlockDescriptor(class BlockDescriptor const&);
    /**
     * @symbol ?initialize\@BreathableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBreathableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class BreathableComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@BreathableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBreathableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreathableDefinition>>&);
};
