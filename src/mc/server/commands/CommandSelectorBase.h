#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandSelectorBase {

public:
    // prevent constructor by default
    CommandSelectorBase& operator=(CommandSelectorBase const&) = delete;
    CommandSelectorBase(CommandSelectorBase const&)            = delete;
    CommandSelectorBase()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?addFilter\@CommandSelectorBase\@\@QEAAXV?$function\@$$A6A_NAEBVCommandOrigin\@\@AEBVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void addFilter(std::function<bool(class CommandOrigin const&, class Actor const&)>);
    /**
     * @symbol
     * ?compile\@CommandSelectorBase\@\@QEAA_NAEBVCommandOrigin\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool compile(class CommandOrigin const&, std::string&);
    /**
     * @symbol
     * ?getName\@CommandSelectorBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @symbol ?getResultCount\@CommandSelectorBase\@\@QEBA_KXZ
     */
    MCAPI uint64_t getResultCount() const;
    /**
     * @symbol ?hasName\@CommandSelectorBase\@\@QEBA_NXZ
     */
    MCAPI bool hasName() const;
    /**
     * @symbol ?isExplicitIdSelector\@CommandSelectorBase\@\@QEBA_NXZ
     */
    MCAPI bool isExplicitIdSelector() const;
    /**
     * @symbol ?setIncludeDeadPlayers\@CommandSelectorBase\@\@QEAAX_N\@Z
     */
    MCAPI void setIncludeDeadPlayers(bool);
    /**
     * @symbol ?setType\@CommandSelectorBase\@\@QEAAXW4CommandSelectionType\@\@\@Z
     */
    MCAPI void setType(enum class CommandSelectionType);
    /**
     * @symbol ?setVersion\@CommandSelectorBase\@\@QEAAXH\@Z
     */
    MCAPI void setVersion(int);
    /**
     * @symbol ??1CommandSelectorBase\@\@QEAA\@XZ
     */
    MCAPI ~CommandSelectorBase();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ??0CommandSelectorBase\@\@IEAA\@_N\@Z
     */
    MCAPI CommandSelectorBase(bool);
    /**
     * @symbol
     * ?newResults\@CommandSelectorBase\@\@IEBA?AV?$shared_ptr\@V?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@\@std\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI std::shared_ptr<std::vector<class Actor*>> newResults(class CommandOrigin const&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?compareName\@CommandSelectorBase\@\@AEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool compareName(std::string const&) const;
    /**
     * @symbol ?filter\@CommandSelectorBase\@\@AEBA_NAEBVCommandOrigin\@\@AEAVActor\@\@\@Z
     */
    MCAPI bool filter(class CommandOrigin const&, class Actor&) const;
    /**
     * @symbol ?isExpansionAllowed\@CommandSelectorBase\@\@AEBA_NAEBVCommandOrigin\@\@\@Z
     */
    MCAPI bool isExpansionAllowed(class CommandOrigin const&) const;
    /**
     * @symbol ?isInDimension\@CommandSelectorBase\@\@AEBA_NAEBVCommandOrigin\@\@AEAVActor\@\@\@Z
     */
    MCAPI bool isInDimension(class CommandOrigin const&, class Actor&) const;
    /**
     * @symbol ?matchFamily\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchFamily(class Actor const&) const;
    /**
     * @symbol ?matchName\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchName(class Actor const&) const;
    /**
     * @symbol ?matchTag\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchTag(class Actor const&) const;
    /**
     * @symbol ?matchType\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchType(class Actor const&) const;
    // NOLINTEND
};
