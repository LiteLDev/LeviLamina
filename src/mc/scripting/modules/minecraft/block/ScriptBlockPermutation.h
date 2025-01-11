#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

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
    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptBlockProperty>>>
    _createPropertyV010(::std::string const& propertyName);

    MCAPI ::std::vector<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptBlockProperty>>>
    getAllPropertiesV010();

    MCAPI ::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>> getAllStates() const;

    MCFOLD ::Block const& getBlock() const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
    getItemStack(int amount) const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptBlockProperty>>>
    getPropertyV010(::std::string const& propertyName);

    MCAPI ::std::optional<::std::variant<int, ::std::string, bool>> getState(::std::string const& name) const;

    MCAPI ::std::vector<::std::string> getTags() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType> getType() const;

    MCAPI bool matches(
        ::std::string                                                                                  blockName,
        ::std::optional<::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>>> properties
    ) const;

    MCFOLD ::ScriptModuleMinecraft::ScriptBlockPermutation&
    operator=(::ScriptModuleMinecraft::ScriptBlockPermutation&&);

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
    withState(
        ::Scripting::ContextConfig const&        contextConfig,
        ::Scripting::WeakLifetimeScope           scope,
        ::std::string                            name,
        ::std::variant<int, ::std::string, bool> value
    );

    MCAPI ~ScriptBlockPermutation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockPermutation> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockPermutation> bindV010();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>
    getOrCreateHandle(::Block const& block, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI static ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
    resolve(
        ::Scripting::WeakLifetimeScope                                                                        scope,
        ::std::string const&                                                                                  blockName,
        ::std::optional<::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>>> const& properties
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
