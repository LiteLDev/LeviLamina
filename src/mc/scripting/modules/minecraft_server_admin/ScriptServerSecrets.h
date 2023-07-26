#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class ScriptPackConfigurationManager;
namespace ScriptModuleMinecraftServerAdmin { class ScriptSecretString; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraftServerAdmin {

class ScriptServerSecrets {

public:
    // prevent constructor by default
    ScriptServerSecrets& operator=(ScriptServerSecrets const&) = delete;
    ScriptServerSecrets(ScriptServerSecrets const&)            = delete;
    ScriptServerSecrets()                                      = delete;

public:
    /**
     * @symbol ??0ScriptServerSecrets\@ScriptModuleMinecraftServerAdmin\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptServerSecrets(class ScriptModuleMinecraftServerAdmin::ScriptServerSecrets&&); // NOLINT
    /**
     * @symbol
     * ??0ScriptServerSecrets\@ScriptModuleMinecraftServerAdmin\@\@QEAA\@V?$NonOwnerPointer\@VScriptPackConfigurationManager\@\@\@Bedrock\@\@AEBUContextConfig\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptServerSecrets(class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager>, struct Scripting::ContextConfig const&); // NOLINT
    /**
     * @symbol
     * ?get\@ScriptServerSecrets\@ScriptModuleMinecraftServerAdmin\@\@QEBA?AV?$optional\@VScriptSecretString\@ScriptModuleMinecraftServerAdmin\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@\@Z
     */
    MCAPI class std::optional<class ScriptModuleMinecraftServerAdmin::ScriptSecretString>
    get(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getAllSecretNames\@ScriptServerSecrets\@ScriptModuleMinecraftServerAdmin\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getAllSecretNames() const; // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptServerSecrets\@ScriptModuleMinecraftServerAdmin\@\@SA?AV?$ClassBindingBuilder\@VScriptServerSecrets\@ScriptModuleMinecraftServerAdmin\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerAdmin::ScriptServerSecrets>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraftServerAdmin
