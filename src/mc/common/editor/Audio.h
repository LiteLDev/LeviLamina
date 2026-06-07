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
    MCNAPI explicit Audio(::std::function<void(::Editor::Settings::AudioProps const&)> callback);

    MCNAPI bool getAreSoundsMuted() const;

    MCNAPI bool getIsMusicMuted() const;

#ifdef LL_PLAT_C
    MCNAPI ::Editor::Settings::AudioProps const& getProperties() const;
#endif

    MCNAPI void setAreSoundsMuted(bool newIsMuted);

    MCNAPI void setIsMusicMuted(bool newIsMuted);

    MCNAPI void updateSettings(::Editor::Settings::AudioProps const& props, bool notifyUpdate);

    MCNAPI ~Audio();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::function<void(::Editor::Settings::AudioProps const&)> callback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Settings
