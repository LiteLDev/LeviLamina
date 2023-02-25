/**
 * @file  ExploreOutskirtsDefinition.hpp
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
 * @brief MC class ExploreOutskirtsDefinition.
 *
 */
class ExploreOutskirtsDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLOREOUTSKIRTSDEFINITION
public:
    class ExploreOutskirtsDefinition& operator=(class ExploreOutskirtsDefinition const &) = delete;
    ExploreOutskirtsDefinition(class ExploreOutskirtsDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ExploreOutskirtsDefinition\@\@QEAA\@XZ
     */
    MCAPI ExploreOutskirtsDefinition();
    /**
     * @symbol  ?initialize\@ExploreOutskirtsDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVExploreOutskirtsGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class ExploreOutskirtsGoal &) const;
    /**
     * @symbol  ?buildSchema\@ExploreOutskirtsDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VExploreOutskirtsDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExploreOutskirtsDefinition>> &);

};