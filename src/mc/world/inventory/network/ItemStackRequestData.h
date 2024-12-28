#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ItemStackRequestAction;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk7b7070;
    ::ll::UntypedStorage<8, 24> mUnk55835a;
    ::ll::UntypedStorage<4, 4>  mUnkac5613;
    ::ll::UntypedStorage<8, 24> mUnk586044;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestData& operator=(ItemStackRequestData const&);
    ItemStackRequestData(ItemStackRequestData const&);
    ItemStackRequestData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ItemStackRequestAction const* tryFindAction(::ItemStackRequestActionType type) const;

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~ItemStackRequestData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::std::unique_ptr<::ItemStackRequestData>> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
