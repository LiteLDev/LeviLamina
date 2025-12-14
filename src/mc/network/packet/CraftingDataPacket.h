#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CraftingDataEntry;
class ReadOnlyBinaryStream;
class Recipes;
struct ContainerMixDataEntry;
struct MaterialReducerDataEntry;
struct PotionMixDataEntry;
// clang-format on

class CraftingDataPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CraftingDataEntry>>        mCraftingEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::PotionMixDataEntry>>       mPotionMixEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerMixDataEntry>>    mContainerMixEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::MaterialReducerDataEntry>> mMaterialReducerEntries;
    ::ll::TypedStorage<1, 1, bool>                                       mClearRecipes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~CraftingDataPacket() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::CraftingDataPacket>
    prepareFromRecipes(::Recipes const& levelRecipes, bool onlyCraftingRecipes);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
