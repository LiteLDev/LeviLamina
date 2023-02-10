/**
 * @file  CommandSelectorBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <functional>
#include "ActorDefinitionIdentifier.hpp"
#include "CommandPosition.hpp"
#include "BlockPos.hpp"
class CommandOrigin;
class Actor;
class Player;

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandSelectorBase.
 *
 */
class CommandSelectorBase {

#define AFTER_EXTRA
    // Add Member There
public:
    uint32_t mVersion;
    uint32_t mType;
    uint32_t mOrder;
    std::vector<InvertableFilter<std::string>> mNameFilters;
    std::vector<InvertableFilter<ActorDefinitionIdentifier>> mTypeFilters;
    std::vector<InvertableFilter<std::string>> mFamilyFilters;
    std::vector<InvertableFilter<std::string>> mTagFilters;
    std::vector<std::function<bool(CommandOrigin const&, Actor const&)>> mFilterChain;
    CommandPosition mPosition;
    BlockPos mBoxDeltas;
    float mRadiusMin;
    float mRadiusMax;
    uint64_t mCount;
    bool mIncludeDeadPlayers;
    bool mIsPositionBound;
    bool mDistanceFiltered;
    bool mHaveDeltas;
    bool mForcePlayer;
    bool mIsExplicitIdSelector;

    // c++ buffer, issue #1006.
    char unk[8];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDSELECTORBASE
public:
    class CommandSelectorBase& operator=(class CommandSelectorBase const &) = delete;
    CommandSelectorBase(class CommandSelectorBase const &) = delete;
    CommandSelectorBase() = delete;
#endif

public:
    /**
     * @hash   1106255977
     * @symbol  ?addFamilyFilter\@CommandSelectorBase\@\@QEAAXAEBU?$InvertableFilter\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@\@Z
     */
    MCAPI void addFamilyFilter(struct InvertableFilter<std::string> const &);
    /**
     * @hash   -463618231
     * @symbol  ?addFilter\@CommandSelectorBase\@\@QEAAXV?$function\@$$A6A_NAEBVCommandOrigin\@\@AEBVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void addFilter(class std::function<bool (class CommandOrigin const &, class Actor const &)>);
    /**
     * @hash   -846099917
     * @symbol  ?addGameModeFilter\@CommandSelectorBase\@\@QEAAXAEBU?$InvertableFilter\@W4GameType\@\@\@\@\@Z
     */
    MCAPI void addGameModeFilter(struct InvertableFilter<enum class GameType> const &);
    /**
     * @hash   -1052920062
     * @symbol  ?addHasItemFilter\@CommandSelectorBase\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@H\@3\@AEBVCommandIntegerRange\@\@W4EquipmentSlot\@\@2\@Z
     */
    MCAPI void addHasItemFilter(std::string const &, class std::optional<int>, class CommandIntegerRange const &, enum class EquipmentSlot, class CommandIntegerRange const &);
    /**
     * @hash   880262423
     * @symbol  ?addLevelFilter\@CommandSelectorBase\@\@QEAAXAEBU?$pair\@HH\@std\@\@\@Z
     */
    MCAPI void addLevelFilter(struct std::pair<int, int> const &);
    /**
     * @hash   799866299
     * @symbol  ?addNameFilter\@CommandSelectorBase\@\@QEAAXAEBU?$InvertableFilter\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@\@Z
     */
    MCAPI void addNameFilter(struct InvertableFilter<std::string> const &);
    /**
     * @hash   104302553
     * @symbol  ?addScoreFilter\@CommandSelectorBase\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCommandIntegerRange\@\@V?$function\@$$A6AHAEA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z\@3\@\@Z
     */
    MCAPI void addScoreFilter(std::string const &, class CommandIntegerRange const &, class std::function<int (bool &, std::string const &, class Actor const &)>);
    /**
     * @hash   1252608931
     * @symbol  ?addTagFilter\@CommandSelectorBase\@\@QEAAXAEBU?$InvertableFilter\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@\@Z
     */
    MCAPI void addTagFilter(struct InvertableFilter<std::string> const &);
    /**
     * @hash   50252285
     * @symbol  ?addTypeFilter\@CommandSelectorBase\@\@QEAAXAEBU?$InvertableFilter\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@\@Z
     */
    MCAPI void addTypeFilter(struct InvertableFilter<std::string> const &);
    /**
     * @hash   -1137145517
     * @symbol  ?addXRotationFilter\@CommandSelectorBase\@\@QEAAXAEBU?$pair\@MM\@std\@\@\@Z
     */
    MCAPI void addXRotationFilter(struct std::pair<float, float> const &);
    /**
     * @hash   574378961
     * @symbol  ?addYRotationFilter\@CommandSelectorBase\@\@QEAAXAEBU?$pair\@MM\@std\@\@\@Z
     */
    MCAPI void addYRotationFilter(struct std::pair<float, float> const &);
    /**
     * @hash   -1502330334
     * @symbol  ?compile\@CommandSelectorBase\@\@QEAA_NAEBVCommandOrigin\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool compile(class CommandOrigin const &, std::string &);
    /**
     * @hash   288346630
     * @symbol  ?getName\@CommandSelectorBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @hash   -504267682
     * @symbol  ?getOrder\@CommandSelectorBase\@\@QEBA?AW4CommandSelectionOrder\@\@XZ
     */
    MCAPI enum class CommandSelectionOrder getOrder() const;
    /**
     * @symbol  ?getResultCount\@CommandSelectorBase\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getResultCount() const;
    /**
     * @hash   -1795936632
     * @symbol  ?hasName\@CommandSelectorBase\@\@QEBA_NXZ
     */
    MCAPI bool hasName() const;
    /**
     * @hash   681638074
     * @symbol  ?isExplicitIdSelector\@CommandSelectorBase\@\@QEBA_NXZ
     */
    MCAPI bool isExplicitIdSelector() const;
    /**
     * @hash   204778414
     * @symbol  ?setBox\@CommandSelectorBase\@\@QEAAXVBlockPos\@\@\@Z
     */
    MCAPI void setBox(class BlockPos);
    /**
     * @hash   -889870254
     * @symbol  ?setExcludeAgents\@CommandSelectorBase\@\@QEAAX_N\@Z
     */
    MCAPI void setExcludeAgents(bool);
    /**
     * @hash   -311927732
     * @symbol  ?setExplicitIdSelector\@CommandSelectorBase\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setExplicitIdSelector(std::string const &);
    /**
     * @hash   1080087940
     * @symbol  ?setIncludeDeadPlayers\@CommandSelectorBase\@\@QEAAX_N\@Z
     */
    MCAPI void setIncludeDeadPlayers(bool);
    /**
     * @hash   -1158945722
     * @symbol  ?setOrder\@CommandSelectorBase\@\@QEAAXW4CommandSelectionOrder\@\@\@Z
     */
    MCAPI void setOrder(enum class CommandSelectionOrder);
    /**
     * @hash   1995961010
     * @symbol  ?setPosition\@CommandSelectorBase\@\@QEAAXAEBVCommandPosition\@\@\@Z
     */
    MCAPI void setPosition(class CommandPosition const &);
    /**
     * @hash   -894506170
     * @symbol  ?setRadiusMax\@CommandSelectorBase\@\@QEAAXM\@Z
     */
    MCAPI void setRadiusMax(float);
    /**
     * @hash   -39033702
     * @symbol  ?setRadiusMin\@CommandSelectorBase\@\@QEAAXM\@Z
     */
    MCAPI void setRadiusMin(float);
    /**
     * @hash   1326986264
     * @symbol  ?setResultCount\@CommandSelectorBase\@\@QEAAX_K_N\@Z
     */
    MCAPI void setResultCount(unsigned __int64, bool);
    /**
     * @hash   -379882824
     * @symbol  ?setType\@CommandSelectorBase\@\@QEAAXW4CommandSelectionType\@\@\@Z
     */
    MCAPI void setType(enum class CommandSelectionType);
    /**
     * @hash   -491008148
     * @symbol  ?setVersion\@CommandSelectorBase\@\@QEAAXH\@Z
     */
    MCAPI void setVersion(int);
    /**
     * @hash   -1016715737
     * @symbol  ??1CommandSelectorBase\@\@QEAA\@XZ
     */
    MCAPI ~CommandSelectorBase();

//protected:
    /**
     * @hash   638745745
     * @symbol  ??0CommandSelectorBase\@\@IEAA\@_N\@Z
     */
    MCAPI CommandSelectorBase(bool);
    /**
     * @hash   -28167173
     * @symbol  ?newResults\@CommandSelectorBase\@\@IEBA?AV?$shared_ptr\@V?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@\@std\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI class std::shared_ptr<std::vector<class Actor *>> newResults(class CommandOrigin const &) const;

//private:
    /**
     * @hash   -51693152
     * @symbol  ?compareName\@CommandSelectorBase\@\@AEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool compareName(std::string const &) const;
    /**
     * @hash   162222113
     * @symbol  ?filter\@CommandSelectorBase\@\@AEBA_NAEBVCommandOrigin\@\@AEAVActor\@\@\@Z
     */
    MCAPI bool filter(class CommandOrigin const &, class Actor &) const;
    /**
     * @hash   -1763582631
     * @symbol  ?isExpansionAllowed\@CommandSelectorBase\@\@AEBA_NAEBVCommandOrigin\@\@\@Z
     */
    MCAPI bool isExpansionAllowed(class CommandOrigin const &) const;
    /**
     * @hash   578611503
     * @symbol  ?matchFamily\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchFamily(class Actor const &) const;
    /**
     * @hash   1887272104
     * @symbol  ?matchName\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchName(class Actor const &) const;
    /**
     * @hash   1616407203
     * @symbol  ?matchTag\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchTag(class Actor const &) const;
    /**
     * @hash   -62689079
     * @symbol  ?matchType\@CommandSelectorBase\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool matchType(class Actor const &) const;

protected:

private:

};