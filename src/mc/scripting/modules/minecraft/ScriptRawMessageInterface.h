#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawMessageInterface {
public:
    // prevent constructor by default
    ScriptRawMessageInterface();

public:
    // NOLINTBEGIN
    MCAPI ScriptRawMessageInterface(struct ScriptModuleMinecraft::ScriptRawMessageInterface const& other);

    MCAPI void buildJsonObject(class Json::Value& val) const;

    MCAPI struct ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawMessageInterface&& other);

    MCAPI struct ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawMessageInterface const& other);

    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptRawMessageInterface const& other) const;

    MCAPI class Scripting::Result<class Json::Value> resolveAsJson(class Actor&, ::CurrentCmdVersion) const;

    MCAPI class Scripting::Result<std::string> resolveAsJsonString(class Actor&, ::CurrentCmdVersion) const;

    MCAPI class Json::Value toJson() const;

    MCAPI ~ScriptRawMessageInterface();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptRawMessageInterface>
    bind();

    MCAPI static struct ScriptModuleMinecraft::ScriptRawMessageInterface fromJSON(class Json::Value const& json);

    MCAPI static struct ScriptModuleMinecraft::ScriptRawMessageInterface fromString(std::string const& str);

    MCAPI static std::vector<struct ScriptModuleMinecraft::ScriptRawMessageInterface>
    rawTextStringsToRawText(std::vector<
                            std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>> const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
