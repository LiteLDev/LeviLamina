#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CreativeItemRegistry;
class ReadOnlyBinaryStream;
struct CreativeItemNetIdTag;
// clang-format on

class CreativeContentPacket : public ::Packet {
public:
    // CreativeContentPacket inner types declare
    // clang-format off
    struct CreativeGroupInfoDescription;
    struct CreativeItemEntryDescription;
    // clang-format on

    // CreativeContentPacket inner types define
    struct CreativeGroupInfoDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CreativeItemCategory const>           mCreativeItemCategory;
        ::ll::TypedStorage<8, 32, ::std::string const>                   mName;
        ::ll::TypedStorage<8, 64, ::NetworkItemInstanceDescriptor const> mIcon;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreativeGroupInfoDescription();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI_C CreativeGroupInfoDescription(
            ::CreativeItemCategory          creativeItemCategory,
            ::std::string                   name,
            ::NetworkItemInstanceDescriptor itemDescriptor
        );

        MCAPI_C ~CreativeGroupInfoDescription();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI_C void* $ctor(
            ::CreativeItemCategory          creativeItemCategory,
            ::std::string                   name,
            ::NetworkItemInstanceDescriptor itemDescriptor
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI_C void $dtor();
        // NOLINTEND
    };

    struct CreativeItemEntryDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CreativeItemNetId const>              mCreativeItemNetId;
        ::ll::TypedStorage<8, 64, ::NetworkItemInstanceDescriptor const> mItemDescriptor;
        ::ll::TypedStorage<4, 4, uint const>                             mIndex;
        ::ll::TypedStorage<4, 4, uint const>                             mGroupIndex;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreativeItemEntryDescription& operator=(CreativeItemEntryDescription const&);
        CreativeItemEntryDescription(CreativeItemEntryDescription const&);
        CreativeItemEntryDescription();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI_C CreativeItemEntryDescription(::CreativeContentPacket::CreativeItemEntryDescription&&);

        MCAPI_C ~CreativeItemEntryDescription();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI_C void* $ctor(::CreativeContentPacket::CreativeItemEntryDescription&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CreativeItemRegistry const> const>
        mCreativeItemRegistryForWrite;
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeContentPacket::CreativeGroupInfoDescription>>
        mReadGroupInfoDescriptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeContentPacket::CreativeItemEntryDescription>>
        mReadEntryDescriptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~CreativeContentPacket() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

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
