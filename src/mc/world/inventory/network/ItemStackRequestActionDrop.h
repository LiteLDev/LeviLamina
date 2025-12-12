#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct ItemStackRequestSlotInfo;
// clang-format on

class ItemStackRequestActionDrop : public ::ItemStackRequestActionTransferBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkf7f505;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionDrop& operator=(ItemStackRequestActionDrop const&);
    ItemStackRequestActionDrop(ItemStackRequestActionDrop const&);
    ItemStackRequestActionDrop();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~ItemStackRequestActionDrop() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ItemStackRequestActionDrop(uchar amount, bool randomly, ::ItemStackRequestSlotInfo const& src);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(uchar amount, bool randomly, ::ItemStackRequestSlotInfo const& src);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_write(::BinaryStream& stream) const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
