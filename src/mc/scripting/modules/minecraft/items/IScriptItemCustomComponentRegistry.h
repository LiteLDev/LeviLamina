#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/items/IScriptItemCustomComponentReader.h"
#include "mc/scripting/modules/minecraft/items/IScriptItemCustomComponentWriter.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventListener;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptItemCustomComponentRegistry : public ::ScriptModuleMinecraft::IScriptItemCustomComponentReader,
                                           public ::ScriptModuleMinecraft::IScriptItemCustomComponentWriter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void onReload() = 0;

    // vIndex: 4
    virtual void onScriptInitializationComplete() = 0;

    // vIndex: 5
    virtual void onScriptModuleStartupComplete() = 0;

    // vIndex: 6
    virtual ::ScriptDeferredEventListener& getEventListener() = 0;

    // vIndex: 7
    virtual void setCerealContext(::cereal::ReflectionCtx&);

    // vIndex: 0
    virtual ~IScriptItemCustomComponentRegistry() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
