#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DaylightCycle.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

namespace Editor {

class GameOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk3231c4;
    ::ll::UntypedStorage<4, 16> mUnk76ad7d;
    ::ll::UntypedStorage<4, 8>  mUnke2f52b;
    ::ll::UntypedStorage<4, 8>  mUnk8b4d53;
    ::ll::UntypedStorage<1, 2>  mUnk8af916;
    ::ll::UntypedStorage<1, 2>  mUnk8d511f;
    ::ll::UntypedStorage<1, 2>  mUnke9602a;
    ::ll::UntypedStorage<1, 2>  mUnkd7a1c1;
    ::ll::UntypedStorage<1, 2>  mUnk2f0b54;
    ::ll::UntypedStorage<1, 2>  mUnke2177b;
    ::ll::UntypedStorage<1, 2>  mUnkcf46e8;
    ::ll::UntypedStorage<1, 2>  mUnk6d813d;
    ::ll::UntypedStorage<1, 2>  mUnk410fee;
    ::ll::UntypedStorage<1, 2>  mUnk563b3f;
    ::ll::UntypedStorage<1, 2>  mUnk7a3b69;
    ::ll::UntypedStorage<1, 2>  mUnkbdc040;
    ::ll::UntypedStorage<1, 2>  mUnk5ec46b;
    ::ll::UntypedStorage<1, 2>  mUnkc1a987;
    ::ll::UntypedStorage<1, 2>  mUnk6a5dd4;
    ::ll::UntypedStorage<4, 8>  mUnk619676;
    ::ll::UntypedStorage<1, 2>  mUnk83ba42;
    ::ll::UntypedStorage<1, 2>  mUnkc70a5d;
    ::ll::UntypedStorage<4, 8>  mUnk81fb84;
    ::ll::UntypedStorage<8, 40> mUnk845420;
    ::ll::UntypedStorage<4, 8>  mUnk26f451;
    ::ll::UntypedStorage<1, 2>  mUnk73d972;
    ::ll::UntypedStorage<1, 2>  mUnk923f85;
    ::ll::UntypedStorage<4, 8>  mUnk87c67e;
    ::ll::UntypedStorage<1, 2>  mUnk12b1a0;
    ::ll::UntypedStorage<1, 2>  mUnk77e870;
    ::ll::UntypedStorage<1, 2>  mUnk1062ad;
    ::ll::UntypedStorage<1, 2>  mUnk77e4d8;
    ::ll::UntypedStorage<1, 2>  mUnk2aa3de;
    ::ll::UntypedStorage<4, 8>  mUnk916f4a;
    ::ll::UntypedStorage<4, 8>  mUnk157e68;
    ::ll::UntypedStorage<1, 2>  mUnk9a08d8;
    ::ll::UntypedStorage<1, 2>  mUnke3b4bb;
    ::ll::UntypedStorage<1, 2>  mUnkc2d909;
    ::ll::UntypedStorage<1, 2>  mUnk8bb5a2;
    ::ll::UntypedStorage<1, 2>  mUnk7dd657;
    ::ll::UntypedStorage<1, 2>  mUnk40f877;
    ::ll::UntypedStorage<1, 2>  mUnk7b143b;
    ::ll::UntypedStorage<1, 2>  mUnk990524;
    ::ll::UntypedStorage<1, 2>  mUnk8d66bb;
    ::ll::UntypedStorage<4, 8>  mUnk255572;
    ::ll::UntypedStorage<1, 2>  mUnkcddb56;
    ::ll::UntypedStorage<1, 2>  mUnke2cabd;
    ::ll::UntypedStorage<1, 2>  mUnk631ec3;
    ::ll::UntypedStorage<1, 2>  mUnk6f0707;
    ::ll::UntypedStorage<1, 2>  mUnk24b7c7;
    ::ll::UntypedStorage<1, 2>  mUnkde7d12;
    ::ll::UntypedStorage<4, 8>  mUnk3ed32b;
    ::ll::UntypedStorage<4, 8>  mUnkf3a4cb;
    ::ll::UntypedStorage<4, 8>  mUnk98cb77;
    // NOLINTEND

public:
    // prevent constructor by default
    GameOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameOptions(::Editor::GameOptions const&);

    MCNAPI void _applyDayLightCycle(::DaylightCycle daylightCyle, ::LevelData& levelData) const;

    MCNAPI void applyToLevelData(::LevelData& levelData) const;

    MCNAPI ::Editor::GameOptions& operator=(::Editor::GameOptions const&);

    MCNAPI ::Editor::GameOptions& operator=(::Editor::GameOptions&&);

    MCNAPI ~GameOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::GameOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
