#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandSelectionOrder.h"
#include "mc/server/commands/CommandSelectionType.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/server/commands/CommandSelectionOrder.h"
#include "mc/server/commands/CommandSelectionType.h"
#include "mc/world/actor/selectors/InvertableFilter.h"
#include "mc/world/level/GameType.h"

class CommandSelectorBase {
public:
    static const uint64                                                              Unlimited = 0xFFFFFFFF; // constant
    int                                                                              mVersion;               // this+0x0
    ::CommandSelectionType                                                           mType;                  // this+0x4
    ::CommandSelectionOrder                                                          mOrder;                 // this+0x8
    std::vector<InvertableFilter<std::string>>                                       mNameFilters;          // this+0x10
    std::vector<InvertableFilter<ActorDefinitionIdentifier>>                         mTypeFilters;          // this+0x28
    std::vector<InvertableFilter<HashedString>>                                      mFamilyFilters;        // this+0x40
    std::vector<InvertableFilter<std::string>>                                       mTagFilters;           // this+0x58
    std::vector<std::function<bool(class CommandOrigin const&, class Actor const&)>> mFilterChain;          // this+0x70
    class CommandPosition                                                            mPosition;             // this+0x88
    class BlockPos                                                                   mBoxDeltas;            // this+0x98
    float                                                                            mRadiusMinSqr;         // this+0xA4
    float                                                                            mRadiusMaxSqr;         // this+0xA8
    uint64                                                                           mCount;                // this+0xB0
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
};
