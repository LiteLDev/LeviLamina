#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class EnchantmentInstance {

public:
    // prevent constructor by default
    EnchantmentInstance& operator=(EnchantmentInstance const&) = delete;
    EnchantmentInstance(EnchantmentInstance const&)            = delete;

public:
    /**
     * @symbol ??0EnchantmentInstance\@\@QEAA\@XZ
     */
    MCAPI EnchantmentInstance(); // NOLINT
    /**
     * @symbol ??0EnchantmentInstance\@\@QEAA\@W4Type\@Enchant\@\@H\@Z
     */
    MCAPI EnchantmentInstance(enum class Enchant::Type, int); // NOLINT
    /**
     * @symbol ?getEnchantLevel\@EnchantmentInstance\@\@QEBAHXZ
     */
    MCAPI int getEnchantLevel() const; // NOLINT
    /**
     * @symbol ?getEnchantType\@EnchantmentInstance\@\@QEBA?AW4Type\@Enchant\@\@XZ
     */
    MCAPI enum class Enchant::Type getEnchantType() const; // NOLINT
    /**
     * @symbol ??8EnchantmentInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class EnchantmentInstance const&) const; // NOLINT
    /**
     * @symbol ?setEnchantLevel\@EnchantmentInstance\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantLevel(int); // NOLINT
    /**
     * @symbol ?setEnchantType\@EnchantmentInstance\@\@QEAAXW4Type\@Enchant\@\@\@Z
     */
    MCAPI void setEnchantType(enum class Enchant::Type); // NOLINT
};
