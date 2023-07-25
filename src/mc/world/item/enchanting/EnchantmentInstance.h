#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class EnchantmentInstance {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTMENTINSTANCE
public:
    EnchantmentInstance& operator=(EnchantmentInstance const&) = delete;
    EnchantmentInstance(EnchantmentInstance const&)            = delete;
#endif

public:
    /**
     * @symbol ??0EnchantmentInstance\@\@QEAA\@XZ
     */
    MCAPI EnchantmentInstance();
    /**
     * @symbol ??0EnchantmentInstance\@\@QEAA\@W4Type\@Enchant\@\@H\@Z
     */
    MCAPI EnchantmentInstance(enum class Enchant::Type, int);
    /**
     * @symbol ?getEnchantLevel\@EnchantmentInstance\@\@QEBAHXZ
     */
    MCAPI int getEnchantLevel() const;
    /**
     * @symbol ?getEnchantType\@EnchantmentInstance\@\@QEBA?AW4Type\@Enchant\@\@XZ
     */
    MCAPI enum class Enchant::Type getEnchantType() const;
    /**
     * @symbol ??8EnchantmentInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class EnchantmentInstance const&) const;
    /**
     * @symbol ?setEnchantLevel\@EnchantmentInstance\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantLevel(int);
    /**
     * @symbol ?setEnchantType\@EnchantmentInstance\@\@QEAAXW4Type\@Enchant\@\@\@Z
     */
    MCAPI void setEnchantType(enum class Enchant::Type);
};
