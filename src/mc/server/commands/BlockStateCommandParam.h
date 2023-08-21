#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateCommandParam {

public:
    enum class Type : int {
        Integer = 0x0,
        Float   = 0x1,
        Bool    = 0x2,
        String  = 0x3,
        Invalid = 0x4,
    };

    std::string     mBlockState; // this+0x0
    std::string     mValue;      // this+0x20
    enum class Type mType;       // this+0x40
public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getNameAndValue\@BlockStateCommandParam\@\@QEBA?AV?$optional\@U?$pair\@VHashedString\@\@H\@std\@\@\@std\@\@AEAVCommandOutput\@\@AEBVBlock\@\@\@Z
     */
    MCAPI std::optional<std::pair<class HashedString, int>>
          getNameAndValue(class CommandOutput&, class Block const&) const;
    /**
     * @symbol ?setBlockState\@BlockStateCommandParam\@\@QEBA_NPEAPEBVBlock\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI bool setBlockState(class Block const**, class CommandOutput&) const;
    /**
     * @symbol ??1BlockStateCommandParam\@\@QEAA\@XZ
     */
    MCAPI ~BlockStateCommandParam();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_createCompoundTag\@BlockStateCommandParam\@\@AEBA_NAEAVCompoundTag\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI bool _createCompoundTag(class CompoundTag&, class CommandOutput&) const;
    /**
     * @symbol ?_getBlockState\@BlockStateCommandParam\@\@AEBAPEBVBlockState\@\@AEBVBlock\@\@\@Z
     */
    MCAPI class BlockState const* _getBlockState(class Block const&) const;
    // NOLINTEND
};
