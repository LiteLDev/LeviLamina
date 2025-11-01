#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class ItemStackBase;
class Vec3;
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentReader; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemComponents; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct UnsupportedAPIError; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemStack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk493241;
    ::ll::UntypedStorage<8, 16> mUnka16d8e;
    ::ll::UntypedStorage<8, 32> mUnk4308e2;
    ::ll::UntypedStorage<8, 32> mUnk840f50;
    ::ll::UntypedStorage<8, 64> mUnkde4687;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemStack(::ScriptModuleMinecraft::ScriptItemStack&&);

    MCNAPI ScriptItemStack(::ScriptModuleMinecraft::ScriptItemStack const&);

    MCNAPI ScriptItemStack(::Scripting::WeakLifetimeScope& scope, ::ItemStackBase const& item, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle);

    MCNAPI ScriptItemStack(::Scripting::WeakLifetimeScope& scope, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle, int amount, int data);

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::UnsupportedAPIError> _validateDynamicProperty(::std::string const& key, ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value) const;

    MCNAPI void clearDynamicProperties(::Scripting::ContextConfig const& contextConfig);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> clone(::Scripting::WeakLifetimeScope scope) const;

    MCNAPI ::std::vector<::std::string> getCanDestroy() const;

    MCNAPI ::std::vector<::std::string> getCanPlaceOn() const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>> getComponent(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents> components, ::std::string_view id, bool includeCustom);

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>> getComponents(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents> components, bool includeCustom);

    MCNAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> getDynamicProperty(::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCNAPI ::std::vector<::std::string> getDynamicPropertyIds(::Scripting::ContextConfig const& contextConfig);

    MCNAPI int getDynamicPropertyTotalByteCount(::Scripting::ContextConfig const& contextConfig);

    MCNAPI ::Scripting::Result<::std::string, ::Scripting::EngineError> getLocalizationKey() const;

    MCNAPI ::std::vector<::std::string> getLore() const;

    MCNAPI ::std::optional<::std::string> getNameTag() const;

    MCNAPI ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface> getRawLore() const;

    MCNAPI ::std::vector<::std::string> getTags() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> getType() const;

    MCNAPI ::std::string getTypeId() const;

    MCNAPI bool hasComponent(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents> components, ::std::string_view id, bool includeCustom);

    MCNAPI bool hasTag(::std::string const& tag) const;

    MCNAPI bool isStackableWith(::ScriptModuleMinecraft::ScriptItemStack const& other) const;

    MCNAPI bool matches(::std::string itemName, ::std::optional<::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>>> properties) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptItemStack& operator=(::ScriptModuleMinecraft::ScriptItemStack const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptItemStack& operator=(::ScriptModuleMinecraft::ScriptItemStack&&);

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError> setAmount(int amount);

    MCNAPI ::Scripting::Result_deprecated<void> setCanDestroy(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCNAPI ::Scripting::Result_deprecated<void> setCanPlaceOn(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::UnsupportedAPIError> setDynamicProperties(::Scripting::ContextConfig const& contextConfig, ::std::unordered_map<::std::string, ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>> const& values);

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::UnsupportedAPIError> setDynamicProperty(::Scripting::ContextConfig const& contextConfig, ::std::string const& key, ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue);

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::Error> setLore(::std::optional<::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& loreVariantList);

    MCNAPI void setLoreV010(::std::optional<::std::vector<::std::string>> const& loreList);

    MCNAPI ::Scripting::Result_deprecated<void> setNameTag(::std::optional<::std::string> nameTag);

    MCNAPI void setNameTagV010(::std::optional<::std::string> nameTag);

    MCNAPI ~ScriptItemStack();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(::BaseGameVersion const& baseGameVersion, ::Scripting::Version const& version, ::WeakRef<::ScriptModuleMinecraft::IScriptItemCustomComponentReader const> itemCustomComponentRegistry);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> createHandle(::Scripting::WeakLifetimeScope scope, ::ItemStackBase const& item);

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> createOptionalHandle(::Scripting::WeakLifetimeScope scope, ::ItemStackBase const& item);

    MCNAPI static ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface> createRawLoreVector(::std::vector<::std::string> lore);

    MCNAPI static ::std::optional<::std::vector<::std::string>> tryCreateLoreVector(::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> const& loreVariantList, ::std::string& errorMessage);

    MCNAPI static ::std::optional<::Scripting::ArgumentOutOfBoundsError> validateLoreLength(::std::vector<::std::string> const& loreList);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemStack&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemStack const&);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope& scope, ::ItemStackBase const& item, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope& scope, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle, int amount, int data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
