#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/server/commands/CommandSelectionOrder.h"
#include "mc/server/commands/CommandSelectionType.h"
#include "mc/world/actor/selectors/InvertableFilter.h"
#include "mc/world/level/GameType.h"

class CommandSelectorBase {
public:
    // prevent constructor by default
    CommandSelectorBase& operator=(CommandSelectorBase const&);
    CommandSelectorBase(CommandSelectorBase const&);
    CommandSelectorBase();

public:
    // NOLINTBEGIN
    MCAPI void addFamilyFilter(struct InvertableFilter<std::string> const& filter);

    MCAPI void addFilter(std::function<bool(class CommandOrigin const&, class Actor const&)> filter);

    MCAPI void addGameModeFilter(struct InvertableFilter<::GameType> const& filter);

    MCAPI void addHasItemFilter(
        std::string const&               itemName,
        std::optional<int>               auxValue,
        class CommandIntegerRange const& quantity,
        ::Puv::Legacy::EquipmentSlot     equipmentSlot,
        class CommandIntegerRange const& slot
    );

    MCAPI void addHasPermissionFilters(std::vector<struct HasPermissionFilter> const& filters);

    MCAPI void addHasPropertyFilter(
        class HashedString const&                                                         propertyName,
        bool                                                                              inverted,
        std::optional<std::variant<class CommandRationalRange, bool, std::string>> const& optionalValue
    );

    MCAPI void addLevelFilter(std::pair<int, int> const& level);

    MCAPI void addNameFilter(struct InvertableFilter<std::string> const& filter);

    MCAPI void addScoreFilter(
        std::string const&                                                objName,
        class CommandIntegerRange const&                                  range,
        std::function<int(bool&, std::string const&, class Actor const&)> callback
    );

    MCAPI void addTagFilter(struct InvertableFilter<std::string> const& filter);

    MCAPI void addTypeFilter(struct InvertableFilter<std::string> const& filter);

    MCAPI void addXRotationFilter(std::pair<float, float> const& xRotation);

    MCAPI void addYRotationFilter(std::pair<float, float> const& yRotation);

    MCAPI bool compile(class CommandOrigin const& origin, std::string& error);

    MCAPI std::string getName() const;

    MCAPI ::CommandSelectionOrder getOrder() const;

    MCAPI uint64 getResultCount() const;

    MCAPI bool hasName() const;

    MCAPI bool isExplicitIdSelector() const;

    MCAPI void setBox(class Vec3 const& deltas);

    MCAPI void setExcludeAgents(bool excludeAgents);

    MCAPI void setExplicitIdSelector(std::string const& playerName);

    MCAPI void setForceDimensionFiltering(bool forceDimensionFiltering);

    MCAPI void setIncludeDeadPlayers(bool includeDead);

    MCAPI void setOrder(::CommandSelectionOrder order);

    MCAPI void setPosition(class CommandPosition const& position);

    MCAPI void setRadiusMax(float r);

    MCAPI void setRadiusMin(float rm);

    MCAPI void setResultCount(uint64 count, bool setWithSelector);

    MCAPI void setType(::CommandSelectionType type);

    MCAPI void setVersion(int version);

    MCAPI ~CommandSelectorBase();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI explicit CommandSelectorBase(bool forcePlayer);

    MCAPI std::shared_ptr<std::vector<class Actor*>> newResults(class CommandOrigin const& origin) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool compareName(std::string const& name) const;

    MCAPI bool filter(class CommandOrigin const& origin, class Actor& actor) const;

    MCAPI bool isExpansionAllowed(class CommandOrigin const& origin) const;

    MCAPI bool isInDimension(class CommandOrigin const& origin, class Actor& entity) const;

    MCAPI bool matchFamily(class Actor const& entity) const;

    MCAPI bool matchName(class Actor const& entity) const;

    MCAPI bool matchTag(class Actor const& entity) const;

    MCAPI bool matchType(class Actor const& entity) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(bool forcePlayer);

    MCAPI void dtor$();

    // NOLINTEND
};
