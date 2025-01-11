#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/selectors/ActorSelectorType.h"
#include "mc/world/actor/selectors/InvertableFilter.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class CommandIntegerRange;
class CommandPosition;
class Vec3;
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
    MCAPI ActorSelectorArgs();

    MCAPI ActorSelectorArgs(::ActorSelectorArgs const&);

    MCAPI ActorSelectorArgs(::ActorSelectorArgs&&);

    MCAPI ::ActorSelectorArgs& operator=(::ActorSelectorArgs const&);

    MCAPI ::ActorSelectorArgs& operator=(::ActorSelectorArgs&&);

    MCAPI ~ActorSelectorArgs();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::pair<int, int> const& DEFAULT_LEVEL();

    MCAPI static ::std::pair<float, float> const& DEFAULT_X_ROTATION();

    MCAPI static ::std::pair<float, float> const& DEFAULT_Y_ROTATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ActorSelectorArgs const&);

    MCAPI void* $ctor(::ActorSelectorArgs&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
