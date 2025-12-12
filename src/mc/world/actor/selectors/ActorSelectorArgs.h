#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/world/actor/selectors/ActorSelectorType.h"
#include "mc/world/actor/selectors/InvertableFilter.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class CommandIntegerRange;
struct CodeBuilderSelectorFilter;
struct HasItemFilter;
struct HasPermissionFilter;
struct HasPropertyFilter;
// clang-format on

struct ActorSelectorArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ActorSelectorType>                               mSelectionType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                   mExplicitId;
    ::ll::TypedStorage<8, 24, ::std::vector<::InvertableFilter<::std::string>>> mTypeFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::InvertableFilter<::std::string>>> mTagFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::InvertableFilter<::std::string>>> mNameFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::InvertableFilter<::std::string>>> mFamilyFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::InvertableFilter<::GameType>>>    mGameModeFilters;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                              mCount;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                            mRadiusMax;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                            mRadiusMin;
    ::ll::TypedStorage<4, 20, ::std::optional<::CommandPosition>>               mPosition;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                          mDeltas;
    ::ll::TypedStorage<4, 12, ::std::optional<::std::pair<float, float>>>       mXRotation;
    ::ll::TypedStorage<4, 12, ::std::optional<::std::pair<float, float>>>       mYRotation;
    ::ll::TypedStorage<4, 12, ::std::optional<::std::pair<int, int>>>           mLevel;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                             mForceDimensionFiltering;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::CommandIntegerRange>>> mScoreFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::HasItemFilter>>                                   mHasItemFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::HasPermissionFilter>>                             mHasPermissionFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::HasPropertyFilter>>                               mHasPropertyFilters;
    ::ll::TypedStorage<8, 24, ::std::vector<::CodeBuilderSelectorFilter>>                       mCodeBuilderFilters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorSelectorArgs();

    MCNAPI ActorSelectorArgs(::ActorSelectorArgs&&);

    MCNAPI ActorSelectorArgs(::ActorSelectorArgs const&);

    MCNAPI ::ActorSelectorArgs& operator=(::ActorSelectorArgs&&);

    MCNAPI ::ActorSelectorArgs& operator=(::ActorSelectorArgs const&);

    MCNAPI ~ActorSelectorArgs();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::pair<int, int> const& DEFAULT_LEVEL();

    MCNAPI static ::std::pair<float, float> const& DEFAULT_X_ROTATION();

    MCNAPI static ::std::pair<float, float> const& DEFAULT_Y_ROTATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ActorSelectorArgs&&);

    MCNAPI void* $ctor(::ActorSelectorArgs const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
