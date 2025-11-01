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

class ScriptBlockLocationIterator : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptBlockLocationIterator> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk38fd69;
    ::ll::UntypedStorage<8, 8> mUnkdea65b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockLocationIterator& operator=(ScriptBlockLocationIterator const&);
    ScriptBlockLocationIterator(ScriptBlockLocationIterator const&);
    ScriptBlockLocationIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockLocationIterator(::std::unique_ptr<::BaseBlockLocationIterator> nativeIterator, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeIterable> strongTypedIterableHandle);

    MCNAPI ::Scripting::Result<bool, ::Scripting::EngineError> isValid() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::BaseBlockLocationIterator> nativeIterator, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeIterable> strongTypedIterableHandle);
    // NOLINTEND

};

}
