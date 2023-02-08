/**
 * @file  ItemColorUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ItemColorUtil.
 *
 */
namespace ItemColorUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -1036491608
     * @symbol  ?fromBlockColor\@ItemColorUtil\@\@YA?AW4ItemColor\@\@W4BlockColor\@\@\@Z
     */
    MCAPI enum class ItemColor fromBlockColor(enum class BlockColor);
    /**
     * @hash   357534976
     * @symbol  ?fromInt\@ItemColorUtil\@\@YA?AW4ItemColor\@\@H\@Z
     */
    MCAPI enum class ItemColor fromInt(int);
    /**
     * @hash   -1424101388
     * @symbol  ?getName\@ItemColorUtil\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemColor\@\@\@Z
     */
    MCAPI std::string const & getName(enum class ItemColor);
    /**
     * @hash   653304772
     * @symbol  ?getRGBColor\@ItemColorUtil\@\@YAHW4ItemColor\@\@\@Z
     */
    MCAPI int getRGBColor(enum class ItemColor);

};