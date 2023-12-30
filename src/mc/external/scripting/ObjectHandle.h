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
    // symbol: ??0ObjectHandle@Scripting@@QEAA@XZ
    MCAPI ObjectHandle();

    // symbol: ??0ObjectHandle@Scripting@@QEAA@_K@Z
    MCAPI explicit ObjectHandle(uint64);

    // symbol: ??0ObjectHandle@Scripting@@QEAA@W4ObjectHandleValue@1@UContextId@1@@Z
    MCAPI ObjectHandle(::Scripting::ObjectHandleValue, struct Scripting::ContextId);

    // symbol: ?combine@ObjectHandle@Scripting@@QEBA_KXZ
    MCAPI uint64 combine() const;

    // symbol: ?empty@ObjectHandle@Scripting@@QEBA_NXZ
    MCAPI bool empty() const;

    // NOLINTEND
};

}; // namespace Scripting
