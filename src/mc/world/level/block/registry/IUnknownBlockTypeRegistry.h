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
    IUnknownBlockTypeRegistry& operator=(IUnknownBlockTypeRegistry const&);
    IUnknownBlockTypeRegistry(IUnknownBlockTypeRegistry const&);
    IUnknownBlockTypeRegistry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IUnknownBlockTypeRegistry@@UEAA@XZ
    virtual ~IUnknownBlockTypeRegistry();

    // vIndex: 1, symbol: ?getUnknownBlock@UnknownBlockTypeRegistry@@UEAAAEBVBlock@@AEBVCompoundTag@@@Z
    virtual class Block const& getUnknownBlock(class CompoundTag const& serId) = 0;

    // NOLINTEND
};
