#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/InvertableFilter.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandSelectionOrder.h"
#include "mc/server/commands/CommandSelectionType.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/BlockPos.h"

class CommandSelectorBase {

public:
    static const uint64_t                                                            Unlimited = 0xFFFFFFFF; // constant
    int                                                                              mVersion;               // this+0x0
    enum class CommandSelectionType                                                  mType;                  // this+0x4
    enum class CommandSelectionOrder                                                 mOrder;                 // this+0x8
    std::vector<InvertableFilter<std::string>>                                       mNameFilters;          // this+0x10
    std::vector<InvertableFilter<ActorDefinitionIdentifier>>                         mTypeFilters;          // this+0x28
    std::vector<InvertableFilter<HashedString>>                                      mFamilyFilters;        // this+0x40
    std::vector<InvertableFilter<std::string>>                                       mTagFilters;           // this+0x58
    std::vector<std::function<bool(class CommandOrigin const&, class Actor const&)>> mFilterChain;          // this+0x70
    class CommandPosition                                                            mPosition;             // this+0x88
    class BlockPos                                                                   mBoxDeltas;            // this+0x98
    float                                                                            mRadiusMinSqr;         // this+0xA4
    float                                                                            mRadiusMaxSqr;         // this+0xA8
    uint64_t                                                                         mCount;                // this+0xB0
    bool                                                                             mIncludeDeadPlayers;   // this+0xB8
    bool                                                                             mIsPositionBound;      // this+0xB9
    bool                                                                             mDistanceFiltered;     // this+0xBA
    bool                                                                             mPositionFiltered;     // this+0xBB
    bool                                                                             mCountFiltered;        // this+0xBC
    bool                                                                             mHaveDeltas;           // this+0xBD
    bool                                                                             mForcePlayer;          // this+0xBE
    bool                                                                             mExcludeAgents;        // this+0xBF
    bool                                                                             mIsExplicitIdSelector; // this+0xC0

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
