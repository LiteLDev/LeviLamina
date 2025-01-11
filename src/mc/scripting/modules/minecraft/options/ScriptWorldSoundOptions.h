#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldSoundOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkd3ea43;
    ::ll::UntypedStorage<4, 8> mUnk816ed2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldSoundOptions& operator=(ScriptWorldSoundOptions const&);
    ScriptWorldSoundOptions(ScriptWorldSoundOptions const&);
    ScriptWorldSoundOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptWorldSoundOptions(::ScriptModuleMinecraft::ScriptSoundOptions const& soundOptions);

    MCAPI float getPitch() const;

    MCFOLD float getVolume() const;

    MCAPI ::std::optional<::Scripting::Error> validate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptWorldSoundOptions> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptSoundOptions const& soundOptions);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
