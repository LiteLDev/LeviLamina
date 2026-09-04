#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UISoundPlayer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
// clang-format on

class MinecraftUISoundPlayer : public ::UISoundPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&> mMinecraft;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftUISoundPlayer& operator=(MinecraftUISoundPlayer const&);
    MinecraftUISoundPlayer(MinecraftUISoundPlayer const&);
    MinecraftUISoundPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftUISoundPlayer() /*override*/ = default;

    virtual void play(::std::string const& name, float volume, float pitch) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $play(::std::string const& name, float volume, float pitch) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
