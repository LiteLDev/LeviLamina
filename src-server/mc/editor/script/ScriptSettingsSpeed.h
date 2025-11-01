#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptSettingsSpeedPropType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSettingsSpeed {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4d8299;
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

    MCNAPI ::Scripting::Result_deprecated<void> set(::Editor::ScriptModule::ScriptSettingsSpeedPropType prop, ::std::variant<float> const& value);

    MCNAPI ::Scripting::Result_deprecated<void> setAll(::std::unordered_map<::std::string, ::std::optional<::std::variant<float>>> const& props);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptPropsEnum();
    // NOLINTEND

};

}
