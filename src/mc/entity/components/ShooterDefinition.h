#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShooterDefinition {

public:
    // prevent constructor by default
    ShooterDefinition& operator=(ShooterDefinition const&) = delete;
    ShooterDefinition(ShooterDefinition const&)            = delete;
    ShooterDefinition()                                    = delete;

public:
    /**
     * @symbol
     * ?addSoundByName\@ShooterDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addSoundByName(std::string const&); // NOLINT
    /**
     * @symbol ?initialize\@ShooterDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVShooterComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ShooterComponent&) const; // NOLINT
    /**
     * @symbol
     * ?setActorDefByName\@ShooterDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setActorDefByName(std::string const&); // NOLINT
    /**
     * @symbol
     * ?buildSchema\@ShooterDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VShooterDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShooterDefinition>>&); // NOLINT
};
