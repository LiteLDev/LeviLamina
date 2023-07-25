#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { enum class ScriptScoreboardIdentityType_t; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardIdentityType {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSCOREBOARDIDENTITYTYPE
public:
    ScriptScoreboardIdentityType& operator=(ScriptScoreboardIdentityType const&) = delete;
    ScriptScoreboardIdentityType(ScriptScoreboardIdentityType const&)            = delete;
    ScriptScoreboardIdentityType()                                               = delete;
#endif

public:
    /**
     * @symbol
     * ?bindV010\@ScriptScoreboardIdentityType\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@W4ScriptScoreboardIdentityType_t\@ScriptModuleMinecraft\@\@W412\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<
        enum class ScriptModuleMinecraft::ScriptScoreboardIdentityType_t,
        enum class ScriptModuleMinecraft::ScriptScoreboardIdentityType_t>
    bindV010();
    /**
     * @symbol
     * ?bindV1\@ScriptScoreboardIdentityType\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptScoreboardIdentityType_t\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::
        EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptScoreboardIdentityType_t>
        bindV1();
};

}; // namespace ScriptModuleMinecraft
