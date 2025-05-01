#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace Editor::ScriptModule {

class ScriptUIElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk307e43;
    ::ll::UntypedStorage<8, 56> mUnk2bcb5d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptUIElement& operator=(ScriptUIElement const&);
    ScriptUIElement(ScriptUIElement const&);
    ScriptUIElement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::variant<float, bool, ::Vec3, ::std::string> const getInitialValue() const;

    MCNAPI ::Scripting::Closure<void(::std::variant<float, bool, ::Vec3, ::std::string>)> const getValueChanged() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptUIElement> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
