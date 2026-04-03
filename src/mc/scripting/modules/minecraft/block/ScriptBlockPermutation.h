#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidType.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft { class IScriptBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutationComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { struct ClassBinding; }
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
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> block;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mBlock;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutationComponent>>>
        mAttachedComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockPermutation& operator=(ScriptBlockPermutation const&);
    ScriptBlockPermutation(ScriptBlockPermutation const&);
    ScriptBlockPermutation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockPermutation(::ScriptModuleMinecraft::ScriptBlockPermutation&&);

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptBlockProperty>>>
    _createPropertyV010(::std::string const& propertyName);

    MCAPI ::Scripting::Result_deprecated<bool>
    canBeDestroyedByLiquidSpread(::SharedTypes::v1_26_0::LiquidType liquidType) const;

    MCAPI ::Scripting::Result_deprecated<bool> canContainLiquid(::SharedTypes::v1_26_0::LiquidType liquidType) const;

    MCAPI ::std::vector<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptBlockProperty>>>
    getAllPropertiesV010();

    MCAPI ::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>> getAllStates() const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
    getItemStack(int amount) const;

    MCAPI ::std::string getLocalizationKey() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptBlockProperty>>>
    getPropertyV010(::std::string const& propertyName);

    MCAPI ::std::optional<::std::variant<int, ::std::string, bool>> getState(::std::string const& name) const;

    MCAPI ::std::vector<::std::string> getTags() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType> getType() const;

    MCAPI bool hasTag(::std::string const& tag) const;

    MCAPI ::Scripting::Result_deprecated<bool> isLiquidBlocking(::SharedTypes::v1_26_0::LiquidType liquidType) const;

    MCAPI ::Scripting::Result_deprecated<bool>
    liquidSpreadCausesSpawn(::SharedTypes::v1_26_0::LiquidType liquidType) const;

    MCAPI bool matches(
        ::std::string                                                                                  blockName,
        ::std::optional<::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>>> properties
    ) const;

    MCAPI ::ScriptModuleMinecraft::ScriptBlockPermutation& operator=(::ScriptModuleMinecraft::ScriptBlockPermutation&&);

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
    withState(
        ::Scripting::WeakLifetimeScope const&           scope,
        ::std::string const&                            name,
        ::std::variant<int, ::std::string, bool> const& value
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockPermutation&&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
