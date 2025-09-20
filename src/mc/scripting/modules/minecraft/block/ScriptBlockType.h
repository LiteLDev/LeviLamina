#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockType;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { class WeakLifetimeScope; }
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
        ::ll::UntypedStorage<8, 8> mUnkc3ff51;
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
    ::ll::UntypedStorage<8, 16> mUnk63c7cf;
    ::ll::UntypedStorage<8, 8>  mUnk317417;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockType& operator=(ScriptBlockType const&);
    ScriptBlockType(ScriptBlockType const&);
    ScriptBlockType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
    createDefaultBlockPermutationV010() const;

    MCNAPI ::BlockType const& getBlock() const;

    MCNAPI ::std::string getId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::BlockType const& block);

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>>
    tryGetHandle(::Scripting::WeakLifetimeScope const& scope, ::BlockType const& block);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
