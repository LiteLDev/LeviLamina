#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BossDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSDEFINITION
public:
    BossDefinition& operator=(BossDefinition const&) = delete;
    BossDefinition(BossDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0BossDefinition\@\@QEAA\@XZ
     */
    MCAPI BossDefinition();
    /**
     * @symbol ?initialize\@BossDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBossComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class BossComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@BossDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBossDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BossDefinition>>&);
};
