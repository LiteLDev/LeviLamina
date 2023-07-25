#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RideableDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDEABLEDEFINITION
public:
    RideableDefinition& operator=(RideableDefinition const&) = delete;
    RideableDefinition(RideableDefinition const&)            = delete;
    RideableDefinition()                                     = delete;
#endif

public:
    /**
     * @symbol
     * ?addFamilyTypeByName\@RideableDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addFamilyTypeByName(std::string const&);
    /**
     * @symbol ?initialize\@RideableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVRideableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class RideableComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@RideableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRideableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RideableDefinition>>&);
};
