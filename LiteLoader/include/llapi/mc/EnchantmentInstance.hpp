/**
 * @file  EnchantmentInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantmentInstance.
 *
 */
class EnchantmentInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTMENTINSTANCE
public:
    class EnchantmentInstance& operator=(class EnchantmentInstance const &) = delete;
    EnchantmentInstance(class EnchantmentInstance const &) = delete;
#endif

public:
    /**
     * @hash   -997328440
     * @symbol  ??0EnchantmentInstance\@\@QEAA\@XZ
     */
    MCAPI EnchantmentInstance();
    /**
     * @hash   -2047587584
     * @symbol  ??0EnchantmentInstance\@\@QEAA\@W4Type\@Enchant\@\@H\@Z
     */
    MCAPI EnchantmentInstance(enum class Enchant::Type, int);
    /**
     * @hash   603130362
     * @symbol  ?getEnchantLevel\@EnchantmentInstance\@\@QEBAHXZ
     */
    MCAPI int getEnchantLevel() const;
    /**
     * @hash   -2080502232
     * @symbol  ?getEnchantType\@EnchantmentInstance\@\@QEBA?AW4Type\@Enchant\@\@XZ
     */
    MCAPI enum class Enchant::Type getEnchantType() const;
    /**
     * @hash   -1499736229
     * @symbol  ??8EnchantmentInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class EnchantmentInstance const &) const;
    /**
     * @hash   -2113728756
     * @symbol  ?setEnchantLevel\@EnchantmentInstance\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantLevel(int);
    /**
     * @hash   74857590
     * @symbol  ?setEnchantType\@EnchantmentInstance\@\@QEAAXW4Type\@Enchant\@\@\@Z
     */
    MCAPI void setEnchantType(enum class Enchant::Type);

};