#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptFeatureFlagService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptFeatureFlagService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkabbbb0;
    ::ll::UntypedStorage<8, 8>  mUnk73bde7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptFeatureFlagService& operator=(ScriptFeatureFlagService const&);
    ScriptFeatureFlagService(ScriptFeatureFlagService const&);
    ScriptFeatureFlagService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::std::string> getFlagCategory(::std::string const& name) const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getFlagDescription(::std::string const& name) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptFeatureFlagCategory();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
