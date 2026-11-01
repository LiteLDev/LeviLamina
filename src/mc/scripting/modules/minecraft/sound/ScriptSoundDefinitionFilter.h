#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSoundDefinitionFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mMinDuration;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mMaxDuration;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mGenres;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mMoods;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mArtists;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mTitles;
    ::ll::TypedStorage<8, 72, ::std::optional<::std::unordered_map<::std::string, ::std::vector<::std::string>>>> mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundDefinitionFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSoundDefinitionFilter(::ScriptModuleMinecraft::ScriptSoundDefinitionFilter const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptSoundDefinitionFilter&
    operator=(::ScriptModuleMinecraft::ScriptSoundDefinitionFilter&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptSoundDefinitionFilter&
    operator=(::ScriptModuleMinecraft::ScriptSoundDefinitionFilter const&);

    MCNAPI ~ScriptSoundDefinitionFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSoundDefinitionFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
