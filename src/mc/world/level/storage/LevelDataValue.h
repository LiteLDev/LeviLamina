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
        Tag& operator=(Tag const&) = delete;
        Tag(Tag const&)            = delete;

    public:
        /**
         * @symbol ??0Tag\@LevelDataValue\@\@QEAA\@$$QEAVCompoundTag\@\@\@Z
         */
        MCAPI Tag(class CompoundTag&&); // NOLINT
        /**
         * @symbol ??0Tag\@LevelDataValue\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI Tag(struct LevelDataValue::Tag&&); // NOLINT
        /**
         * @symbol ??0Tag\@LevelDataValue\@\@QEAA\@XZ
         */
        MCAPI Tag(); // NOLINT
        /**
         * @symbol ??4Tag\@LevelDataValue\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct LevelDataValue::Tag& operator=(struct LevelDataValue::Tag&&); // NOLINT
        /**
         * @symbol ??1Tag\@LevelDataValue\@\@QEAA\@XZ
         */
        MCAPI ~Tag(); // NOLINT
    };

public:
    // prevent constructor by default
    LevelDataValue& operator=(LevelDataValue const&) = delete;
    LevelDataValue(LevelDataValue const&)            = delete;
    LevelDataValue()                                 = delete;

public:
    /**
     * @symbol ??1LevelDataValue\@\@QEAA\@XZ
     */
    MCAPI ~LevelDataValue(); // NOLINT
};
