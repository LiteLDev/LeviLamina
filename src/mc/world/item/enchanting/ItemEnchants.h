#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/item/enchanting/Enchant.h"

class ItemEnchants {

public:
    // prevent constructor by default
    ItemEnchants& operator=(ItemEnchants const&) = delete;
    ItemEnchants(ItemEnchants const&)            = delete;
    ItemEnchants()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ItemEnchants\@\@QEAA\@H\@Z
     */
    MCAPI ItemEnchants(int);
    /**
     * @symbol ??0ItemEnchants\@\@QEAA\@HAEBVListTag\@\@\@Z
     */
    MCAPI ItemEnchants(int, class ListTag const&);
    /**
     * @symbol ?addEnchant\@ItemEnchants\@\@QEAA_NVEnchantmentInstance\@\@_N\@Z
     */
    MCAPI bool addEnchant(class EnchantmentInstance, bool);
    /**
     * @symbol ?canEnchant\@ItemEnchants\@\@QEAA?AUEnchantResult\@\@VEnchantmentInstance\@\@_N\@Z
     */
    MCAPI struct EnchantResult canEnchant(class EnchantmentInstance, bool);
    /**
     * @symbol
     * ?getAllEnchants\@ItemEnchants\@\@QEBA?AV?$vector\@VEnchantmentInstance\@\@V?$allocator\@VEnchantmentInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class EnchantmentInstance> getAllEnchants() const;
    /**
     * @symbol
     * ?getEnchantNames\@ItemEnchants\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getEnchantNames() const;
    /**
     * @symbol ?getEnchantment\@ItemEnchants\@\@QEAA?AVEnchantmentInstance\@\@W4Type\@Enchant\@\@\@Z
     */
    MCAPI class EnchantmentInstance getEnchantment(enum class Enchant::Type);
    /**
     * @symbol
     * ?getEnchants\@ItemEnchants\@\@QEBAAEBV?$vector\@VEnchantmentInstance\@\@V?$allocator\@VEnchantmentInstance\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI std::vector<class EnchantmentInstance> const& getEnchants(int) const;
    /**
     * @symbol ?getSlot\@ItemEnchants\@\@QEBAHXZ
     */
    MCAPI int getSlot() const;
    /**
     * @symbol ?getTotalValue\@ItemEnchants\@\@QEBAH_N\@Z
     */
    MCAPI int getTotalValue(bool) const;
    /**
     * @symbol ?hasEnchant\@ItemEnchants\@\@QEBAHW4Type\@Enchant\@\@\@Z
     */
    MCAPI int hasEnchant(enum class Enchant::Type) const;
    /**
     * @symbol ?isEmpty\@ItemEnchants\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ?read\@ItemEnchants\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?removeEnchantment\@ItemEnchants\@\@QEAAXW4Type\@Enchant\@\@\@Z
     */
    MCAPI void removeEnchantment(enum class Enchant::Type);
    /**
     * @symbol ??1ItemEnchants\@\@QEAA\@XZ
     */
    MCAPI ~ItemEnchants();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_toList\@ItemEnchants\@\@AEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> _toList() const;
    // NOLINTEND
};
