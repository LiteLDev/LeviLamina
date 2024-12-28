#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptSettingsGraphicsPropType.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

namespace Editor::ScriptModule {

class ScriptSettingsGraphics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6a5d98;
    ::ll::UntypedStorage<8, 16> mUnk8653ab;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettingsGraphics& operator=(ScriptSettingsGraphics const&);
    ScriptSettingsGraphics(ScriptSettingsGraphics const&);
    ScriptSettingsGraphics();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::variant<int, bool, ::std::string>>
    get(::Editor::ScriptModule::ScriptSettingsGraphicsPropType prop) const;

    MCAPI ::std::unordered_map<::std::string, ::std::optional<::std::variant<int, bool, ::std::string>>> getAll() const;

    MCAPI ::Scripting::Result<void>
    set(::Editor::ScriptModule::ScriptSettingsGraphicsPropType prop,
        ::std::variant<int, bool, ::std::string> const&        value);

    MCAPI ::Scripting::Result<void>
    setAll(::std::unordered_map<::std::string, ::std::optional<::std::variant<int, bool, ::std::string>>> const& props);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptSettingsGraphics> bindScript();

    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Editor::ScriptModule::ScriptSettingsGraphicsPropType>
    bindScriptPropsEnum();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
