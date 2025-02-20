#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
namespace ScriptModuleMinecraft { class ScriptBlockVolumeIterable; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockLocationIterator
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptBlockLocationIterator> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk38fd69;
    ::ll::UntypedStorage<8, 8>  mUnkdea65b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockLocationIterator& operator=(ScriptBlockLocationIterator const&);
    ScriptBlockLocationIterator(ScriptBlockLocationIterator const&);
    ScriptBlockLocationIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockLocationIterator(
        ::std::unique_ptr<::BaseBlockLocationIterator> nativeIterator,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeIterable>
            strongTypedIterableHandle
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockLocationIterator> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::BaseBlockLocationIterator> nativeIterator,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeIterable>
            strongTypedIterableHandle
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
