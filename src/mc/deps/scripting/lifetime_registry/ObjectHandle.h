#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/ObjectHandleValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

struct ObjectHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk94fcd0;
    ::ll::UntypedStorage<1, 1> mUnka0f03d;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectHandle& operator=(ObjectHandle const&);
    ObjectHandle(ObjectHandle const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ObjectHandle();

    MCNAPI explicit ObjectHandle(uint64 combined);

    MCNAPI ObjectHandle(::Scripting::ObjectHandleValue value_, ::Scripting::ContextId contextId_);

    MCNAPI uint64 combine() const;

    MCNAPI bool empty() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(uint64 combined);

    MCNAPI void* $ctor(::Scripting::ObjectHandleValue value_, ::Scripting::ContextId contextId_);
    // NOLINTEND
};

} // namespace Scripting
