#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ObjectHandleValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

struct ObjectHandle {
public:
    // prevent constructor by default
    ObjectHandle& operator=(ObjectHandle const&);
    ObjectHandle(ObjectHandle const&);

public:
    // NOLINTBEGIN
    MCAPI ObjectHandle();

    MCAPI explicit ObjectHandle(uint64);

    MCAPI ObjectHandle(::Scripting::ObjectHandleValue, struct Scripting::ContextId);

    MCAPI uint64 combine() const;

    MCAPI bool empty() const;

    // NOLINTEND
};

}; // namespace Scripting
