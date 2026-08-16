#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandParamType.h"

namespace ScriptModuleMinecraft {

class ParamStorageBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParamStorageBase();

    virtual void* getParamStorageValue() = 0;

    virtual bool* getParamStorageIsSet() = 0;

    virtual ::ScriptModuleMinecraft::ScriptCustomCommandParamType paramType() const = 0;

    virtual ::entt::meta_any paramAsAny() = 0;

    virtual bool paramIsSet() const = 0;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
