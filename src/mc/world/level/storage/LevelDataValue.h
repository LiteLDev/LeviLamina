#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct LevelDataValue {
public:
    // LevelDataValue inner types declare
    // clang-format off
    struct Tag;
    // clang-format on

    // LevelDataValue inner types define
    struct Tag {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkfd2e2a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Tag& operator=(Tag const&);
        Tag(Tag const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Tag();

        MCAPI Tag(::LevelDataValue::Tag&& tag);

        MCAPI explicit Tag(::CompoundTag&& tag);

        MCAPI ::LevelDataValue::Tag& operator=(::LevelDataValue::Tag&& tag);

        MCAPI ~Tag();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();

        MCAPI void* $ctor(::LevelDataValue::Tag&& tag);

        MCAPI void* $ctor(::CompoundTag&& tag);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkfc867e;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDataValue& operator=(LevelDataValue const&);
    LevelDataValue(LevelDataValue const&);
    LevelDataValue();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LevelDataValue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
