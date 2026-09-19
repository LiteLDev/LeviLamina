#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorldClock;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTimeMarker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                          mName;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldClock const> const> mClock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTimeMarker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptTimeMarker(::HashedString const& timeMarkerName, ::Bedrock::NotNullNonOwnerPtr<::WorldClock const> clock);

    MCAPI ~ScriptTimeMarker();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& timeMarkerName, ::Bedrock::NotNullNonOwnerPtr<::WorldClock const> clock);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
