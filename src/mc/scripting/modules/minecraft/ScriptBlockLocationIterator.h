#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockLocationIterator
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptBlockLocationIterator> {
public:
    // member variables
    // NOLINTBEGIN
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
    MCAPI ScriptBlockLocationIterator(::ScriptModuleMinecraft::ScriptBlockLocationIterator&& it);

    MCAPI explicit ScriptBlockLocationIterator(::std::unique_ptr<::BaseBlockLocationIterator> nativeIterator);

    MCAPI ::ScriptModuleMinecraft::ScriptBlockLocationIterator&
    operator=(::ScriptModuleMinecraft::ScriptBlockLocationIterator&& it);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockLocationIterator> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockLocationIterator&& it);

    MCAPI void* $ctor(::std::unique_ptr<::BaseBlockLocationIterator> nativeIterator);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
