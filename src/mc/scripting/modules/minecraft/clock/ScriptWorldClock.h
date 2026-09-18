#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class TimeMarker;
class WorldClock;
namespace ScriptModuleMinecraft { class ScriptTimeMarker; }
namespace ScriptModuleMinecraft { struct ScriptWorldClockTimeMarkerNotFoundError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldClock {
public:
    // ScriptWorldClock inner types define
    using Key = uint64;

    using ScriptTimeMarkerOrNameParam = ::std::variant<::ScriptModuleMinecraft::ScriptTimeMarker, ::std::string>;

    using TimeMarkerFromNameResult = ::nonstd::expected<
        ::Bedrock::NotNullNonOwnerPtr<::TimeMarker const>,
        ::ScriptModuleMinecraft::ScriptWorldClockTimeMarkerNotFoundError>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>              mScope;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldClock>> mClock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::nonstd::expected<
        ::Bedrock::NotNullNonOwnerPtr<::TimeMarker const>,
        ::ScriptModuleMinecraft::ScriptWorldClockTimeMarkerNotFoundError>
    _getTimeMarkerFromParam(
        ::std::variant<::ScriptModuleMinecraft::ScriptTimeMarker, ::std::string> const& timeMarkerOrName
    ) const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptWorldClockTimeMarkerNotFoundError>
    set(::std::variant<::ScriptModuleMinecraft::ScriptTimeMarker, ::std::string> const& timeMarkerOrName);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptWorldClockTimeMarkerNotFoundError>
    skipTo(::std::variant<::ScriptModuleMinecraft::ScriptTimeMarker, ::std::string> const& timeMarkerOrName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldClock>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::Bedrock::NotNullNonOwnerPtr<::WorldClock> clock);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
