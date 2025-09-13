#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/MinecraftPacketIds.h"
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

/**
 * @class CreativeContentPacket
 * @brief 此数据包负责将创造模式物品栏的全部内容从服务器发送到客户端。
 *
 * 当玩家进入创造模式时，服务器会使用 CreativeItemRegistry 构建此数据包，
 * 序列化所有创造模式的物品组和物品条目，然后将其发送出去。
 * 客户端收到此数据包后，会反序列化数据，并用它来填充创造模式的UI界面。
 * 这是一个全量同步数据包，而非增量更新。
 */
class CreativeContentPacket : public ::Packet {
public:
    // CreativeContentPacket 内部类型声明
    // clang-format off
    struct CreativeGroupInfoDescription;
    struct CreativeItemEntryDescription;
    // clang-format on

    // CreativeContentPacket 内部类型定义

    /**
     * @struct CreativeGroupInfoDescription
     * @brief 描述创造模式物品栏中的一个物品组（或标签页），例如“建筑方块”或“工具”。
     */
    struct CreativeGroupInfoDescription {
    public:
        // 成员变量
        // NOLINTBEGIN
        // 物品组的分类ID。
        ::ll::TypedStorage<4, 4, ::CreativeItemCategory const> mCreativeItemCategory;
        // 物品组的显示名称。
        ::ll::TypedStorage<8, 32, ::std::string const> mName;
        // 作为该物品组标签页图标的物品。
        ::ll::TypedStorage<8, 64, ::NetworkItemInstanceDescriptor const> mIcon;
        // NOLINTEND
    };

    /**
     * @struct CreativeItemEntryDescription
     * @brief 描述一个物品组内的单个物品条目。
     */
    struct CreativeItemEntryDescription {
    public:
        // 成员变量
        // NOLINTBEGIN
        // 该创造模式物品条目的唯一网络ID。
        ::ll::TypedStorage<4, 4, ::CreativeItemNetId const> mCreativeItemNetId;
        // 该物品条目的详细描述（是什么物品，有多少个，有什么NBT数据等）。
        ::ll::TypedStorage<8, 64, ::NetworkItemInstanceDescriptor const> mItemDescriptor;
        // 该物品在所属物品组内的索引（排序位置）。
        ::ll::TypedStorage<4, 4, uint const> mIndex;
        // 该物品所属的物品组的索引。
        ::ll::TypedStorage<4, 4, uint const> mGroupIndex;
        // NOLINTEND
    };

public:
    // 成员变量
    // NOLINTBEGIN

    // 指向创造模式物品注册表的非拥有型指针。
    // *仅在写入（序列化）数据包时使用*，服务器通过它来获取所有需要发送的物品信息。
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CreativeItemRegistry const> const>
        mCreativeItemRegistryForWrite;

    // 用于存储从网络流中*读取（反序列化）*的物品组信息。
    // 客户端在处理此数据包时会填充这个向量。
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeContentPacket::CreativeGroupInfoDescription>>
        mReadGroupInfoDescriptions;

    // 用于存储从网络流中*读取（反序列化）*的物品条目信息。
    // 客户端在处理此数据包时会填充这个向量。
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeContentPacket::CreativeItemEntryDescription>>
        mReadEntryDescriptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
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
