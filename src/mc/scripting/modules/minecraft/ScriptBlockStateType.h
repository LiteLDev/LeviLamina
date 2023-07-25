#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockStateType {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKSTATETYPE
public:
    ScriptBlockStateType& operator=(ScriptBlockStateType const&) = delete;
    ScriptBlockStateType(ScriptBlockStateType const&)            = delete;
    ScriptBlockStateType()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptBlockStateType\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockStateType\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockStateType> bind();
    /**
     * @symbol
     * ?getOrCreateHandle\@ScriptBlockStateType\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptBlockStateType\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBVWeakLifetimeScope\@4\@AEBVBlockState\@\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockStateType>
    getOrCreateHandle(class Scripting::WeakLifetimeScope const&, class BlockState const&);

    // private:
    /**
     * @symbol ?_fillValidValues\@ScriptBlockStateType\@ScriptModuleMinecraft\@\@AEAAXXZ
     */
    MCAPI void _fillValidValues();

private:
};

}; // namespace ScriptModuleMinecraft
