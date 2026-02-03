#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
namespace ScriptModuleMinecraft { class ScriptBlockVolumeIterable; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
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
    ScriptBlockLocationIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockLocationIterator(
        ::std::unique_ptr<::BaseBlockLocationIterator> nativeIterator,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeIterable>
            strongTypedIterableHandle
    );

    MCAPI ::Scripting::Result<bool, ::Scripting::EngineError> isValid() const;
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
