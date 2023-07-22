/**
 * @file  DynamicPropertiesDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DynamicPropertiesDefinition.
 *
 */
class DynamicPropertiesDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYNAMICPROPERTIESDEFINITION
public:
    class DynamicPropertiesDefinition& operator=(class DynamicPropertiesDefinition const &) = delete;
    DynamicPropertiesDefinition(class DynamicPropertiesDefinition const &) = delete;
    DynamicPropertiesDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?clear\@DynamicPropertiesDefinition\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol  ?defineProperty\@DynamicPropertiesDefinition\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UDynamicPropertyDefinition\@\@_K\@Z
     */
    MCAPI bool defineProperty(std::string const &, struct DynamicPropertyDefinition, unsigned __int64);
    /**
     * @symbol  ?tryGetPropertyDefinition\@DynamicPropertiesDefinition\@\@QEBAPEBUDynamicPropertyDefinition\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct DynamicPropertyDefinition const * tryGetPropertyDefinition(std::string const &) const;
    /**
     * @symbol  ?tryMergeDefinitions\@DynamicPropertiesDefinition\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV1\@AEBV23\@_K\@Z
     */
    MCAPI std::string tryMergeDefinitions(class DynamicPropertiesDefinition const &, std::string const &, unsigned __int64);
    /**
     * @symbol  ??1DynamicPropertiesDefinition\@\@QEAA\@XZ
     */
    MCAPI ~DynamicPropertiesDefinition();
    /**
     * @symbol  ?clearAll\@DynamicPropertiesDefinition\@\@SAXAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void clearAll(class std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class ActorDefinition>>>> const &);

//private:
    /**
     * @symbol  ?_canMergeDefinitions\@DynamicPropertiesDefinition\@\@AEBA_NAEBV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KAEAV23\@\@Z
     */
    MCAPI bool _canMergeDefinitions(class DynamicPropertiesDefinition const &, std::string const &, unsigned __int64, std::string &) const;

private:

};