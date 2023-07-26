/**
 * @file  EquipmentTableDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure EquipmentTableDefinition.
 *
 */
struct EquipmentTableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPMENTTABLEDEFINITION
public:
    struct EquipmentTableDefinition& operator=(struct EquipmentTableDefinition const &) = delete;
    EquipmentTableDefinition(struct EquipmentTableDefinition const &) = delete;
    EquipmentTableDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@EquipmentTableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UEquipmentTableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EquipmentTableDefinition>> &);

};