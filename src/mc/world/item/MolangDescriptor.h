#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/util/molang/MolangVersion.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct MolangDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // prevent constructor by default
    MolangDescriptor& operator=(MolangDescriptor const&);
    MolangDescriptor(MolangDescriptor const&);
    MolangDescriptor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?clone@MolangDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;

    // vIndex: 1, symbol: ?sameItems@MolangDescriptor@@UEBA_NAEBUBaseDescriptor@ItemDescriptor@@_N@Z
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const&, bool) const;

    // vIndex: 2, symbol: ?sameItem@MolangDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const&, bool) const;

    // vIndex: 3, symbol:
    // ?getFullName@MolangDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getFullName() const;

    // vIndex: 6, symbol:
    // ?toMap@MolangDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    virtual std::map<std::string, std::string> toMap() const;

    // vIndex: 7, symbol: ?save@MolangDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
    virtual std::optional<class CompoundTag> save() const;

    // vIndex: 8, symbol: ?serialize@MolangDescriptor@@UEBAXAEAVValue@Json@@@Z
    virtual void serialize(class Json::Value& val) const;

    // vIndex: 9, symbol: ?serialize@MolangDescriptor@@UEBAXAEAVBinaryStream@@@Z
    virtual void serialize(class BinaryStream& stream) const;

    // vIndex: 10, symbol: ?getType@MolangDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
    virtual ::ItemDescriptor::InternalType getType() const;

    // vIndex: 12, symbol: ?getHash@MolangDescriptor@@UEBA_KXZ
    virtual uint64 getHash() const;

    // vIndex: 15, symbol: __gen_??1MolangDescriptor@@UEAA@XZ
    virtual ~MolangDescriptor() = default;

    // symbol:
    // ?deserialize@MolangDescriptor@@SA?AV?$Result@V?$unique_ptr@UMolangDescriptor@@U?$default_delete@UMolangDescriptor@@@std@@@std@@Verror_code@2@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<std::unique_ptr<struct MolangDescriptor>>
    deserialize(class ReadOnlyBinaryStream&);

    // symbol:
    // ?fromExpressionTag@MolangDescriptor@@SA?AV?$unique_ptr@UMolangDescriptor@@U?$default_delete@UMolangDescriptor@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4MolangVersion@@@Z
    MCAPI static std::unique_ptr<struct MolangDescriptor>
    fromExpressionTag(std::string const& tagExpression, ::MolangVersion molangVersion);

    // NOLINTEND
};
