/**
 * @file  ColumnUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ColumnUtils.
 *
 */
namespace ColumnUtils {

#define AFTER_EXTRA
// Add Member There
struct ColumnRange {
    ColumnRange() = delete;
    ColumnRange(ColumnRange const&) = delete;
    ColumnRange(ColumnRange const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @symbol  ?scanColumn\@ColumnUtils\@\@YA?AV?$optional\@UColumnRange\@ColumnUtils\@\@\@std\@\@AEBVBlockPos\@\@HV?$function\@$$A6A_NAEBVBlockPos\@\@\@Z\@3\@1\@Z
     */
    MCAPI class std::optional<struct ColumnUtils::ColumnRange> scanColumn(class BlockPos const &, int, class std::function<bool (class BlockPos const &)>, class std::function<bool (class BlockPos const &)>);
    /**
     * @symbol  ?scanColumnWithinPosBiome\@ColumnUtils\@\@YA?AV?$optional\@UColumnRange\@ColumnUtils\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@HV?$function\@$$A6A_NAEBVBlockPos\@\@\@Z\@3\@2\@Z
     */
    MCAPI class std::optional<struct ColumnUtils::ColumnRange> scanColumnWithinPosBiome(class IBlockWorldGenAPI &, class BlockPos const &, int, class std::function<bool (class BlockPos const &)>, class std::function<bool (class BlockPos const &)>);

};