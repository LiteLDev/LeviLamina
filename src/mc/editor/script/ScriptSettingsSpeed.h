#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/script/ScriptSettingsSpeedPropType.h"

namespace Editor::ScriptModule {

class ScriptSettingsSpeed {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4d8299;
    ::ll::UntypedStorage<8, 16> mUnka710cb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettingsSpeed& operator=(ScriptSettingsSpeed const&);
    ScriptSettingsSpeed(ScriptSettingsSpeed const&);
    ScriptSettingsSpeed();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::variant<float>> get(::Editor::ScriptModule::ScriptSettingsSpeedPropType prop) const;

    MCNAPI ::std::unordered_map<::std::string, ::std::optional<::std::variant<float>>> getAll() const;

    MCNAPI ::Scripting::Result<void>
    set(::Editor::ScriptModule::ScriptSettingsSpeedPropType prop, ::std::variant<float> const& value);

    MCNAPI ::Scripting::Result<void>
    setAll(::std::unordered_map<::std::string, ::std::optional<::std::variant<float>>> const& props);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptSettingsSpeed> bindScript();

    MCNAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Editor::ScriptModule::ScriptSettingsSpeedPropType>
    bindScriptPropsEnum();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
