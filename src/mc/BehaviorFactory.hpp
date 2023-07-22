/**
 * @file  BehaviorFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BehaviorFactory.
 *
 */
class BehaviorFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORFACTORY
public:
    class BehaviorFactory& operator=(class BehaviorFactory const &) = delete;
    BehaviorFactory(class BehaviorFactory const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BehaviorFactory\@\@QEAA\@XZ
     */
    MCAPI BehaviorFactory();
    /**
     * @symbol  ?loadNodeDefinition\@BehaviorFactory\@\@QEBA?AV?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@VValue\@Json\@\@AEAVBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI std::unique_ptr<class BehaviorDefinition> loadNodeDefinition(std::string const &, class Json::Value, class BehaviorTreeDefinitionPtr &) const;
    /**
     * @symbol  ?registerNodePair\@BehaviorFactory\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6A?AV?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@XZ\@3\@V?$function\@$$A6A?AV?$unique_ptr\@VBehaviorNode\@\@U?$default_delete\@VBehaviorNode\@\@\@std\@\@\@std\@\@XZ\@3\@\@Z
     */
    MCAPI void registerNodePair(std::string const &, class std::function<std::unique_ptr<class BehaviorDefinition> (void)>, class std::function<std::unique_ptr<class BehaviorNode> (void)>);
    /**
     * @symbol  ?tryGetNode\@BehaviorFactory\@\@QEBA?AV?$unique_ptr\@VBehaviorNode\@\@U?$default_delete\@VBehaviorNode\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class BehaviorNode> tryGetNode(std::string const &) const;

//private:
    /**
     * @symbol  ?_initNodes\@BehaviorFactory\@\@AEAAXXZ
     */
    MCAPI void _initNodes();

private:

};