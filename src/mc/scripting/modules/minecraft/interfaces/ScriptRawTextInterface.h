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
    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptRawTextInterface const& other) const;

    MCNAPI ~ScriptRawTextInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptRawTextInterface> bind();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRawTextInterface fromJSON(::Json::Value const& json);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
