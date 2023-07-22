/**
 * @file  EntityComponentFactoryJson.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityComponentFactoryJson.
 *
 */
class EntityComponentFactoryJson {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCOMPONENTFACTORYJSON
public:
    class EntityComponentFactoryJson& operator=(class EntityComponentFactoryJson const &) = delete;
    EntityComponentFactoryJson(class EntityComponentFactoryJson const &) = delete;
    EntityComponentFactoryJson() = delete;
#endif

public:
    /**
     * @symbol  ?tryGetDefinitionSerializer\@EntityComponentFactoryJson\@\@QEBAPEAVIJsonDefinitionSerializer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class IJsonDefinitionSerializer * tryGetDefinitionSerializer(std::string const &) const;

};