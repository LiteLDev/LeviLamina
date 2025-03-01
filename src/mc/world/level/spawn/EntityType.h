#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace br::spawn {

struct EntityType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SpawnCategory::Type> mType;
    ::ll::TypedStorage<8, 48, ::HashedString>       mId;
    ::ll::TypedStorage<1, 1, bool>                  mIsSummonable;
    ::ll::TypedStorage<1, 1, bool>                  mImmuneFire;
    ::ll::TypedStorage<4, 4, float>                 mHeight;
    ::ll::TypedStorage<4, 4, float>                 mWidth;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EntityType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace br::spawn
