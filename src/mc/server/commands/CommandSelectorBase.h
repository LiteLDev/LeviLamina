#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/InvertableFilter.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/enums/GameType.h"
#include "mc/server/commands/CommandSelectionOrder.h"
#include "mc/server/commands/CommandSelectionType.h"

class CommandSelectorBase {
public:
    // prevent constructor by default
    CommandSelectorBase& operator=(CommandSelectorBase const&);
    CommandSelectorBase(CommandSelectorBase const&);
    CommandSelectorBase();

public:
    // NOLINTBEGIN
    // symbol:
    // ?addFamilyFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
    MCAPI void addFamilyFilter(struct InvertableFilter<std::string> const& filter);

    // symbol: ?addFilter@CommandSelectorBase@@QEAAXV?$function@$$A6A_NAEBVCommandOrigin@@AEBVActor@@@Z@std@@@Z
    MCAPI void addFilter(std::function<bool(class CommandOrigin const&, class Actor const&)> filter);

    // symbol: ?addGameModeFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@W4GameType@@@@@Z
    MCAPI void addGameModeFilter(struct InvertableFilter<::GameType> const& filter);

    // symbol:
    // ?addHasItemFilter@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@H@3@AEBVCommandIntegerRange@@W4EquipmentSlot@Legacy@Puv@@2@Z
    MCAPI void addHasItemFilter(
        std::string const&               itemName,
        std::optional<int>               auxValue,
        class CommandIntegerRange const& quantity,
        ::Puv::Legacy::EquipmentSlot,
        class CommandIntegerRange const& slot
    );

    // symbol:
    // ?addHasPermissionFilters@CommandSelectorBase@@QEAAXAEBV?$vector@UHasPermissionFilter@@V?$allocator@UHasPermissionFilter@@@std@@@std@@@Z
    MCAPI void addHasPermissionFilters(std::vector<struct HasPermissionFilter> const& filters);

    // symbol: ?addLevelFilter@CommandSelectorBase@@QEAAXAEBU?$pair@HH@std@@@Z
    MCAPI void addLevelFilter(std::pair<int, int> const& level);

    // symbol:
    // ?addNameFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
    MCAPI void addNameFilter(struct InvertableFilter<std::string> const& filter);

    // symbol:
    // ?addScoreFilter@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandIntegerRange@@V?$function@$$A6AHAEA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z@3@@Z
    MCAPI void addScoreFilter(
        std::string const&                                                objName,
        class CommandIntegerRange const&                                  range,
        std::function<int(bool&, std::string const&, class Actor const&)> callback
    );

    // symbol:
    // ?addTagFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
    MCAPI void addTagFilter(struct InvertableFilter<std::string> const& filter);

    // symbol:
    // ?addTypeFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
    MCAPI void addTypeFilter(struct InvertableFilter<std::string> const& filter);

    // symbol: ?addXRotationFilter@CommandSelectorBase@@QEAAXAEBU?$pair@MM@std@@@Z
    MCAPI void addXRotationFilter(std::pair<float, float> const&);

    // symbol: ?addYRotationFilter@CommandSelectorBase@@QEAAXAEBU?$pair@MM@std@@@Z
    MCAPI void addYRotationFilter(std::pair<float, float> const& yRotation);

    // symbol:
    // ?compile@CommandSelectorBase@@QEAA_NAEBVCommandOrigin@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool compile(class CommandOrigin const& origin, std::string& error);

    // symbol: ?getName@CommandSelectorBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getName() const;

    // symbol: ?getOrder@CommandSelectorBase@@QEBA?AW4CommandSelectionOrder@@XZ
    MCAPI ::CommandSelectionOrder getOrder() const;

    // symbol: ?getResultCount@CommandSelectorBase@@QEBA_KXZ
    MCAPI uint64 getResultCount() const;

    // symbol: ?hasName@CommandSelectorBase@@QEBA_NXZ
    MCAPI bool hasName() const;

    // symbol: ?isExplicitIdSelector@CommandSelectorBase@@QEBA_NXZ
    MCAPI bool isExplicitIdSelector() const;

    // symbol: ?setBox@CommandSelectorBase@@QEAAXAEBVVec3@@@Z
    MCAPI void setBox(class Vec3 const& deltas);

    // symbol: ?setExcludeAgents@CommandSelectorBase@@QEAAX_N@Z
    MCAPI void setExcludeAgents(bool);

    // symbol:
    // ?setExplicitIdSelector@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setExplicitIdSelector(std::string const& playerName);

    // symbol: ?setIncludeDeadPlayers@CommandSelectorBase@@QEAAX_N@Z
    MCAPI void setIncludeDeadPlayers(bool includeDead);

    // symbol: ?setOrder@CommandSelectorBase@@QEAAXW4CommandSelectionOrder@@@Z
    MCAPI void setOrder(::CommandSelectionOrder order);

    // symbol: ?setPosition@CommandSelectorBase@@QEAAXAEBVCommandPosition@@@Z
    MCAPI void setPosition(class CommandPosition const& position);

    // symbol: ?setRadiusMax@CommandSelectorBase@@QEAAXM@Z
    MCAPI void setRadiusMax(float r);

    // symbol: ?setRadiusMin@CommandSelectorBase@@QEAAXM@Z
    MCAPI void setRadiusMin(float rm);

    // symbol: ?setResultCount@CommandSelectorBase@@QEAAX_K_N@Z
    MCAPI void setResultCount(uint64 count, bool);

    // symbol: ?setType@CommandSelectorBase@@QEAAXW4CommandSelectionType@@@Z
    MCAPI void setType(::CommandSelectionType type);

    // symbol: ?setVersion@CommandSelectorBase@@QEAAXH@Z
    MCAPI void setVersion(int version);

    // symbol: ??1CommandSelectorBase@@QEAA@XZ
    MCAPI ~CommandSelectorBase();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0CommandSelectorBase@@IEAA@_N@Z
    MCAPI explicit CommandSelectorBase(bool forcePlayer);

    // symbol:
    // ?newResults@CommandSelectorBase@@IEBA?AV?$shared_ptr@V?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@@std@@AEBVCommandOrigin@@@Z
    MCAPI std::shared_ptr<std::vector<class Actor*>> newResults(class CommandOrigin const& origin) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?compareName@CommandSelectorBase@@AEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool compareName(std::string const& name) const;

    // symbol: ?filter@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@AEAVActor@@@Z
    MCAPI bool filter(class CommandOrigin const& origin, class Actor& actor) const;

    // symbol: ?isExpansionAllowed@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@@Z
    MCAPI bool isExpansionAllowed(class CommandOrigin const& origin) const;

    // symbol: ?isInDimension@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@AEAVActor@@@Z
    MCAPI bool isInDimension(class CommandOrigin const& origin, class Actor& entity) const;

    // symbol: ?matchFamily@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
    MCAPI bool matchFamily(class Actor const& entity) const;

    // symbol: ?matchName@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
    MCAPI bool matchName(class Actor const& entity) const;

    // symbol: ?matchTag@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
    MCAPI bool matchTag(class Actor const& entity) const;

    // symbol: ?matchType@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
    MCAPI bool matchType(class Actor const& entity) const;

    // NOLINTEND
};
