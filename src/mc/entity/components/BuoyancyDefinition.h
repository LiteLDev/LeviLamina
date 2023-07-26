#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BuoyancyDefinition {

public:
    // prevent constructor by default
    BuoyancyDefinition& operator=(BuoyancyDefinition const&) = delete;
    BuoyancyDefinition(BuoyancyDefinition const&)            = delete;

public:
    /**
     * @symbol ??0BuoyancyDefinition\@\@QEAA\@XZ
     */
    MCAPI BuoyancyDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@BuoyancyDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBuoyancyComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class BuoyancyComponent&) const; // NOLINT
    /**
     * @symbol ?uninitialize\@BuoyancyDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBuoyancyComponent\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&, class BuoyancyComponent&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@BuoyancyDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBuoyancyDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BuoyancyDefinition>>&); // NOLINT

    // private:
    /**
     * @symbol ?_addLiquidBlockDescriptor\@BuoyancyDefinition\@\@AEAAXAEBVBlockDescriptor\@\@\@Z
     */
    MCAPI void _addLiquidBlockDescriptor(class BlockDescriptor const&); // NOLINT
    /**
     * @symbol ?_serialize\@BuoyancyDefinition\@\@AEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value _serialize() const; // NOLINT

private:
};
