#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

struct ScriptRuntimeStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> mMemoryAllocatedCount;
    ::ll::TypedStorage<8, 8, int64> mMemoryAllocatedSize;
    ::ll::TypedStorage<8, 8, int64> mMemoryUsedCount;
    ::ll::TypedStorage<8, 8, int64> mMemoryUsedSize;
    ::ll::TypedStorage<8, 8, int64> mAtomCount;
    ::ll::TypedStorage<8, 8, int64> mAtomSize;
    ::ll::TypedStorage<8, 8, int64> mStringCount;
    ::ll::TypedStorage<8, 8, int64> mStringSize;
    ::ll::TypedStorage<8, 8, int64> mObjectCount;
    ::ll::TypedStorage<8, 8, int64> mObjectSize;
    ::ll::TypedStorage<8, 8, int64> mPropertyCount;
    ::ll::TypedStorage<8, 8, int64> mPropertySize;
    ::ll::TypedStorage<8, 8, int64> mFunctionCount;
    ::ll::TypedStorage<8, 8, int64> mFunctionSize;
    ::ll::TypedStorage<8, 8, int64> mFunctionCodeSize;
    ::ll::TypedStorage<8, 8, int64> mFunctionLineCount;
    ::ll::TypedStorage<8, 8, int64> mArrayCount;
    ::ll::TypedStorage<8, 8, int64> mFastArrayCount;
    ::ll::TypedStorage<8, 8, int64> mFastArrayElementCount;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
