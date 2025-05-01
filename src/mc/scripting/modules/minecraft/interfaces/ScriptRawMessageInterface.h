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
    MCNAPI ScriptRawMessageInterface();

    MCNAPI ScriptRawMessageInterface(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other);

    MCNAPI void buildJsonObject(::Json::Value& val) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other);

    MCNAPI ::ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageInterface&& other);

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other) const;

    MCNAPI ::Scripting::Result_deprecated<::Json::Value>
    resolveAsJson(::Actor& recipient, ::CurrentCmdVersion commandVersion) const;

    MCNAPI ::Scripting::Result_deprecated<::std::string>
    resolveAsJsonString(::Actor& recipient, ::CurrentCmdVersion commandVersion) const;

    MCNAPI ::Json::Value toJson() const;

    MCNAPI ~ScriptRawMessageInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptRawMessageInterface> bind();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRawMessageInterface fromJSON(::Json::Value const& json);

    MCNAPI static ::ScriptModuleMinecraft::ScriptRawMessageInterface fromString(::std::string const& str);

    MCNAPI static ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface> rawTextStringsToRawText(
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> const&
            rawTextWithString
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
