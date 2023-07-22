/**
 * @file  ContentTierIncompatibleReason.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContentTierIncompatibleReason.
 *
 */
class ContentTierIncompatibleReason {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTTIERINCOMPATIBLEREASON
public:
    class ContentTierIncompatibleReason& operator=(class ContentTierIncompatibleReason const &) = delete;
    ContentTierIncompatibleReason(class ContentTierIncompatibleReason const &) = delete;
    ContentTierIncompatibleReason() = delete;
#endif

public:
    /**
     * @symbol  ??0ContentTierIncompatibleReason\@\@QEAA\@I\@Z
     */
    MCAPI ContentTierIncompatibleReason(unsigned int);
    /**
     * @symbol  ?getExpandedI18nErrorList\@ContentTierIncompatibleReason\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::string getExpandedI18nErrorList(std::string const &, std::vector<std::string> const &) const;
    /**
     * @symbol  ?NoError\@ContentTierIncompatibleReason\@\@2V1\@A
     */
    MCAPI static class ContentTierIncompatibleReason NoError;
    /**
     * @symbol  ?getExpandedI18nErrorList\@ContentTierIncompatibleReason\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@IAEBV23\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::string getExpandedI18nErrorList(unsigned int, std::string const &, std::vector<std::string> const &);

};