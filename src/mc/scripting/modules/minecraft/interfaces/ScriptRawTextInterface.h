#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawTextInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2a76a3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRawTextInterface& operator=(ScriptRawTextInterface const&);
    ScriptRawTextInterface(ScriptRawTextInterface const&);
    ScriptRawTextInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool operator==(::ScriptModuleMinecraft::ScriptRawTextInterface const& other) const;

    MCAPI ~ScriptRawTextInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptRawTextInterface> bind();

    MCAPI static ::ScriptModuleMinecraft::ScriptRawTextInterface fromJSON(::Json::Value const& json);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
