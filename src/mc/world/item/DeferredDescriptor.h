#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct DeferredDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // prevent constructor by default
    DeferredDescriptor& operator=(DeferredDescriptor const&);
    DeferredDescriptor(DeferredDescriptor const&);
    DeferredDescriptor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?clone@DeferredDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;

    // vIndex: 2, symbol: ?sameItem@DeferredDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const&, bool) const;

    // vIndex: 3, symbol:
    // ?getFullName@DeferredDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getFullName() const;

    // vIndex: 6, symbol:
    // ?toMap@DeferredDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    virtual std::map<std::string, std::string> toMap() const;

    // vIndex: 7, symbol: ?save@DeferredDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
    virtual std::optional<class CompoundTag> save() const;

    // vIndex: 9, symbol: ?serialize@DeferredDescriptor@@UEBAXAEAVBinaryStream@@@Z
    virtual void serialize(class BinaryStream& stream) const;

    // vIndex: 10, symbol: ?getType@DeferredDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
    virtual ::ItemDescriptor::InternalType getType() const;

    // vIndex: 12, symbol: ?getHash@DeferredDescriptor@@UEBA_KXZ
    virtual uint64 getHash() const;

    // vIndex: 13, symbol: ?shouldResolve@DeferredDescriptor@@UEBA_NXZ
    virtual bool shouldResolve() const;

    // vIndex: 14, symbol:
    // ?resolve@DeferredDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;

    // vIndex: 15, symbol: __gen_??1DeferredDescriptor@@UEAA@XZ
    virtual ~DeferredDescriptor() = default;

    // symbol:
    // ?deserialize@DeferredDescriptor@@SA?AV?$Result@V?$unique_ptr@UDeferredDescriptor@@U?$default_delete@UDeferredDescriptor@@@std@@@std@@Verror_code@2@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<std::unique_ptr<struct DeferredDescriptor>>
    deserialize(class ReadOnlyBinaryStream& stream);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_initFromBlockLegacy@DeferredDescriptor@@AEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@AEBVBlockLegacy@@$$QEAV?$WeakPtr@VItem@@@@@Z
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor>
          _initFromBlockLegacy(class BlockLegacy const& block, class WeakPtr<class Item>&& item) const;

    // symbol:
    // ?_initFromItem@DeferredDescriptor@@AEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@$$QEAV?$WeakPtr@VItem@@@@F@Z
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor>
          _initFromItem(class WeakPtr<class Item>&& item, short aux) const;

    // NOLINTEND
};
