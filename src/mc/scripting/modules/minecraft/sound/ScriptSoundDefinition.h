#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/scripting/modules/minecraft/sound/ScriptSoundDefinitionDurationInfo.h"
#include "mc/scripting/modules/minecraft/sound/ScriptSoundDefinitionMusicInfo.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSoundDefinition {
public:
    // ScriptSoundDefinition inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptSoundDefinition inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString> mId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                              mSoundEventId;
    ::ll::TypedStorage<4, 8, ::std::optional<::ScriptModuleMinecraft::ScriptSoundDefinitionDurationInfo>> mDurationInfo;
    ::ll::TypedStorage<8, 152, ::std::optional<::ScriptModuleMinecraft::ScriptSoundDefinitionMusicInfo>>  mMusicInfo;
    ::ll::TypedStorage<8, 72, ::std::optional<::std::unordered_map<::std::string, ::std::vector<::std::string>>>> mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundDefinition& operator=(ScriptSoundDefinition const&);
    ScriptSoundDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSoundDefinition(::ScriptModuleMinecraft::ScriptSoundDefinition const&);

    MCAPI ~ScriptSoundDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptSoundDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
