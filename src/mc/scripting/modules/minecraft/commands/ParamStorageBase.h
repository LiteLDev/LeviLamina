#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandParamType.h"

namespace ScriptModuleMinecraft {

class ParamStorageBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParamStorageBase() = default;

    virtual void* getParamStorageValue() = 0;

    virtual bool* getParamStorageIsSet() = 0;

    virtual ::ScriptModuleMinecraft::ScriptCustomCommandParamType paramType() const = 0;

    virtual ::entt::meta_any paramAsAny() = 0;

    virtual bool paramIsSet() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
