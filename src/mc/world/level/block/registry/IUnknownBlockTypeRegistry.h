#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

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
    // vIndex: 0
    virtual ~IUnknownBlockTypeRegistry();

    // vIndex: 1
    virtual class Block const& getUnknownBlock(class CompoundTag const& serId) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
