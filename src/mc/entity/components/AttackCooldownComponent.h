#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AttackCooldownComponent {
public:
    // AttackCooldownComponent inner types declare
    // clang-format off
    class AttackCooldownDefinition;
    // clang-format on

    // AttackCooldownComponent inner types define
    class AttackCooldownDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKCOOLDOWNCOMPONENT_ATTACKCOOLDOWNDEFINITION
    public:
        AttackCooldownDefinition& operator=(AttackCooldownDefinition const&) = delete;
        AttackCooldownDefinition(AttackCooldownDefinition const&)            = delete;
        AttackCooldownDefinition()                                           = delete;
#endif

    public:
        /**
         * @symbol
         * ?initialize\@AttackCooldownDefinition\@AttackCooldownComponent\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class AttackCooldownComponent&) const;
        /**
         * @symbol
         * ?buildSchema\@AttackCooldownDefinition\@AttackCooldownComponent\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VAttackCooldownDefinition\@AttackCooldownComponent\@\@\@JsonUtil\@\@\@std\@\@\@Z
         */
        MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                          class JsonUtil::EmptyClass,
                                          class AttackCooldownComponent::AttackCooldownDefinition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKCOOLDOWNCOMPONENT
public:
    AttackCooldownComponent& operator=(AttackCooldownComponent const&) = delete;
    AttackCooldownComponent(AttackCooldownComponent const&)            = delete;
    AttackCooldownComponent()                                          = delete;
#endif

public:
    /**
     * @symbol ??1AttackCooldownComponent\@\@QEAA\@XZ
     */
    MCAPI ~AttackCooldownComponent();
};
