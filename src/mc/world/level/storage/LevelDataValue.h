#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/LevelSeed64.h"

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
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mTag;
        // NOLINTEND

    public:
        // prevent constructor by default
        Tag& operator=(Tag const&);
        Tag(Tag const&);
        Tag();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Tag(::LevelDataValue::Tag&& tag);

        MCFOLD ::LevelDataValue::Tag& operator=(::LevelDataValue::Tag&& tag);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::LevelDataValue::Tag&& tag);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::variant<
            int,
            bool,
            float,
            ::std::string,
            ::GeneratorType,
            ::GameType,
            ::BlockPos,
            ::LevelSeed64,
            ::LevelDataValue::Tag,
            ::DaylightCycle>>
        mValue;
    // NOLINTEND

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
