#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPermutation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKPERMUTATION
public:
    ScriptBlockPermutation& operator=(ScriptBlockPermutation const&) = delete;
    ScriptBlockPermutation(ScriptBlockPermutation const&)            = delete;
    ScriptBlockPermutation()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?clone\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEBA?AV?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation> clone() const;
    /**
     * @symbol
     * ?getAllPropertiesV010\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEAA?AV?$vector\@V?$StrongTypedObjectHandle\@VIScriptBlockProperty\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VIScriptBlockProperty\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::IScriptBlockProperty>>
          getAllPropertiesV010();
    /**
     * @symbol
     * ?getAllStates\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEBA?AV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$variant\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$variant\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        std::string,
        class std::variant<int, std::string, bool>,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, class std::variant<int, std::string, bool>>>>
    getAllStates() const;
    /**
     * @symbol ?getBlock\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const& getBlock() const;
    /**
     * @symbol
     * ?getItemStack\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEBA?AV?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack> getItemStack(int
    ) const;
    /**
     * @symbol
     * ?getPropertyV010\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VIScriptBlockProperty\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::IScriptBlockProperty>>
    getPropertyV010(std::string const&);
    /**
     * @symbol
     * ?getState\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEBA?AV?$optional\@V?$variant\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@\@Z
     */
    MCAPI class std::optional<class std::variant<int, std::string, bool>> getState(std::string const&) const;
    /**
     * @symbol
     * ?getTags\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getTags() const;
    /**
     * @symbol
     * ?getType\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEBA?AV?$StrongTypedObjectHandle\@VScriptBlockType\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType> getType() const;
    /**
     * @symbol
     * ?hasTag\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasTag(std::string const&) const;
    /**
     * @symbol
     * ?matches\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEBA_NAEBUContextConfig\@Scripting\@\@VWeakLifetimeScope\@4\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$variant\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$variant\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@2\@\@std\@\@\@2\@\@std\@\@\@7\@\@Z
     */
    MCAPI bool
    matches(struct Scripting::ContextConfig const&, class Scripting::WeakLifetimeScope, std::string, class std::optional<class std::unordered_map<std::string, class std::variant<int, std::string, bool>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::variant<int, std::string, bool>>>>>)
        const;
    /**
     * @symbol ??4ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptBlockPermutation&
    operator=(class ScriptModuleMinecraft::ScriptBlockPermutation&&);
    /**
     * @symbol ?setBlock\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void setBlock(class Block const&);
    /**
     * @symbol
     * ?withState\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBUContextConfig\@4\@VWeakLifetimeScope\@4\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$variant\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@8\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>
    withState(struct Scripting::ContextConfig const&, class Scripting::WeakLifetimeScope, std::string, class std::variant<int, std::string, bool>);
    /**
     * @symbol ??1ScriptBlockPermutation\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptBlockPermutation();
    /**
     * @symbol
     * ?bind\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockPermutation> bind();
    /**
     * @symbol
     * ?bindV010\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockPermutation> bindV010();
    /**
     * @symbol
     * ?getOrCreateHandle\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBVBlock\@\@AEBVWeakLifetimeScope\@4\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>
    getOrCreateHandle(class Block const&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol
     * ?resolve\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@SA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBUContextConfig\@4\@VWeakLifetimeScope\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$optional\@V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$variant\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$variant\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@2\@\@std\@\@\@2\@\@std\@\@\@8\@\@Z
     */
    MCAPI static class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>
    resolve(struct Scripting::ContextConfig const&, class Scripting::WeakLifetimeScope, std::string const&, class std::optional<class std::unordered_map<std::string, class std::variant<int, std::string, bool>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::variant<int, std::string, bool>>>>> const&);

    // private:
    /**
     * @symbol
     * ?_createProperty\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@AEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VIScriptBlockProperty\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::IScriptBlockProperty>>
    _createProperty(std::string const&);
    /**
     * @symbol
     * ?CreateBlockDescriptior\@ScriptBlockPermutation\@ScriptModuleMinecraft\@\@CA?AVBlockDescriptor\@\@AEBUContextConfig\@Scripting\@\@VWeakLifetimeScope\@5\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$variant\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$variant\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@2\@\@std\@\@\@2\@\@std\@\@\@8\@\@Z
     */
    MCAPI static class BlockDescriptor CreateBlockDescriptior(struct Scripting::ContextConfig const&, class Scripting::WeakLifetimeScope, std::string, class std::optional<class std::unordered_map<std::string, class std::variant<int, std::string, bool>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::variant<int, std::string, bool>>>>>);

private:
};

}; // namespace ScriptModuleMinecraft
