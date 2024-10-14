#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft { class IScriptBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPermutation {
public:
    // prevent constructor by default
    ScriptBlockPermutation& operator=(ScriptBlockPermutation const&);
    ScriptBlockPermutation(ScriptBlockPermutation const&);
    ScriptBlockPermutation();

public:
    // NOLINTBEGIN
    MCAPI std::vector<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::IScriptBlockProperty>>>
    getAllPropertiesV010();

    MCAPI std::unordered_map<std::string, std::variant<int, std::string, bool>> getAllStates() const;

    MCAPI class Block const& getBlock() const;

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>
          getItemStack(int amount) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::IScriptBlockProperty>>>
    getPropertyV010(std::string const& propertyName);

    MCAPI std::optional<std::variant<int, std::string, bool>> getState(std::string const& name) const;

    MCAPI std::vector<std::string> getTags() const;

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType> getType() const;

    MCAPI bool hasTag(std::string const& tag) const;

    MCAPI bool matches(
        std::string                                                                          blockName,
        std::optional<std::unordered_map<std::string, std::variant<int, std::string, bool>>> properties
    ) const;

    MCAPI class ScriptModuleMinecraft::ScriptBlockPermutation&
    operator=(class ScriptModuleMinecraft::ScriptBlockPermutation&& rhs);

    MCAPI void setBlock(class Block const& block);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>
    withState(
        struct Scripting::ContextConfig const& contextConfig,
        class Scripting::WeakLifetimeScope     scope,
        std::string                            name,
        std::variant<int, std::string, bool>   value
    );

    MCAPI ~ScriptBlockPermutation();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockPermutation> bind();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockPermutation> bindV010();

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>
    getOrCreateHandle(class Block const& block, class Scripting::WeakLifetimeScope const& scope);

    MCAPI static class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>
    resolve(
        class Scripting::WeakLifetimeScope                                                          scope,
        std::string const&                                                                          blockName,
        std::optional<std::unordered_map<std::string, std::variant<int, std::string, bool>>> const& properties
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::IScriptBlockProperty>>>
    _createPropertyV010(std::string const& propertyName);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
