#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class HashedString;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockType {
public:
    // ScriptBlockType inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptBlockType inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockType const*> mBlockTypePtr;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                mScope;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::HashedString const>> mBlockName;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ScriptBlockType& operator=(ScriptBlockType const&);
    ScriptBlockType();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ScriptBlockType(::ScriptModuleMinecraft::ScriptBlockType const&);
#endif

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
    createDefaultBlockPermutationV010() const;

    MCAPI ::BlockType const& getBlock() const;

    MCAPI ::std::string getId() const;

#ifdef LL_PLAT_S
    MCAPI ::ScriptModuleMinecraft::ScriptBlockType& operator=(::ScriptModuleMinecraft::ScriptBlockType&& rhs);

    MCAPI ~ScriptBlockType();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::BlockType const& block);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockType const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
