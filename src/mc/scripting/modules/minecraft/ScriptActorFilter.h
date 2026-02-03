#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptPropertyTargetSelectorOption; }
namespace ScriptModuleMinecraft { struct ScriptScoreTargetSelectorOption; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                           mMinLevel;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                           mMaxLevel;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mMinVerticalRotation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mMaxVerticalRotation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mMinHorizontalRotation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mMaxHorizontalRotation;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mType;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mFamilies;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mTags;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mName;
    ::ll::TypedStorage<4, 8, ::std::optional<::GameType>>                    mGameMode;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mExcludeTypes;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mExcludeFamilies;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mExcludeTags;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mExcludeNames;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::GameType>>>    mExcludeGameModes;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption>>>
        mScoreOptions;
    ::ll::
        TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption>>>
            mPropertyOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter&&);

    MCAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter const&);

    MCAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter&&);

    MCAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter const&);

    MCAPI ~ScriptActorFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
