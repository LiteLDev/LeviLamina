/**
 * @file  ItemColorUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1909079608
     * @symbol ?fromBlockColor@ItemColorUtil@@YA?AW4ItemColor@@W4BlockColor@@@Z
     */
    MCAPI enum class ItemColor fromBlockColor(enum class BlockColor);
    /**
     * @hash   -323652576
     * @symbol ?fromInt@ItemColorUtil@@YA?AW4ItemColor@@H@Z
     */
    MCAPI enum class ItemColor fromInt(int);
    /**
     * @hash   -2105288940
     * @symbol ?getName@ItemColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ItemColor@@@Z
     */
    MCAPI std::string const & getName(enum class ItemColor);
    /**
     * @hash   -27344620
     * @symbol ?getRGBColor@ItemColorUtil@@YAHW4ItemColor@@@Z
     */
    MCAPI int getRGBColor(enum class ItemColor);

};