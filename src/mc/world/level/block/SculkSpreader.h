#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SculkSpreader {
public:
    // prevent constructor by default
    SculkSpreader& operator=(SculkSpreader const&);
    SculkSpreader(SculkSpreader const&);

public:
    // NOLINTBEGIN
    MCAPI SculkSpreader();

    MCAPI SculkSpreader(bool, int, int, int, int);

    MCAPI void addCursors(class BlockPos const& pos, int charge);

    MCAPI void clearCursors();

    MCAPI class BlockPos getCursorPosition(int index) const;

    MCAPI int getMaxCharge() const;

    MCAPI int getNumberOfCursors() const;

    MCAPI int getTotalCharge() const;

    MCAPI void load(class CompoundTag const& tag);

    MCAPI void save(class CompoundTag& tag) const;

    MCAPI void updateCursors(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&    origin,
        class Random&            random,
        bool
    );

    MCAPI ~SculkSpreader();

    // NOLINTEND
};
