#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/ContainerMixDataEntry.h"
#include "mc/network/packet/CraftingDataEntry.h"
#include "mc/network/packet/MaterialReducerDataEntry.h"
#include "mc/network/packet/PotionMixDataEntry.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class CraftingDataPacket : public ::Packet {
public:
    std::vector<CraftingDataEntry>        mCraftingEntries;        // this+0x30
    std::vector<PotionMixDataEntry>       mPotionMixEntries;       // this+0x48
    std::vector<ContainerMixDataEntry>    mContainerMixEntries;    // this+0x60
    std::vector<MaterialReducerDataEntry> mMaterialReducerEntries; // this+0x78
    bool                                  mClearRecipes;           // this+0x90

    // prevent constructor by default
    CraftingDataPacket& operator=(CraftingDataPacket const&);
    CraftingDataPacket(CraftingDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingDataPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CraftingDataPacket();

    MCAPI static std::unique_ptr<class CraftingDataPacket>
    prepareFromRecipes(class Recipes const& levelRecipes, bool onlyCraftingRecipes);

    // NOLINTEND
};
