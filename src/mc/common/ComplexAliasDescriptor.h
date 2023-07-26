#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ComplexAliasDescriptor {

public:
    // prevent constructor by default
    ComplexAliasDescriptor& operator=(ComplexAliasDescriptor const&) = delete;
    ComplexAliasDescriptor(ComplexAliasDescriptor const&)            = delete;
    ComplexAliasDescriptor()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol
     * ?clone\@ComplexAliasDescriptor\@\@UEBA?AV?$unique_ptr\@UBaseDescriptor\@ItemDescriptor\@\@U?$default_delete\@UBaseDescriptor\@ItemDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol ?sameItems\@ComplexAliasDescriptor\@\@UEBA_NAEBUBaseDescriptor\@ItemDescriptor\@\@_N\@Z
     */
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const&, bool) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?sameItem\@ComplexAliasDescriptor\@\@UEBA_NAEBUItemEntry\@ItemDescriptor\@\@_N\@Z
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const&, bool) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getFullName\@ComplexAliasDescriptor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getFullName() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getItem\@ComplexAliasDescriptor\@\@UEBA?AUItemEntry\@ItemDescriptor\@\@XZ
     */
    virtual struct ItemDescriptor::ItemEntry getItem() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?forEachItemUntil\@ComplexAliasDescriptor\@\@UEBA_NV?$function\@$$A6A_NAEBVItem\@\@F\@Z\@std\@\@\@Z
     */
    virtual bool forEachItemUntil(class std::function<bool(class Item const&, short)>) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?toMap\@ComplexAliasDescriptor\@\@UEBA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual class std::map<
        std::string,
        std::string,
        struct std::less<std::string>,
        class std::allocator<struct std::pair<std::string const, std::string>>>
    toMap() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?save\@ComplexAliasDescriptor\@\@UEBA?AV?$optional\@VCompoundTag\@\@\@std\@\@XZ
     */
    virtual class std::optional<class CompoundTag> save() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?serialize\@ComplexAliasDescriptor\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?getType\@ComplexAliasDescriptor\@\@UEBA?AW4InternalType\@ItemDescriptor\@\@XZ
     */
    virtual enum class ItemDescriptor::InternalType getType() const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?getHash\@ComplexAliasDescriptor\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getHash() const; // NOLINT
    /**
     * @symbol
     * ??0ComplexAliasDescriptor\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ComplexAliasDescriptor(std::string const&); // NOLINT
    /**
     * @symbol
     * ?deserialize\@ComplexAliasDescriptor\@\@SA?AV?$Result\@V?$unique_ptr\@UComplexAliasDescriptor\@\@U?$default_delete\@UComplexAliasDescriptor\@\@\@std\@\@\@std\@\@Verror_code\@2\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<std::unique_ptr<struct ComplexAliasDescriptor>, class std::error_code>
    deserialize(class ReadOnlyBinaryStream&); // NOLINT
};
