#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandSelectionOrder.h"
#include "mc/server/commands/CommandSelectionType.h"
#include "mc/world/actor/selectors/InvertableFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class HashedString;
struct ActorDefinitionIdentifier;
// clang-format on

class CommandSelectorBase {
public:
    // CommandSelectorBase inner types define
    using FilterFunc = ::std::function<bool(::CommandOrigin const&, ::Actor const&)>;

public:
    // member variables
    // NOLINTBEGIN
    int                                                                          mVersion{};
    ::CommandSelectionType                                                       mType{};
    ::CommandSelectionOrder                                                      mOrder{};
    ::std::vector<::InvertableFilter<::std::string>>                             mNameFilters{};
    ::std::vector<::InvertableFilter<::ActorDefinitionIdentifier>>               mTypeFilters{};
    ::std::vector<::InvertableFilter<::HashedString>>                            mFamilyFilters{};
    ::std::vector<::InvertableFilter<::std::string>>                             mTagFilters{};
    ::std::vector<::std::function<bool(::CommandOrigin const&, ::Actor const&)>> mFilterChain{};
    ::CommandPosition                                                            mPosition{};
    ::Vec3                                                                       mBoxDeltas{};
    float                                                                        mRadiusMinSqr{0.0f};
    float  mRadiusMaxSqr{std::numeric_limits<float>::max()};
    uint64 mCount{std::numeric_limits<uint>::max()};
    bool   mIncludeDeadPlayers{};
    bool   mIsPositionBound{};
    bool   mDistanceFiltered{};
    bool   mPositionFiltered{};
    bool   mCountFiltered{};
    bool   mHaveDeltas{};
    bool   mForcePlayer{};
    bool   mExcludeAgents{};
    bool   mIsExplicitIdSelector{};
    bool   mForceDimensionFiltering{};
    bool   mIsCodeBuilderEnabled{};
    // NOLINTEND

    CommandSelectorBase() = default;
    CommandSelectorBase(bool forcePlayer) : mForcePlayer(forcePlayer) {}

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addFilter(::std::function<bool(::CommandOrigin const&, ::Actor const&)> filter);

    MCNAPI bool compile(::CommandOrigin const& origin, ::std::string& error);

    MCNAPI bool filter(::CommandOrigin const& origin, ::Actor& actor) const;

    MCNAPI ::std::string getName() const;

    MCAPI bool isExpansionAllowed(::CommandOrigin const& origin) const;

    MCNAPI bool matchFamily(::Actor const& entity) const;

    MCNAPI bool matchName(::Actor const& entity) const;

    MCNAPI bool matchTag(::Actor const& entity) const;

    MCNAPI bool matchType(::Actor const& entity) const;

    MCNAPI ::std::shared_ptr<::std::vector<::Actor*>> newResults(::CommandOrigin const& origin) const;

    MCAPI ~CommandSelectorBase();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 const getFeetPos(int const version, ::Actor const& entity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
