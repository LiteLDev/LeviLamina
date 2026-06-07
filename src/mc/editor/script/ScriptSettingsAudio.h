#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptSettingsAudioPropType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSettingsAudio {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk695e63;
    ::ll::UntypedStorage<8, 16> mUnkd11ecb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettingsAudio& operator=(ScriptSettingsAudio const&);
    ScriptSettingsAudio(ScriptSettingsAudio const&);
    ScriptSettingsAudio();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::variant<float, bool>>
    get(::Editor::ScriptModule::ScriptSettingsAudioPropType prop) const;

    MCNAPI ::std::unordered_map<::std::string, ::std::optional<::std::variant<float, bool>>> getAll() const;

    MCNAPI ::Scripting::Result_deprecated<void>
    set(::Editor::ScriptModule::ScriptSettingsAudioPropType prop, ::std::variant<float, bool> const& value);

    MCNAPI ::Scripting::Result_deprecated<void>
    setAll(::std::unordered_map<::std::string, ::std::optional<::std::variant<float, bool>>> const& props);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptPropsEnum();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
