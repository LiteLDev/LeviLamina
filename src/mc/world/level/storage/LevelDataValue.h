#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelDataValue {
public:
    // LevelDataValue inner types declare
    // clang-format off
    struct Tag;
    // clang-format on

    // LevelDataValue inner types define
    struct Tag {
    public:
        // prevent constructor by default
        Tag& operator=(Tag const&);
        Tag(Tag const&);

    public:
        // NOLINTBEGIN
        MCAPI Tag();

        MCAPI explicit Tag(class CompoundTag&& tag);

        MCAPI Tag(struct LevelDataValue::Tag&& tag);

        MCAPI struct LevelDataValue::Tag& operator=(struct LevelDataValue::Tag&& tag);

        MCAPI ~Tag();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    LevelDataValue& operator=(LevelDataValue const&);
    LevelDataValue(LevelDataValue const&);
    LevelDataValue();

public:
    // NOLINTBEGIN
    MCAPI ~LevelDataValue();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
