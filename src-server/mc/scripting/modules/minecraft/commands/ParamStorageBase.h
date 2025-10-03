#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandParamType.h"

namespace ScriptModuleMinecraft {

class ParamStorageBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParamStorageBase() = default;

    // vIndex: 1
    virtual void* getParamStorageValue() = 0;

    // vIndex: 2
    virtual bool* getParamStorageIsSet() = 0;

    // vIndex: 3
    virtual ::ScriptModuleMinecraft::ScriptCustomCommandParamType paramType() const = 0;

    // vIndex: 4
    virtual ::entt::meta_any paramAsAny() = 0;

    // vIndex: 5
    virtual bool paramIsSet() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
