#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/network/NetworkIdentifierWithSubId.h"

// auto generated forward declare list
// clang-format off
class ILevel;
namespace ScriptModuleDebugUtilities { class ScriptDebugShape; }
// clang-format on

namespace ScriptModuleDebugUtilities {

struct ScriptDebugDrawerDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDebugShape>>>
                                                                        mShapes;
    ::ll::TypedStorage<8, 8, ::ILevel*>                                 mLevel;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>   mLastUpdate;
    ::ll::TypedStorage<8, 16, ::std::set<::NetworkIdentifierWithSubId>> mSentToClients;
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
