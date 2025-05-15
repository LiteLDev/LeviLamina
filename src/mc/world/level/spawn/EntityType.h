#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
class Block;
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
    // prevent constructor by default
    EntityType& operator=(EntityType const&);
    EntityType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntityType(::br::spawn::EntityType const&);

    MCNAPI bool isBlockDangerous(::Block const& block) const;

    MCNAPI ~EntityType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::br::spawn::EntityType const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::spawn
