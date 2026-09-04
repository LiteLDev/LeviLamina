#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
namespace ScriptModuleMinecraft { class ScriptBlockVolumeIterable; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockLocationIterator
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptBlockLocationIterator> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeIterable>>
                                                                             mStrongTypedIterableHandle;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BaseBlockLocationIterator>> mIterator;
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

    MCAPI ::ScriptModuleMinecraft::ScriptBlockLocationIterator&
    operator=(::ScriptModuleMinecraft::ScriptBlockLocationIterator&& it);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
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
