#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandSelectorBase {

public:
    // prevent constructor by default
    CommandSelectorBase& operator=(CommandSelectorBase const&) = delete;
    CommandSelectorBase(CommandSelectorBase const&)            = delete;
    CommandSelectorBase()                                      = delete;

public:
    /**
     * @symbol
     * ?addFilter\@CommandSelectorBase\@\@QEAAXV?$function\@$$A6A_NAEBVCommandOrigin\@\@AEBVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void addFilter(class std::function<bool(class CommandOrigin const&, class Actor const&)>); // NOLINT
    /**
     * @symbol
     * ?compile\@CommandSelectorBase\@\@QEAA_NAEBVCommandOrigin\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool compile(class CommandOrigin const&, std::string&); // NOLINT
    /**
     * @symbol
     * ?getName\@CommandSelectorBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?getResultCount\@CommandSelectorBase\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getResultCount() const; // NOLINT
    /**
     * @symbol ?hasName\@CommandSelectorBase\@\@QEBA_NXZ
     */
    MCAPI bool hasName() const; // NOLINT
    /**
     * @symbol ?isExplicitIdSelector\@CommandSelectorBase\@\@QEBA_NXZ
     */
    MCAPI bool isExplicitIdSelector() const; // NOLINT
    /**
     * @symbol ?setIncludeDeadPlayers\@CommandSelectorBase\@\@QEAAX_N\@Z
     */
    MCAPI void setIncludeDeadPlayers(bool); // NOLINT
    /**
     * @symbol ?setType\@CommandSelectorBase\@\@QEAAXW4CommandSelectionType\@\@\@Z
     */
    MCAPI void setType(enum class CommandSelectionType); // NOLINT
    /**
     * @symbol ?setVersion\@CommandSelectorBase\@\@QEAAXH\@Z
     */
    MCAPI void setVersion(int); // NOLINT
    /**
     * @symbol ??1CommandSelectorBase\@\@QEAA\@XZ
     */
    MCAPI ~CommandSelectorBase(); // NOLINT

    // protected:
    /**
     * @symbol ??0CommandSelectorBase\@\@IEAA\@_N\@Z
     */
    MCAPI CommandSelectorBase(bool); // NOLINT
    /**
     * @symbol
     * ?newResults\@CommandSelectorBase\@\@IEBA?AV?$shared_ptr\@V?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@\@std\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI class std::shared_ptr<std::vector<class Actor*>> newResults(class CommandOrigin const&) const; // NOLINT

    // private:
    /**
     * @symbol
     * ?compareName\@CommandSelectorBase\@\@AEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool compareName(std::string const&) const; // NOLINT
    /**
     * @symbol ?filter\@CommandSelectorBase\@\@AEBA_NAEBVCommandOrigin\@\@AEAVActor\@\@\@Z
     */
    MCAPI bool filter(class CommandOrigin const&, class Actor&) const; // NOLINT
    /**
     * @symbol ?isExpansionAllowed\@CommandSelectorBase\@\@AEBA_NAEBVCommandOrigin\@\@\@Z
     */
    MCAPI bool isExpansionAllowed(class CommandOrigin const&) const; // NOLINT
    /**
     * @symbol ?isInDimension\@CommandSelectorBase\@\@AEBA_NAEBVCommandOrigin\@\@AEAVActor\@\@\@Z
     */
    MCAPI bool isInDimension(class CommandOrigin const&, class Actor&) const; // NOLINT
    /**
     * @symbol ?matchFamily\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchFamily(class Actor const&) const; // NOLINT
    /**
     * @symbol ?matchName\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchName(class Actor const&) const; // NOLINT
    /**
     * @symbol ?matchTag\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchTag(class Actor const&) const; // NOLINT
    /**
     * @symbol ?matchType\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchType(class Actor const&) const; // NOLINT

protected:
private:
};
