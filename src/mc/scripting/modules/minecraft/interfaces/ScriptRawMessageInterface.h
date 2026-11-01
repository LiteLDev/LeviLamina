#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/interfaces/ScriptRawMessageScoreInterface.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawMessageInterface {
public:
    // ScriptRawMessageInterface inner types define
    using RawTextType = ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface>;

    using RawTextTypeWithStrings =
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>;

    using WithType = ::std::variant<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptRawMessageInterface>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> text;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> translate;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::std::variant<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>>
        with;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface>>>
                                                                                                        rawtext;
    ::ll::TypedStorage<8, 88, ::std::optional<::ScriptModuleMinecraft::ScriptRawMessageScoreInterface>> score;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRawMessageInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptRawMessageInterface(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other);

    MCNAPI void buildJsonObject(::Json::Value& val) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageInterface&& other);

    MCNAPI ::ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other);

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other) const;

    MCNAPI ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError>
    resolveAsJson(::Actor& recipient, ::CurrentCmdVersion commandVersion) const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageError>
    resolveAsJsonString(::Actor& recipient, ::CurrentCmdVersion commandVersion) const;

    MCNAPI ::Json::Value toJson() const;

    MCNAPI ::Json::Value toRawTextJson() const;

    MCNAPI ::std::string toString() const;

    MCNAPI ~ScriptRawMessageInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();

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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptRawMessageInterface const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
