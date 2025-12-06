#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class TripodCameraTakePictureComponent {
public:
    // TripodCameraTakePictureComponent inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // TripodCameraTakePictureComponent inner types define
    class Definition {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mSubject;
    // NOLINTEND
};
