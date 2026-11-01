#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemComponents; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct UnsupportedAPIError; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemStack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance>                mItemInstance;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 32, ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
        mScriptStack;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>> mItemType;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>>
        mAttachedComponents;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ScriptItemStack(ScriptItemStack const&);
    ScriptItemStack();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ScriptItemStack();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ScriptItemStack(::ScriptModuleMinecraft::ScriptItemStack const&);
#endif

    MCNAPI ScriptItemStack(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle,
        int                                                                                  amount,
        int                                                                                  data
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::UnsupportedAPIError>
    _validateDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value
    ) const;

    MCNAPI ::std::vector<::std::string> getCanDestroy() const;

    MCNAPI ::std::vector<::std::string> getCanPlaceOn() const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>
    getComponent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents> components,
        ::std::string_view                                               id,
        bool                                                             includeCustom
    );

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>
    getComponents(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents> components, bool includeCustom);

    MCNAPI ::std::vector<::std::string> getLore() const;

    MCNAPI ::std::vector<::std::string> getTags() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptItemStack& operator=(::ScriptModuleMinecraft::ScriptItemStack const&);

    MCNAPI void setAmountV010(int amount);

    MCNAPI ::Scripting::Result_deprecated<void>
    setCanDestroy(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCNAPI ::Scripting::Result_deprecated<void>
    setCanPlaceOn(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCNAPI void setData(int data);

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::UnsupportedAPIError>
    setDynamicProperty(
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
    );

    MCNAPI ~ScriptItemStack();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents>& itemComponents,
        ::Scripting::Version const&                                       version
    );

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>
    createHandle(::Scripting::WeakLifetimeScope scope, ::ItemStackBase const& item);

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
    createOptionalHandle(::Scripting::WeakLifetimeScope scope, ::ItemStackBase const& item);

    MCNAPI static ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface>
    createRawLoreVector(::std::vector<::std::string> lore);

    MCNAPI static ::std::optional<::std::vector<::std::string>> tryCreateLoreVector(
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> const&
                       loreVariantList,
        ::std::string& errorMessage
    );

    MCNAPI static ::std::optional<::Scripting::ArgumentOutOfBoundsError>
    validateLoreLength(::std::vector<::std::string> const& loreList);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemStack const&);
#endif

    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle,
        int                                                                                  amount,
        int                                                                                  data
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
