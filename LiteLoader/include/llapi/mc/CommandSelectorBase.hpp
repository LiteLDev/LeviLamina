/**
 * @file  MC/CommandSelectorBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
private:
uint32_t version;
uint32_t type;
uint32_t order;
std::vector<InvertableFilter<std::string>> nameFilters;
char pad_0040[24];
std::vector<InvertableFilter<ActorDefinitionIdentifier>> familyFilters;
std::vector<InvertableFilter<std::string>> tagFilters;
std::vector<std::function<bool(CommandOrigin const&, Actor const&)>> customFilters;
CommandPosition position;
BlockPos box;
float radiusMin;
float radiusMax;
uint64_t resultCount;
bool includeDeadPlayers;
char pad_0185[5];
bool playerOnly;
char explicitIdSelector;
char unk192;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDSELECTORBASE
public:
    class CommandSelectorBase& operator=(class CommandSelectorBase const &) = delete;
    CommandSelectorBase(class CommandSelectorBase const &) = delete;
    CommandSelectorBase() = delete;
#endif

public:
    /**
     * @hash   1751740457
     * @symbol ?addFamilyFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     */
    MCAPI void addFamilyFilter(struct InvertableFilter<std::string> const &);
    /**
     * @hash   181866249
     * @symbol ?addFilter@CommandSelectorBase@@QEAAXV?$function@$$A6A_NAEBVCommandOrigin@@AEBVActor@@@Z@std@@@Z
     */
    MCAPI void addFilter(class std::function<bool (class CommandOrigin const &, class Actor const &)>);
    /**
     * @hash   -200630813
     * @symbol ?addGameModeFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@W4GameType@@@@@Z
     */
    MCAPI void addGameModeFilter(struct InvertableFilter<enum GameType> const &);
    /**
     * @hash   -1879375813
     * @symbol ?addHasItemFilter@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVCommandIntegerRange@@W4EquipmentSlot@@1@Z
     */
    MCAPI void addHasItemFilter(std::string const &, int, class CommandIntegerRange const &, enum EquipmentSlot, class CommandIntegerRange const &);
    /**
     * @hash   1525762279
     * @symbol ?addLevelFilter@CommandSelectorBase@@QEAAXAEBU?$pair@HH@std@@@Z
     */
    MCAPI void addLevelFilter(struct std::pair<int, int> const &);
    /**
     * @hash   1445381531
     * @symbol ?addNameFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     */
    MCAPI void addNameFilter(struct InvertableFilter<std::string> const &);
    /**
     * @hash   749817785
     * @symbol ?addScoreFilter@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandIntegerRange@@V?$function@$$A6AHAEA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z@3@@Z
     */
    MCAPI void addScoreFilter(std::string const &, class CommandIntegerRange const &, class std::function<int (bool &, std::string const &, class Actor const &)>);
    /**
     * @hash   1898031907
     * @symbol ?addTagFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     */
    MCAPI void addTagFilter(struct InvertableFilter<std::string> const &);
    /**
     * @hash   695675261
     * @symbol ?addTypeFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     */
    MCAPI void addTypeFilter(struct InvertableFilter<std::string> const &);
    /**
     * @hash   -491722541
     * @symbol ?addXRotationFilter@CommandSelectorBase@@QEAAXAEBU?$pair@MM@std@@@Z
     */
    MCAPI void addXRotationFilter(struct std::pair<float, float> const &);
    /**
     * @hash   1219832689
     * @symbol ?addYRotationFilter@CommandSelectorBase@@QEAAXAEBU?$pair@MM@std@@@Z
     */
    MCAPI void addYRotationFilter(struct std::pair<float, float> const &);
    /**
     * @hash   -856845854
     * @symbol ?compile@CommandSelectorBase@@QEAA_NAEBVCommandOrigin@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool compile(class CommandOrigin const &, std::string &);
    /**
     * @hash   933969494
     * @symbol ?getName@CommandSelectorBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @hash   -631703970
     * @symbol ?getOrder@CommandSelectorBase@@QEBA?AW4CommandSelectionOrder@@XZ
     */
    MCAPI enum CommandSelectionOrder getOrder() const;
    /**
     * @hash   -1150313768
     * @symbol ?hasName@CommandSelectorBase@@QEBA_NXZ
     */
    MCAPI bool hasName() const;
    /**
     * @hash   1327245562
     * @symbol ?isExplicitIdSelector@CommandSelectorBase@@QEBA_NXZ
     */
    MCAPI bool isExplicitIdSelector() const;
    /**
     * @hash   850093758
     * @symbol ?setBox@CommandSelectorBase@@QEAAXVBlockPos@@@Z
     */
    MCAPI void setBox(class BlockPos);
    /**
     * @hash   -244554910
     * @symbol ?setExcludeAgents@CommandSelectorBase@@QEAAX_N@Z
     */
    MCAPI void setExcludeAgents(bool);
    /**
     * @hash   333387612
     * @symbol ?setExplicitIdSelector@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setExplicitIdSelector(std::string const &);
    /**
     * @hash   1725403284
     * @symbol ?setIncludeDeadPlayers@CommandSelectorBase@@QEAAX_N@Z
     */
    MCAPI void setIncludeDeadPlayers(bool);
    /**
     * @hash   -513630378
     * @symbol ?setOrder@CommandSelectorBase@@QEAAXW4CommandSelectionOrder@@@Z
     */
    MCAPI void setOrder(enum CommandSelectionOrder);
    /**
     * @hash   -1653690942
     * @symbol ?setPosition@CommandSelectorBase@@QEAAXAEBVCommandPosition@@@Z
     */
    MCAPI void setPosition(class CommandPosition const &);
    /**
     * @hash   -249190826
     * @symbol ?setRadiusMax@CommandSelectorBase@@QEAAXM@Z
     */
    MCAPI void setRadiusMax(float);
    /**
     * @hash   606281642
     * @symbol ?setRadiusMin@CommandSelectorBase@@QEAAXM@Z
     */
    MCAPI void setRadiusMin(float);
    /**
     * @hash   1972301608
     * @symbol ?setResultCount@CommandSelectorBase@@QEAAX_K_N@Z
     */
    MCAPI void setResultCount(unsigned __int64, bool);
    /**
     * @hash   265432520
     * @symbol ?setType@CommandSelectorBase@@QEAAXW4CommandSelectionType@@@Z
     */
    MCAPI void setType(enum CommandSelectionType);
    /**
     * @hash   360161084
     * @symbol ?setVersion@CommandSelectorBase@@QEAAXH@Z
     */
    MCAPI void setVersion(int);
    /**
     * @hash   -1221354921
     * @symbol ??1CommandSelectorBase@@QEAA@XZ
     */
    MCAPI ~CommandSelectorBase();

//protected:
    /**
     * @hash   1284368609
     * @symbol ??0CommandSelectorBase@@IEAA@_N@Z
     */
    MCAPI CommandSelectorBase(bool);
    /**
     * @hash   617440315
     * @symbol ?newResults@CommandSelectorBase@@IEBA?AV?$shared_ptr@V?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@@std@@AEBVCommandOrigin@@@Z
     */
    MCAPI class std::shared_ptr<std::vector<class Actor *>> newResults(class CommandOrigin const &) const;

//private:
    /**
     * @hash   593791328
     * @symbol ?compareName@CommandSelectorBase@@AEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool compareName(std::string const &) const;
    /**
     * @hash   807921857
     * @symbol ?filter@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@AEAVActor@@@Z
     */
    MCAPI bool filter(class CommandOrigin const &, class Actor &) const;
    /**
     * @hash   -1117959767
     * @symbol ?isExpansionAllowed@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@@Z
     */
    MCAPI bool isExpansionAllowed(class CommandOrigin const &) const;
    /**
     * @hash   1224218991
     * @symbol ?matchFamily@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     */
    MCAPI bool matchFamily(class Actor const &) const;
    /**
     * @hash   -1762087704
     * @symbol ?matchName@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     */
    MCAPI bool matchName(class Actor const &) const;
    /**
     * @hash   -2032952605
     * @symbol ?matchTag@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     */
    MCAPI bool matchTag(class Actor const &) const;
    /**
     * @hash   582918409
     * @symbol ?matchType@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     */
    MCAPI bool matchType(class Actor const &) const;

protected:

private:

};