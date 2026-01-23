#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs {

struct PrefabDBInstanceInteractionEvent {
public:
    // PrefabDBInstanceInteractionEvent inner types declare
    // clang-format off
    struct Clicked;
    struct Moved;
    // clang-format on

    // PrefabDBInstanceInteractionEvent inner types define
    struct Clicked {
    public:
        // member variables
        // NOLINTBEGIN
        bool mUnka6f34f : 1;
        bool mUnkfac469 : 1;
        bool mUnk3f34f8 : 1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Clicked& operator=(Clicked const&);
        Clicked(Clicked const&);
        Clicked();
    };

    struct Moved {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk6aa7c7;
        // NOLINTEND

    public:
        // prevent constructor by default
        Moved& operator=(Moved const&);
        Moved(Moved const&);
        Moved();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk93d554;
    ::ll::UntypedStorage<8, 16> mUnka100c1;
    ::ll::UntypedStorage<4, 16> mUnkf32260;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBInstanceInteractionEvent& operator=(PrefabDBInstanceInteractionEvent const&);
    PrefabDBInstanceInteractionEvent(PrefabDBInstanceInteractionEvent const&);
    PrefabDBInstanceInteractionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PrefabDBInstanceInteractionEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs
