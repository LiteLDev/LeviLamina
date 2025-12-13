#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Settings { struct AudioProps; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Settings {

class Audio {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf77010;
    ::ll::UntypedStorage<1, 2>  mUnkbf53bd;
    // NOLINTEND

public:
    // prevent constructor by default
    Audio& operator=(Audio const&);
    Audio(Audio const&);
    Audio();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit Audio(::std::function<void(::Editor::Settings::AudioProps const&)> callback);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::function<void(::Editor::Settings::AudioProps const&)> callback);
    // NOLINTEND
};

} // namespace Editor::Settings
