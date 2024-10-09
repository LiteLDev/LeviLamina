#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ItemTagDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // prevent constructor by default
    ItemTagDescriptor& operator=(ItemTagDescriptor const&);
    ItemTagDescriptor(ItemTagDescriptor const&);
    ItemTagDescriptor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;

    // vIndex: 1
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const& otherDescriptor, bool) const;

    // vIndex: 2
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const& otherItem, bool) const;

    // vIndex: 4
    virtual struct ItemDescriptor::ItemEntry getItem() const;

    // vIndex: 5
    virtual bool forEachItemUntil(std::function<bool(class Item const&, short)> func) const;

    // vIndex: 6
    virtual std::map<std::string, std::string> toMap() const;

    // vIndex: 7
    virtual std::optional<class CompoundTag> save() const;

    // vIndex: 8
    virtual void serialize(class Json::Value& val) const;

    // vIndex: 9
    virtual void serialize(class BinaryStream& stream) const;

    // vIndex: 10
    virtual ::ItemDescriptor::InternalType getType() const;

    // vIndex: 12
    virtual uint64 getHash() const;

    // vIndex: 15
    virtual ~ItemTagDescriptor() = default;

    MCAPI static class Bedrock::Result<std::unique_ptr<struct ItemTagDescriptor>>
    deserialize(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
