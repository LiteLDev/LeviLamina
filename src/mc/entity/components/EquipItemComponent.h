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

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
        Definition()                             = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ?buildSchema\@Definition\@EquipItemComponent\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@EquipItemComponent\@\@\@JsonUtil\@\@\@std\@\@\@Z
         */
        MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                          class JsonUtil::EmptyClass,
                                          class EquipItemComponent::Definition>>&);
        /**
         * @symbol ?initialize\@Definition\@EquipItemComponent\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class EquipItemComponent&) const;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    EquipItemComponent& operator=(EquipItemComponent const&) = delete;
    EquipItemComponent(EquipItemComponent const&)            = delete;
    EquipItemComponent()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?onEquipItemPickedUp\@EquipItemComponent\@\@QEAAXVItemStack\@\@H\@Z
     */
    MCAPI void onEquipItemPickedUp(class ItemStack, int);
    /**
     * @symbol ??1EquipItemComponent\@\@QEAA\@XZ
     */
    MCAPI ~EquipItemComponent();
    // NOLINTEND
};
