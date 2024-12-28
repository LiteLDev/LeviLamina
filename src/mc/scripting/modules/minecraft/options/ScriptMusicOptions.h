#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptMusicOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkc5fc5e;
    ::ll::UntypedStorage<4, 8> mUnk1a0684;
    ::ll::UntypedStorage<1, 2> mUnk8a9f22;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMusicOptions& operator=(ScriptMusicOptions const&);
    ScriptMusicOptions(ScriptMusicOptions const&);
    ScriptMusicOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float getFade() const;

    MCAPI bool getLoop() const;

    MCAPI float getVolume() const;

    MCAPI ::std::optional<::Scripting::Error> validate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptMusicOptions> bindV010();

    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptMusicOptions> bindV1();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& FADE_DEFAULT();

    MCAPI static float const& FADE_MIN();

    MCAPI static bool const& LOOP_DEFAULT();

    MCAPI static float const& VOLUME_DEFAULT();

    MCAPI static float const& VOLUME_MIN();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
