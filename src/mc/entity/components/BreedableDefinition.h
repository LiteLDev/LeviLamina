#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreedableDefinition {

public:
    // prevent constructor by default
    BreedableDefinition& operator=(BreedableDefinition const&) = delete;
    BreedableDefinition(BreedableDefinition const&)            = delete;

public:
    /**
     * @symbol ??0BreedableDefinition\@\@QEAA\@XZ
     */
    MCAPI BreedableDefinition(); // NOLINT
    /**
     * @symbol ?addBreedItem\@BreedableDefinition\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void addBreedItem(class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ?addBreedableType\@BreedableDefinition\@\@QEAAXAEBUBreedableType\@\@\@Z
     */
    MCAPI void addBreedableType(struct BreedableType const&); // NOLINT
    /**
     * @symbol ?addEnvironmentRequirement\@BreedableDefinition\@\@QEAAXAEBUEnvironmentRequirement\@\@\@Z
     */
    MCAPI void addEnvironmentRequirement(struct EnvironmentRequirement const&); // NOLINT
    /**
     * @symbol
     * ?addParentCentricAttributeBlending\@BreedableDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addParentCentricAttributeBlending(std::string const&); // NOLINT
    /**
     * @symbol ?initialize\@BreedableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBreedableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class BreedableComponent&) const; // NOLINT
    /**
     * @symbol
     * ?setMutationStrategy\@BreedableDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setMutationStrategy(std::string const&); // NOLINT
    /**
     * @symbol ??1BreedableDefinition\@\@QEAA\@XZ
     */
    MCAPI ~BreedableDefinition(); // NOLINT
    /**
     * @symbol
     * ?buildSchema\@BreedableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBreedableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class BreedableDefinition>>&); // NOLINT
};
