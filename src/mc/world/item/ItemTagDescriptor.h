#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ItemTagDescriptor {

public:
    // prevent constructor by default
    ItemTagDescriptor& operator=(ItemTagDescriptor const&) = delete;
    ItemTagDescriptor(ItemTagDescriptor const&)            = delete;
    ItemTagDescriptor()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol
     * ?clone\@ItemTagDescriptor\@\@UEBA?AV?$unique_ptr\@UBaseDescriptor\@ItemDescriptor\@\@U?$default_delete\@UBaseDescriptor\@ItemDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @vftbl 1
     * @symbol ?sameItems\@ItemTagDescriptor\@\@UEBA_NAEBUBaseDescriptor\@ItemDescriptor\@\@_N\@Z
     */
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const&, bool) const;
    /**
     * @vftbl 2
     * @symbol ?sameItem\@ItemTagDescriptor\@\@UEBA_NAEBUItemEntry\@ItemDescriptor\@\@_N\@Z
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const&, bool) const;
    /**
     * @vftbl 4
     * @symbol ?getItem\@ItemTagDescriptor\@\@UEBA?AUItemEntry\@ItemDescriptor\@\@XZ
     */
    virtual struct ItemDescriptor::ItemEntry getItem() const;
    /**
     * @vftbl 5
     * @symbol ?forEachItemUntil\@ItemTagDescriptor\@\@UEBA_NV?$function\@$$A6A_NAEBVItem\@\@F\@Z\@std\@\@\@Z
     */
    virtual bool forEachItemUntil(std::function<bool(class Item const&, short)>) const;
    /**
     * @vftbl 6
     * @symbol
     * ?toMap\@ItemTagDescriptor\@\@UEBA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual std::map<std::string, std::string> toMap() const;
    /**
     * @vftbl 7
     * @symbol ?save\@ItemTagDescriptor\@\@UEBA?AV?$optional\@VCompoundTag\@\@\@std\@\@XZ
     */
    virtual std::optional<class CompoundTag> save() const;
    /**
     * @vftbl 8
     * @symbol ?serialize\@ItemTagDescriptor\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serialize(class Json::Value&) const;
    /**
     * @vftbl 9
     * @symbol ?serialize\@ItemTagDescriptor\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream&) const;
    /**
     * @vftbl 10
     * @symbol ?getType\@ItemTagDescriptor\@\@UEBA?AW4InternalType\@ItemDescriptor\@\@XZ
     */
    virtual enum class ItemDescriptor::InternalType getType() const;
    /**
     * @vftbl 12
     * @symbol ?getHash\@ItemTagDescriptor\@\@UEBA_KXZ
     */
    virtual uint64_t getHash() const;
    /**
     * @symbol
     * ?deserialize\@ItemTagDescriptor\@\@SA?AV?$Result\@V?$unique_ptr\@UItemTagDescriptor\@\@U?$default_delete\@UItemTagDescriptor\@\@\@std\@\@\@std\@\@Verror_code\@2\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<std::unique_ptr<struct ItemTagDescriptor>, std::error_code>
    deserialize(class ReadOnlyBinaryStream&);
    // NOLINTEND
};
