#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
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
        ::ll::TypedStorage<4, 4, ::SharedTypes::CreativeItemCategory const> mCreativeItemCategory;
        ::ll::TypedStorage<8, 32, ::std::string const>                      mName;
        ::ll::TypedStorage<8, 64, ::NetworkItemInstanceDescriptor const>    mIcon;
        // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        CreativeGroupInfoDescription& operator=(CreativeGroupInfoDescription const&);
        CreativeGroupInfoDescription();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI CreativeGroupInfoDescription(::CreativeContentPacket::CreativeGroupInfoDescription&&);

        MCAPI CreativeGroupInfoDescription(::CreativeContentPacket::CreativeGroupInfoDescription const&);

        MCAPI CreativeGroupInfoDescription(
            ::SharedTypes::CreativeItemCategory creativeItemCategory,
            ::std::string                       name,
            ::NetworkItemInstanceDescriptor     itemDescriptor
        );
#endif

        MCAPI ~CreativeGroupInfoDescription();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void* $ctor(::CreativeContentPacket::CreativeGroupInfoDescription&&);

        MCFOLD void* $ctor(::CreativeContentPacket::CreativeGroupInfoDescription const&);

        MCAPI void* $ctor(
            ::SharedTypes::CreativeItemCategory creativeItemCategory,
            ::std::string                       name,
            ::NetworkItemInstanceDescriptor     itemDescriptor
        );
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        CreativeItemEntryDescription& operator=(CreativeItemEntryDescription const&);
        CreativeItemEntryDescription();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI CreativeItemEntryDescription(::CreativeContentPacket::CreativeItemEntryDescription&&);

        MCAPI CreativeItemEntryDescription(::CreativeContentPacket::CreativeItemEntryDescription const&);

        MCAPI CreativeItemEntryDescription(
            ::CreativeItemNetId                    netId,
            ::NetworkItemInstanceDescriptor const& itemDescriptor,
            uint                                   index,
            uint                                   groupIndex
        );

        MCAPI ~CreativeItemEntryDescription();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void* $ctor(::CreativeContentPacket::CreativeItemEntryDescription&&);

        MCFOLD void* $ctor(::CreativeContentPacket::CreativeItemEntryDescription const&);

        MCAPI void* $ctor(
            ::CreativeItemNetId                    netId,
            ::NetworkItemInstanceDescriptor const& itemDescriptor,
            uint                                   index,
            uint                                   groupIndex
        );
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void $dtor();
#endif
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

    virtual ::std::string_view getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreativeContentPacket();

    MCAPI explicit CreativeContentPacket(
        ::Bedrock::NonOwnerPointer<::CreativeItemRegistry const> creativeItemRegistryForWrite
    );

#ifdef LL_PLAT_C
    MCFOLD ::std::vector<::CreativeContentPacket::CreativeItemEntryDescription> const& getReadEntryDescriptions() const;

    MCFOLD ::std::vector<::CreativeContentPacket::CreativeGroupInfoDescription> const&
    getReadGroupInfoDescriptions() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::CreativeItemRegistry const> creativeItemRegistryForWrite);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string_view $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
