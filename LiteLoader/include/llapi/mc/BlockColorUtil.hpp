/**
 * @file  MC/BlockColorUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1483345664
     * @symbol ?RAINBOW@BlockColorUtil@@3V?$array@W4BlockColor@@$0BA@@std@@A
     */
    MCAPI extern class std::array<enum BlockColor, 16> RAINBOW;
    /**
     * @hash   1086227848
     * @symbol ?fromInt@BlockColorUtil@@YA?AW4BlockColor@@H@Z
     */
    MCAPI enum BlockColor fromInt(int);
    /**
     * @hash   273743382
     * @symbol ?fromItemColor@BlockColorUtil@@YA?AW4BlockColor@@W4ItemColor@@@Z
     */
    MCAPI enum BlockColor fromItemColor(enum ItemColor);
    /**
     * @hash   140372386
     * @symbol ?getColor@BlockColorUtil@@YA?AVColor@mce@@W4BlockColor@@@Z
     */
    MCAPI class mce::Color getColor(enum BlockColor);
    /**
     * @hash   216259090
     * @symbol ?getName@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
     */
    MCAPI std::string const & getName(enum BlockColor);
    /**
     * @hash   -886383886
     * @symbol ?getNameMixedCase@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
     */
    MCAPI std::string const & getNameMixedCase(enum BlockColor);
    /**
     * @hash   -1631852680
     * @symbol ?getNameSnakeCase@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
     */
    MCAPI std::string const & getNameSnakeCase(enum BlockColor);
    /**
     * @hash   1406018752
     * @symbol ?getRGBColor@BlockColorUtil@@YAHW4BlockColor@@@Z
     */
    MCAPI int getRGBColor(enum BlockColor);

};