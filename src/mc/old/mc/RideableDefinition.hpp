/**
 * @file  RideableDefinition.hpp
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
 * @brief MC class RideableDefinition.
 *
 */
class RideableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDEABLEDEFINITION
public:
    class RideableDefinition& operator=(class RideableDefinition const &) = delete;
    RideableDefinition(class RideableDefinition const &) = delete;
    RideableDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?addFamilyTypeByName\@RideableDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addFamilyTypeByName(std::string const &);
    /**
     * @symbol  ?initialize\@RideableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVRideableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class RideableComponent &) const;
    /**
     * @symbol  ?buildSchema\@RideableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRideableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RideableDefinition>> &);

};