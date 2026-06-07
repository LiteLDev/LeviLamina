#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class InventoryTransactionPacket;
class MobEquipmentPacket;
class ServerPlayer;
struct ActorRotationComponent;
struct MoveInputComponent;
// clang-format on

class InventoryPacketHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<::std::shared_ptr<::MobEquipmentPacket>, ::std::shared_ptr<::InventoryTransactionPacket>>>
        mPacket;
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryPacketHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit InventoryPacketHandler(::gsl::not_null<::std::shared_ptr<::InventoryTransactionPacket>> packet);

    MCAPI explicit InventoryPacketHandler(::gsl::not_null<::std::shared_ptr<::MobEquipmentPacket>> packet);

    MCAPI void _handleMobEquipmentPacket(::MobEquipmentPacket const& packet, ::ServerPlayer& player) const;

    MCAPI void handle(
        ::ServerPlayer&             player,
        ::BlockPalette&             blockPalette,
        ::MoveInputComponent const& moveInput,
        ::ActorRotationComponent&   actorRotation,
        bool                        isAimAssist
    ) const;

    MCAPI ~InventoryPacketHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::gsl::not_null<::std::shared_ptr<::InventoryTransactionPacket>> packet);

    MCAPI void* $ctor(::gsl::not_null<::std::shared_ptr<::MobEquipmentPacket>> packet);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
