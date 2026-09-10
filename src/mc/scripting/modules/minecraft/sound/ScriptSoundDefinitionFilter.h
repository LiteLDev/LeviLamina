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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
