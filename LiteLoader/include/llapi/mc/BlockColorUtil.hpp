/**
 * @file  BlockColorUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BlockColorUtil.
 *
 */
namespace BlockColorUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -397692432
     * @symbol  ?RAINBOW\@BlockColorUtil\@\@3V?$array\@W4BlockColor\@\@$0BA\@\@std\@\@A
     */
    MCAPI extern class std::array<enum class BlockColor, 16> RAINBOW;
    /**
     * @hash   1958815848
     * @symbol  ?fromInt\@BlockColorUtil\@\@YA?AW4BlockColor\@\@H\@Z
     */
    MCAPI enum class BlockColor fromInt(int);
    /**
     * @hash   1146331382
     * @symbol  ?fromItemColor\@BlockColorUtil\@\@YA?AW4BlockColor\@\@W4ItemColor\@\@\@Z
     */
    MCAPI enum class BlockColor fromItemColor(enum class ItemColor);
    /**
     * @hash   1012960386
     * @symbol  ?getColor\@BlockColorUtil\@\@YA?AVColor\@mce\@\@W4BlockColor\@\@\@Z
     */
    MCAPI class mce::Color getColor(enum class BlockColor);
    /**
     * @hash   1088847090
     * @symbol  ?getName\@BlockColorUtil\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockColor\@\@\@Z
     */
    MCAPI std::string const & getName(enum class BlockColor);
    /**
     * @hash   -14334046
     * @symbol  ?getNameMixedCase\@BlockColorUtil\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockColor\@\@\@Z
     */
    MCAPI std::string const & getNameMixedCase(enum class BlockColor);
    /**
     * @hash   -760341000
     * @symbol  ?getNameSnakeCase\@BlockColorUtil\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockColor\@\@\@Z
     */
    MCAPI std::string const & getNameSnakeCase(enum class BlockColor);
    /**
     * @hash   -2017959648
     * @symbol  ?getRGBColor\@BlockColorUtil\@\@YAHW4BlockColor\@\@\@Z
     */
    MCAPI int getRGBColor(enum class BlockColor);

};