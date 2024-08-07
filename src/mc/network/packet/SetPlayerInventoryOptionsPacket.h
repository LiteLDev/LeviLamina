#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetPlayerInventoryOptionsPacket : public ::Packet {
public:
    enum class InventoryLeftTab : int {
        None         = 0,
        Construction = 1,
        Equipment    = 2,
        Items        = 3,
        Nature       = 4,
        Search       = 5,
        Survival     = 6,
    };

    enum class InventoryRightTab : int {
        None       = 0,
        FullScreen = 1,
        Crafting   = 2,
        Armor      = 3,
    };

    enum class InventoryLayout : int {
        None       = 0,
        Survival   = 1,
        RecipeBook = 2,
        Creative   = 3,
    };

    InventoryLeftTab  mLeftTab;
    InventoryRightTab mRightTab;
    bool              mFiltering;
    InventoryLayout   mInventoryLayout;
    InventoryLayout   mCraftingLayout;

    // prevent constructor by default
    SetPlayerInventoryOptionsPacket& operator=(SetPlayerInventoryOptionsPacket const&);
    SetPlayerInventoryOptionsPacket(SetPlayerInventoryOptionsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetPlayerInventoryOptionsPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream&) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    MCAPI SetPlayerInventoryOptionsPacket();

    MCAPI explicit SetPlayerInventoryOptionsPacket(struct InventoryOptions const&);

    MCAPI struct InventoryOptions const& getInventoryOptions() const;

    // NOLINTEND
};
