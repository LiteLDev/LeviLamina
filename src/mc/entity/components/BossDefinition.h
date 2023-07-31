#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BossDefinition {

public:
    // prevent constructor by default
    BossDefinition& operator=(BossDefinition const&) = delete;
    BossDefinition(BossDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BossDefinition\@\@QEAA\@XZ
     */
    MCAPI BossDefinition();
    /**
     * @symbol
     * ?buildSchema\@BossDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBossDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BossDefinition>>&);
    /**
     * @symbol ?initialize\@BossDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBossComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class BossComponent&) const;
    // NOLINTEND
};
