#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HitboxDefinition {

public:
    // prevent constructor by default
    HitboxDefinition& operator=(HitboxDefinition const&) = delete;
    HitboxDefinition(HitboxDefinition const&)            = delete;
    HitboxDefinition()                                   = delete;

public:
    /**
     * @symbol ?addAABB\@HitboxDefinition\@\@QEAAXAEBUHitboxJson\@\@\@Z
     */
    MCAPI void addAABB(struct HitboxJson const&); // NOLINT
    /**
     * @symbol ?initialize\@HitboxDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVHitboxComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class HitboxComponent&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@HitboxDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VHitboxDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HitboxDefinition>>&); // NOLINT
};
