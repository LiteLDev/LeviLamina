#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct InternalItemDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // prevent constructor by default
    InternalItemDescriptor& operator=(InternalItemDescriptor const&);
    InternalItemDescriptor(InternalItemDescriptor const&);
    InternalItemDescriptor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?clone@InternalItemDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;

    // vIndex: 2, symbol: ?sameItem@InternalItemDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const&, bool) const;

    // vIndex: 3, symbol:
    // ?getFullName@InternalItemDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getFullName() const;

    // vIndex: 4, symbol: ?getItem@InternalItemDescriptor@@UEBA?AUItemEntry@ItemDescriptor@@XZ
    virtual struct ItemDescriptor::ItemEntry getItem() const;

    // vIndex: 6, symbol:
    // ?toMap@InternalItemDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    virtual std::map<std::string, std::string> toMap() const;

    // vIndex: 7, symbol: ?save@InternalItemDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
    virtual std::optional<class CompoundTag> save() const;

    // vIndex: 9, symbol: ?serialize@InternalItemDescriptor@@UEBAXAEAVBinaryStream@@@Z
    virtual void serialize(class BinaryStream& stream) const;

    // vIndex: 10, symbol: ?getType@InternalItemDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
    virtual ::ItemDescriptor::InternalType getType() const;

    // vIndex: 12, symbol: ?getHash@InternalItemDescriptor@@UEBA_KXZ
    virtual uint64 getHash() const;

    // vIndex: 15, symbol: __gen_??1InternalItemDescriptor@@UEAA@XZ
    virtual ~InternalItemDescriptor() = default;

    // symbol:
    // ?deserialize@InternalItemDescriptor@@SA?AV?$Result@V?$unique_ptr@UInternalItemDescriptor@@U?$default_delete@UInternalItemDescriptor@@@std@@@std@@Verror_code@2@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<std::unique_ptr<struct InternalItemDescriptor>>
    deserialize(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
