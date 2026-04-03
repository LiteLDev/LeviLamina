#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::ScriptModule { struct ScriptCustomBiomeConfig; }
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptCustomBiomeSource
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptCustomBiomeSource> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9705fc;
    ::ll::UntypedStorage<8, 16> mUnk54edc0;
    ::ll::UntypedStorage<8, 16> mUnk34b4c9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomBiomeSource& operator=(ScriptCustomBiomeSource const&);
    ScriptCustomBiomeSource(ScriptCustomBiomeSource const&);
    ScriptCustomBiomeSource();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void destroy();

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptBiomeType> getBiomeAt(::Vec3 const& pos) const;

    MCNAPI ::std::string getId() const;

    MCNAPI ::Editor::ScriptModule::ScriptCustomBiomeSource&
    operator=(::Editor::ScriptModule::ScriptCustomBiomeSource&&);

    MCNAPI ::Scripting::Result_deprecated<void>
    recalculateBiomes(::std::vector<::Editor::ScriptModule::ScriptCustomBiomeConfig> const& newBiomes);

    MCNAPI ::Scripting::Result_deprecated<void>
    updateColor(::std::string const& biomeName, ::ScriptModuleMinecraft::ScriptRGBA const& color);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindType();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
