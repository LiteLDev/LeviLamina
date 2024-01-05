#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ComplexAliasDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // prevent constructor by default
    ComplexAliasDescriptor& operator=(ComplexAliasDescriptor const&);
    ComplexAliasDescriptor(ComplexAliasDescriptor const&);
    ComplexAliasDescriptor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?clone@ComplexAliasDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;

    // vIndex: 1, symbol: ?sameItems@ComplexAliasDescriptor@@UEBA_NAEBUBaseDescriptor@ItemDescriptor@@_N@Z
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const&, bool) const;

    // vIndex: 2, symbol: ?sameItem@ComplexAliasDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const&, bool) const;

    // vIndex: 3, symbol:
    // ?getFullName@ComplexAliasDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getFullName() const;

    // vIndex: 4, symbol: ?getItem@ComplexAliasDescriptor@@UEBA?AUItemEntry@ItemDescriptor@@XZ
    virtual struct ItemDescriptor::ItemEntry getItem() const;

    // vIndex: 5, symbol: ?forEachItemUntil@ComplexAliasDescriptor@@UEBA_NV?$function@$$A6A_NAEBVItem@@F@Z@std@@@Z
    virtual bool forEachItemUntil(std::function<bool(class Item const&, short)> func) const;

    // vIndex: 6, symbol:
    // ?toMap@ComplexAliasDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    virtual std::map<std::string, std::string> toMap() const;

    // vIndex: 7, symbol: ?save@ComplexAliasDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
    virtual std::optional<class CompoundTag> save() const;

    // vIndex: 9, symbol: ?serialize@ComplexAliasDescriptor@@UEBAXAEAVBinaryStream@@@Z
    virtual void serialize(class BinaryStream& stream) const;

    // vIndex: 10, symbol: ?getType@ComplexAliasDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
    virtual ::ItemDescriptor::InternalType getType() const;

    // vIndex: 12, symbol: ?getHash@ComplexAliasDescriptor@@UEBA_KXZ
    virtual uint64 getHash() const;

    // vIndex: 15, symbol: __gen_??1ComplexAliasDescriptor@@UEAA@XZ
    virtual ~ComplexAliasDescriptor() = default;

    // symbol: ??0ComplexAliasDescriptor@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit ComplexAliasDescriptor(std::string const& fullName);

    // symbol:
    // ?deserialize@ComplexAliasDescriptor@@SA?AV?$Result@V?$unique_ptr@UComplexAliasDescriptor@@U?$default_delete@UComplexAliasDescriptor@@@std@@@std@@Verror_code@2@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<std::unique_ptr<struct ComplexAliasDescriptor>>
    deserialize(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
