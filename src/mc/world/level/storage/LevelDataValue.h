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
        // NOLINTBEGIN
        /**
         * @symbol ??0Tag\@LevelDataValue\@\@QEAA\@XZ
         */
        MCAPI Tag();
        /**
         * @symbol ??0Tag\@LevelDataValue\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI Tag(struct LevelDataValue::Tag&&);
        /**
         * @symbol ??0Tag\@LevelDataValue\@\@QEAA\@$$QEAVCompoundTag\@\@\@Z
         */
        MCAPI Tag(class CompoundTag&&);
        /**
         * @symbol ??4Tag\@LevelDataValue\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct LevelDataValue::Tag& operator=(struct LevelDataValue::Tag&&);
        /**
         * @symbol ??1Tag\@LevelDataValue\@\@QEAA\@XZ
         */
        MCAPI ~Tag();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    LevelDataValue& operator=(LevelDataValue const&) = delete;
    LevelDataValue(LevelDataValue const&)            = delete;
    LevelDataValue()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1LevelDataValue\@\@QEAA\@XZ
     */
    MCAPI ~LevelDataValue();
    // NOLINTEND
};
