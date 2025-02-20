#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawMessageInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk5071be;
    ::ll::UntypedStorage<8, 40> mUnkd71b92;
    ::ll::UntypedStorage<8, 8>  mUnk51e4bc;
    ::ll::UntypedStorage<8, 32> mUnkbb74af;
    ::ll::UntypedStorage<8, 88> mUnk52bfc9;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptRawMessageInterface();

    MCAPI ScriptRawMessageInterface(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other);

    MCAPI void buildJsonObject(::Json::Value& val) const;

    MCAPI ::ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other);

    MCAPI ::ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageInterface&& other);

    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other) const;

    MCAPI ::Scripting::Result_deprecated<::Json::Value>
    resolveAsJson(::Actor& recipient, ::CurrentCmdVersion commandVersion) const;

    MCAPI ::Scripting::Result_deprecated<::std::string>
    resolveAsJsonString(::Actor& recipient, ::CurrentCmdVersion commandVersion) const;

    MCAPI ::Json::Value toJson() const;

    MCAPI ~ScriptRawMessageInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptRawMessageInterface> bind();

    MCAPI static ::ScriptModuleMinecraft::ScriptRawMessageInterface fromJSON(::Json::Value const& json);

    MCAPI static ::ScriptModuleMinecraft::ScriptRawMessageInterface fromString(::std::string const& str);

    MCAPI static ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface> rawTextStringsToRawText(
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> const&
            rawTextWithString
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
