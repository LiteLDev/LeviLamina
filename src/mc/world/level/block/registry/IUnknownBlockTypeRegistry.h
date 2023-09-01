#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class IUnknownBlockTypeRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IUnknownBlockTypeRegistry& operator=(IUnknownBlockTypeRegistry const&) = delete;
    IUnknownBlockTypeRegistry(IUnknownBlockTypeRegistry const&)            = delete;
    IUnknownBlockTypeRegistry()                                            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: ?getUnknownBlock@UnknownBlockTypeRegistry@@UEAAAEBVBlock@@AEBVCompoundTag@@@Z
    virtual class Block const& getUnknownBlock(class CompoundTag const&) = 0;

    // symbol: ??1IUnknownBlockTypeRegistry@@UEAA@XZ
    MCVAPI ~IUnknownBlockTypeRegistry();

    // NOLINTEND
};
