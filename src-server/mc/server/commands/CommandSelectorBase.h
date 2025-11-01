#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandSelectionOrder.h"
#include "mc/server/commands/CommandSelectionType.h"
#include "mc/world/actor/selectors/InvertableFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandIntegerRange;
class CommandOrigin;
class CommandRationalRange;
class HashedString;
struct ActorDefinitionIdentifier;
struct HasPermissionFilter;
// clang-format on

class CommandSelectorBase {
public:
    // CommandSelectorBase inner types define
    using FilterFunc = ::std::function<bool(::CommandOrigin const&, ::Actor const&)>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mVersion;
    ::ll::TypedStorage<4, 4, ::CommandSelectionType> mType;
    ::ll::TypedStorage<4, 4, ::CommandSelectionOrder> mOrder;
    ::ll::TypedStorage<8, 24, ::std::vector<::InvertableFilter<::std::string>>> mNameFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::InvertableFilter<::ActorDefinitionIdentifier>>> mTypeFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::InvertableFilter<::HashedString>>> mFamilyFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::InvertableFilter<::std::string>>> mTagFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<bool(::CommandOrigin const&, ::Actor const&)>>> mFilterChain;
    ::ll::TypedStorage<4, 16, ::CommandPosition> mPosition;
    ::ll::TypedStorage<4, 12, ::Vec3> mBoxDeltas;
    ::ll::TypedStorage<4, 4, float> mRadiusMinSqr;
    ::ll::TypedStorage<4, 4, float> mRadiusMaxSqr;
    ::ll::TypedStorage<8, 8, uint64> mCount;
    ::ll::TypedStorage<1, 1, bool> mIncludeDeadPlayers;
    ::ll::TypedStorage<1, 1, bool> mIsPositionBound;
    ::ll::TypedStorage<1, 1, bool> mDistanceFiltered;
    ::ll::TypedStorage<1, 1, bool> mPositionFiltered;
    ::ll::TypedStorage<1, 1, bool> mCountFiltered;
    ::ll::TypedStorage<1, 1, bool> mHaveDeltas;
    ::ll::TypedStorage<1, 1, bool> mForcePlayer;
    ::ll::TypedStorage<1, 1, bool> mExcludeAgents;
    ::ll::TypedStorage<1, 1, bool> mIsExplicitIdSelector;
    ::ll::TypedStorage<1, 1, bool> mForceDimensionFiltering;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addFamilyFilter(::InvertableFilter<::std::string> const& filter);

    MCAPI void addFilter(::std::function<bool(::CommandOrigin const&, ::Actor const&)> filter);

    MCAPI void addHasItemFilter(::std::string const& itemName, ::std::optional<int> auxValue, ::CommandIntegerRange const& quantity, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, ::CommandIntegerRange const& slot);

    MCAPI void addHasPermissionFilters(::std::vector<::HasPermissionFilter> const& filters);

    MCAPI void addHasPropertyFilter(::HashedString const& propertyName, bool inverted, ::std::optional<::std::variant<::CommandRationalRange, bool, ::std::string>> const& optionalValue);

    MCAPI void addScoreFilter(::std::string const& objName, ::CommandIntegerRange const& range, ::std::function<int(bool&, ::std::string const&, ::Actor const&)> callback);

    MCAPI void addTypeFilter(::InvertableFilter<::std::string> const& filter);

    MCAPI bool compareName(::std::string const& name) const;

    MCAPI bool compile(::CommandOrigin const& origin, ::std::string& error);

    MCAPI bool filter(::CommandOrigin const& origin, ::Actor& actor) const;

    MCAPI ::std::string getName() const;

    MCAPI bool isExpansionAllowed(::CommandOrigin const& origin) const;

    MCAPI bool isInDimension(::CommandOrigin const& origin, ::Actor& entity) const;

    MCAPI bool matchFamily(::Actor const& entity) const;

    MCAPI bool matchName(::Actor const& entity) const;

    MCAPI bool matchTag(::Actor const& entity) const;

    MCAPI bool matchType(::Actor const& entity) const;

    MCAPI ::std::shared_ptr<::std::vector<::Actor*>> newResults(::CommandOrigin const& origin) const;

    MCAPI ~CommandSelectorBase();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 const getFeetPos(int version, ::Actor const& entity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
