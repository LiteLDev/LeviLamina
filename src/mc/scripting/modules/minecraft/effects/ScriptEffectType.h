#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptEffectType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka2fcd9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEffectType& operator=(ScriptEffectType const&);
    ScriptEffectType(ScriptEffectType const&);
    ScriptEffectType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getName_V1() const;

    MCAPI ::std::string getName_V2() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptEffectType> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
