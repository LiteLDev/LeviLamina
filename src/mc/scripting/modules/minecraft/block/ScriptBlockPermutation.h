#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/world/level/block/LiquidType.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft { class IScriptBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPermutation : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptBlockPermutation> {
public:
    // ScriptBlockPermutation inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptBlockPermutation inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk15953a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkca0900;
    ::ll::UntypedStorage<8, 8>  mUnkb17ea8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockPermutation& operator=(ScriptBlockPermutation const&);
    ScriptBlockPermutation(ScriptBlockPermutation const&);
    ScriptBlockPermutation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptBlockProperty>>>
    _createPropertyV010(::std::string const& propertyName);

    MCNAPI ::Scripting::Result<bool, ::Scripting::Error> canBeDestroyedByLiquidSpread(::LiquidType liquidType) const;

    MCNAPI ::Scripting::Result<bool, ::Scripting::Error> canContainLiquid(::LiquidType liquidType) const;

    MCNAPI ::std::vector<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptBlockProperty>>>
    getAllPropertiesV010();

    MCNAPI ::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>> getAllStates() const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
    getItemStack(int amount) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptBlockProperty>>>
    getPropertyV010(::std::string const& propertyName);

    MCNAPI ::std::optional<::std::variant<int, ::std::string, bool>> getState(::std::string const& name) const;

    MCNAPI ::std::vector<::std::string> getTags() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType> getType() const;

    MCNAPI bool hasTag(::std::string const& tag) const;

    MCNAPI ::Scripting::Result<bool, ::Scripting::Error> isLiquidBlocking(::LiquidType liquidType) const;

    MCNAPI ::Scripting::Result<bool, ::Scripting::Error> liquidSpreadCausesSpawn(::LiquidType liquidType) const;

    MCNAPI bool matches(
        ::std::string                                                                                  blockName,
        ::std::optional<::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>>> properties
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
    withState(
        ::Scripting::ContextConfig const&        contextConfig,
        ::Scripting::WeakLifetimeScope           scope,
        ::std::string                            name,
        ::std::variant<int, ::std::string, bool> value
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockPermutation> bind();

    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockPermutation> bindV010();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>
    getOrCreateHandle(::Block const& block, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI static ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
    resolve(
        ::Scripting::WeakLifetimeScope                                                                        scope,
        ::std::string const&                                                                                  blockName,
        ::std::optional<::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>>> const& properties
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
