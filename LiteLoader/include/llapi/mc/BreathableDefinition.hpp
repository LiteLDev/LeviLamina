/**
 * @file  BreathableDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreathableDefinition.
 *
 */
class BreathableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREATHABLEDEFINITION
public:
    class BreathableDefinition& operator=(class BreathableDefinition const &) = delete;
    BreathableDefinition(class BreathableDefinition const &) = delete;
#endif

public:
    /**
     * @hash   1655136873
     * @symbol  ??0BreathableDefinition\@\@QEAA\@XZ
     */
    MCAPI BreathableDefinition();
    /**
     * @hash   1111749432
     * @symbol  ?addBreathableBlockDescriptor\@BreathableDefinition\@\@QEAAXAEBVBlockDescriptor\@\@\@Z
     */
    MCAPI void addBreathableBlockDescriptor(class BlockDescriptor const &);
    /**
     * @hash   1540314938
     * @symbol  ?addNonBreathableBlockDescriptor\@BreathableDefinition\@\@QEAAXAEBVBlockDescriptor\@\@\@Z
     */
    MCAPI void addNonBreathableBlockDescriptor(class BlockDescriptor const &);
    /**
     * @symbol  ?initialize\@BreathableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBreathableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class BreathableComponent &) const;
    /**
     * @hash   -1707242074
     * @symbol  ?buildSchema\@BreathableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBreathableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreathableDefinition>> &);

};