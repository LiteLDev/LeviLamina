#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptScoreTargetSelectorOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk385a3c;
    ::ll::UntypedStorage<4, 8>  mUnkbc73f6;
    ::ll::UntypedStorage<4, 8>  mUnkc71f5d;
    ::ll::UntypedStorage<1, 2>  mUnk324102;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreTargetSelectorOption& operator=(ScriptScoreTargetSelectorOption const&);
    ScriptScoreTargetSelectorOption(ScriptScoreTargetSelectorOption const&);
    ScriptScoreTargetSelectorOption();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&
    operator=(::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption> bindV010();

    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption>
    bindV1();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
