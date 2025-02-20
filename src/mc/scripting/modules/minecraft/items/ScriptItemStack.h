#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class ItemStackBase;
class Vec3;
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptPotionOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemStack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk493241;
    ::ll::UntypedStorage<8, 16>  mUnka16d8e;
    ::ll::UntypedStorage<8, 32>  mUnk4308e2;
    ::ll::UntypedStorage<8, 32>  mUnk840f50;
    ::ll::UntypedStorage<8, 64>  mUnkde4687;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStack();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemStack(::ScriptModuleMinecraft::ScriptItemStack&&);

    MCAPI ScriptItemStack(::ScriptModuleMinecraft::ScriptItemStack const&);

    MCAPI ScriptItemStack(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::ItemStackBase const&                                                               item,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle
    );

    MCAPI ScriptItemStack(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle,
        int                                                                                  amount,
        int                                                                                  data
    );

    MCAPI ::std::optional<::Scripting::Error> _validateDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value
    ) const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>
    clone(::Scripting::WeakLifetimeScope scope) const;

    MCAPI ::std::vector<::std::string> getCanDestroy() const;

    MCAPI ::std::vector<::std::string> getCanPlaceOn() const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>
    getComponent(
        ::std::unordered_map<
            ::std::string,
            ::std::shared_ptr<::ScriptModuleMinecraft::IScriptItemComponentFactory>> const& factories,
        ::std::string const&                                                                id
    );

    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>
    getComponents(::std::unordered_map<
                  ::std::string,
                  ::std::shared_ptr<::ScriptModuleMinecraft::IScriptItemComponentFactory>> const& factories);

    MCAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>
    getDynamicProperty(::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCAPI ::std::vector<::std::string> getDynamicPropertyIds(::Scripting::ContextConfig const& contextConfig);

    MCAPI int getDynamicPropertyTotalByteCount(::Scripting::ContextConfig const& contextConfig);

    MCAPI ::std::vector<::std::string> getLore() const;

    MCAPI ::std::optional<::std::string> getNameTag() const;

    MCAPI ::std::vector<::std::string> getTags() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> getType() const;

    MCAPI ::std::string getTypeId() const;

    MCAPI bool hasComponent(
        ::std::unordered_map<
            ::std::string,
            ::std::shared_ptr<::ScriptModuleMinecraft::IScriptItemComponentFactory>> const& factories,
        ::std::string const&                                                                id
    );

    MCAPI bool hasTag(::std::string const& tag) const;

    MCAPI bool matches(
        ::std::string                                                                                  itemName,
        ::std::optional<::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>>> properties
    ) const;

    MCAPI ::ScriptModuleMinecraft::ScriptItemStack& operator=(::ScriptModuleMinecraft::ScriptItemStack const&);

    MCAPI ::ScriptModuleMinecraft::ScriptItemStack& operator=(::ScriptModuleMinecraft::ScriptItemStack&&);

    MCAPI ::Scripting::Result<void> setAmount(int amount);

    MCAPI ::Scripting::Result<void> setCanDestroy(::std::optional<::std::vector<::std::string>> const& blockIdentifiers
    );

    MCAPI ::Scripting::Result<void> setCanPlaceOn(::std::optional<::std::vector<::std::string>> const& blockIdentifiers
    );

    MCAPI ::Scripting::Result<void> setDynamicProperties(
        ::Scripting::ContextConfig const& contextConfig,
        ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>> const& values
    );

    MCAPI ::Scripting::Result<void> setDynamicProperty(
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
    );

    MCAPI ::Scripting::Result<void> setLore(::std::optional<::std::vector<::std::string>> const& loreList);

    MCAPI ::Scripting::Result<void> setNameTag(::std::optional<::std::string> nameTag);

    MCAPI void setNameTagV010(::std::optional<::std::string> nameTag);

    MCAPI ~ScriptItemStack();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
    _createPotion(::Scripting::WeakLifetimeScope& scope, ::ScriptModuleMinecraft::ScriptPotionOptions const& options);

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemStack>
    bind(::BaseGameVersion const& baseGameVersion, ::Scripting::Version const& version);

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>
    createHandle(::Scripting::WeakLifetimeScope scope, ::ItemStackBase const& item);

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
    createOptionalHandle(::Scripting::WeakLifetimeScope scope, ::ItemStackBase const& item);

    MCAPI static ::std::optional<::Scripting::Error> validateLoreLength(::std::vector<::std::string> const& loreList);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemStack&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemStack const&);

    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::ItemStackBase const&                                                               item,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle
    );

    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle,
        int                                                                                  amount,
        int                                                                                  data
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
