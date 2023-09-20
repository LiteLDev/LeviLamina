/**
 * @file  EquipItemDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class EquipItemDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPITEMDEFINITION
public:
    class EquipItemDefinition& operator=(class EquipItemDefinition const &) = delete;
    EquipItemDefinition(class EquipItemDefinition const &) = delete;
    EquipItemDefinition() = delete;
#endif

public:
    /**
     * @symbol ?addExcludeItemByName\@EquipItemDefinition\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void addExcludeItemByName(class ItemDescriptor const &);
    /**
     * @symbol ?buildSchema\@EquipItemDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VEquipItemDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EquipItemDefinition>> &);

};
