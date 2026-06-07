#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraftBase.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING : public ::ItemStackRequestActionCraftBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _write(::BinaryStream&) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionCraftNonImplemented_DEPRECATEDASKTYLAING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_write(::BinaryStream&) const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
