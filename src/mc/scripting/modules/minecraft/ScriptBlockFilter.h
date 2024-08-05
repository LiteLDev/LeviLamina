#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFilter {
public:
    // NOLINTBEGIN
    MCAPI ScriptBlockFilter();

    MCAPI ScriptBlockFilter(class ScriptModuleMinecraft::ScriptBlockFilter&&);

    MCAPI ScriptBlockFilter(class ScriptModuleMinecraft::ScriptBlockFilter const&);

    MCAPI class Scripting::Result<std::optional<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>>
    getExcludePermutations() const;

    MCAPI class Scripting::Result<std::optional<std::vector<std::string>>> getExcludeTags() const;

    MCAPI class Scripting::Result<std::optional<std::vector<std::string>>> getExcludeTypes() const;

    MCAPI class Scripting::Result<std::optional<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>>
    getIncludePermutations() const;

    MCAPI class Scripting::Result<std::optional<std::vector<std::string>>> getIncludeTags() const;

    MCAPI class Scripting::Result<std::optional<std::vector<std::string>>> getIncludeTypes() const;

    MCAPI bool isValid(struct Scripting::Error&) const;

    MCAPI bool operator()(class Block const&) const;

    MCAPI class ScriptModuleMinecraft::ScriptBlockFilter& operator=(class ScriptModuleMinecraft::ScriptBlockFilter&&);

    MCAPI class ScriptModuleMinecraft::ScriptBlockFilter&
    operator=(class ScriptModuleMinecraft::ScriptBlockFilter const&);

    MCAPI class Scripting::Result<void>
    setExcludePermutations(std::optional<std::vector<class Scripting::StrongTypedObjectHandle<
                               class ScriptModuleMinecraft::ScriptBlockPermutation>>> const&);

    MCAPI class Scripting::Result<void> setExcludeTags(std::optional<std::vector<std::string>>);

    MCAPI class Scripting::Result<void> setExcludeTypes(std::optional<std::vector<std::string>>);

    MCAPI class Scripting::Result<void>
    setIncludePermutations(std::optional<std::vector<class Scripting::StrongTypedObjectHandle<
                               class ScriptModuleMinecraft::ScriptBlockPermutation>>> const&);

    MCAPI class Scripting::Result<void> setIncludeTags(std::optional<std::vector<std::string>>);

    MCAPI class Scripting::Result<void> setIncludeTypes(std::optional<std::vector<std::string>>);

    MCAPI ~ScriptBlockFilter();

    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptBlockFilter> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
