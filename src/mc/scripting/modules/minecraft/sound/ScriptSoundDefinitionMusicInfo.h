#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSoundDefinitionMusicInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mGenres;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mMoods;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mArtist;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mTitle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundDefinitionMusicInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSoundDefinitionMusicInfo(::ScriptModuleMinecraft::ScriptSoundDefinitionMusicInfo const&);

    MCAPI ::ScriptModuleMinecraft::ScriptSoundDefinitionMusicInfo&
    operator=(::ScriptModuleMinecraft::ScriptSoundDefinitionMusicInfo&&);

    MCFOLD ::ScriptModuleMinecraft::ScriptSoundDefinitionMusicInfo&
    operator=(::ScriptModuleMinecraft::ScriptSoundDefinitionMusicInfo const&);

    MCAPI ~ScriptSoundDefinitionMusicInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptSoundDefinitionMusicInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
