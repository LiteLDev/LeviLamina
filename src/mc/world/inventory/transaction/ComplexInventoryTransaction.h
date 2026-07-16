#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/transaction/InventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class EntityContext;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class ComplexInventoryTransaction {
public:
    // ComplexInventoryTransaction inner types define
    enum class Type : uint {
        NormalTransaction          = 0,
        InventoryMismatch          = 1,
        ItemUseTransaction         = 2,
        ItemUseOnEntityTransaction = 3,
        ItemReleaseTransaction     = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ComplexInventoryTransaction::Type> mType;
    ::ll::TypedStorage<8, 88, ::InventoryTransaction>             mTransaction;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ComplexInventoryTransaction() = default;

    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    virtual void write(::BinaryStream& stream) const;

    virtual void postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    virtual ::InventoryTransactionError handle(::Player& player, bool isSenderAuthority) const;

    virtual void onTransactionError(::Player& player, ::InventoryTransactionError error) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void _setDepenetrationOverride(::EntityContext& entity);
#endif

    MCAPI static ::std::unique_ptr<::ComplexInventoryTransaction> fromType(::ComplexInventoryTransaction::Type type);

    MCAPI static ::std::unique_ptr<::ComplexInventoryTransaction>
    fromType(::ComplexInventoryTransaction::Type type, ::InventoryTransaction const& transaction);

    MCAPI static ::std::string const getTransactionTypeName(::ComplexInventoryTransaction::Type type);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& stream);

    MCFOLD void $write(::BinaryStream& stream) const;

    MCFOLD void $postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCAPI ::InventoryTransactionError $handle(::Player& player, bool isSenderAuthority) const;

    MCFOLD void $onTransactionError(::Player& player, ::InventoryTransactionError error) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
