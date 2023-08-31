#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentTierIncompatibleReason {

public:
    // prevent constructor by default
    ContentTierIncompatibleReason& operator=(ContentTierIncompatibleReason const&) = delete;
    ContentTierIncompatibleReason(ContentTierIncompatibleReason const&)            = delete;
    ContentTierIncompatibleReason()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ContentTierIncompatibleReason\@\@QEAA\@I\@Z
     */
    MCAPI ContentTierIncompatibleReason(uint32_t);
    /**
     * @symbol
     * ?getExpandedI18nErrorList\@ContentTierIncompatibleReason\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::string getExpandedI18nErrorList(std::string const&, std::vector<std::string> const&) const;
    /**
     * @symbol
     * ?getExpandedI18nErrorList\@ContentTierIncompatibleReason\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@IAEBV23\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::string getExpandedI18nErrorList(uint32_t, std::string const&, std::vector<std::string> const&);
    /**
     * @symbol ?NoError\@ContentTierIncompatibleReason\@\@2V1\@A
     */
    MCAPI static class ContentTierIncompatibleReason NoError;
    // NOLINTEND
};
