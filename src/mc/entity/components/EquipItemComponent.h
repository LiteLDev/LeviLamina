#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EquipItemComponent {
public:
    // EquipItemComponent inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // EquipItemComponent inner types define
    class Definition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPITEMCOMPONENT_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
        Definition()                             = delete;
#endif

    public:
        /**
         * @symbol ?initialize\@Definition\@EquipItemComponent\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class EquipItemComponent&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@EquipItemComponent\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@EquipItemComponent\@\@\@JsonUtil\@\@\@std\@\@\@Z
         */
        MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                          class JsonUtil::EmptyClass,
                                          class EquipItemComponent::Definition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPITEMCOMPONENT
public:
    EquipItemComponent& operator=(EquipItemComponent const&) = delete;
    EquipItemComponent(EquipItemComponent const&)            = delete;
    EquipItemComponent()                                     = delete;
#endif

public:
    /**
     * @symbol ?onEquipItemPickedUp\@EquipItemComponent\@\@QEAAXVItemStack\@\@H\@Z
     */
    MCAPI void onEquipItemPickedUp(class ItemStack, int);
    /**
     * @symbol ??1EquipItemComponent\@\@QEAA\@XZ
     */
    MCAPI ~EquipItemComponent();
};
