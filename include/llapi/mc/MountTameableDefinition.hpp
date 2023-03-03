/**
 * @file  MountTameableDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MountTameableDefinition.
 *
 */
class MountTameableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTTAMEABLEDEFINITION
public:
    class MountTameableDefinition& operator=(class MountTameableDefinition const &) = delete;
    MountTameableDefinition(class MountTameableDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0MountTameableDefinition\@\@QEAA\@XZ
     */
    MCAPI MountTameableDefinition();
    /**
     * @symbol  ?initialize\@MountTameableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVMountTamingComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class MountTamingComponent &) const;
    /**
     * @symbol  ?buildSchema\@MountTameableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VMountTameableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MountTameableDefinition>> &);

};