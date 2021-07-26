#pragma once

#include <cstdint>
#include <functional>
#include <string>
#include <vector>

#include "../Actor/ActorDefinitionIdentifier.h"
#include "../Math/BlockPos.h"
#include "../Math/Vec3.h"
#include "../dll.h"
#include "CommandPosition.h"
#include "InvertableFilter.h"

class CommandOrigin;
class Actor;
struct ActorDefinitionIdentifier;

class CommandSelectorBase {
private:
    uint32_t                                                             version;
    uint32_t                                                             type;
    uint32_t                                                             order;
    std::vector<InvertableFilter<std::string>>                           nameFilters;
    char                                                                 pad_0040[24];
    std::vector<InvertableFilter<ActorDefinitionIdentifier>>             familyFilters;
    std::vector<InvertableFilter<std::string>>                           tagFilters;
    std::vector<std::function<bool(CommandOrigin const&, Actor const&)>> customFilters;
    CommandPosition                                                      position;
    BlockPos                                                             box;
    float                                                                radiusMin;
    float                                                                radiusMax;
    uint64_t                                                             resultCount;
    bool                                                                 includeDeadPlayers;
    char                                                                 pad_0185[5];
    bool                                                                 playerOnly;
    bool                                                                 explicitIdSelector;

public:
    inline bool isExplicitIdSelector() const {
        return explicitIdSelector;
    }
    inline void addNameFilter(InvertableFilter<std::string> const& filter) {
        nameFilters.emplace_back(filter);
    }
    inline void addTagFilter(InvertableFilter<std::string> const& filter) {
        if (isExplicitIdSelector())
            explicitIdSelector = false;
        tagFilters.emplace_back(filter);
    }
    inline void setIncludeDeadPlayers(bool value) {
        includeDeadPlayers = value;
    }
    inline void setResultCount(uint64_t value) {
        resultCount = value;
    }

    MCAPI void addFilter(std::function<bool(CommandOrigin const&, Actor const&)>);
    MCAPI void addTypeFilter(InvertableFilter<std::string> const&);
    MCAPI      CommandSelectorBase();
    MCAPI void setBox(BlockPos);
    MCAPI void setPosition(CommandPosition);
    MCAPI void setRadiusMin(float);
    MCAPI void setRadiusMax(float);
    MCAPI bool compile(CommandOrigin const&, std::string&);

protected:
    MCAPI CommandSelectorBase(bool isPlayer);
};