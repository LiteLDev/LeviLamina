#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct InternalItemDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // prevent constructor by default
    InternalItemDescriptor& operator=(InternalItemDescriptor const&);
    InternalItemDescriptor(InternalItemDescriptor const&);
    InternalItemDescriptor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;

    // vIndex: 2
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const& otherItem, bool compareAux) const;

    // vIndex: 3
    virtual std::string const& getFullName() const;

    // vIndex: 4
    virtual struct ItemDescriptor::ItemEntry getItem() const;

    // vIndex: 6
    virtual std::map<std::string, std::string> toMap() const;

    // vIndex: 7
    virtual std::optional<class CompoundTag> save() const;

    // vIndex: 9
    virtual void serialize(class BinaryStream& stream) const;

    // vIndex: 10
    virtual ::ItemDescriptor::InternalType getType() const;

    // vIndex: 12
    virtual uint64 getHash() const;

    // vIndex: 15
    virtual ~InternalItemDescriptor() = default;

    MCAPI static class Bedrock::Result<std::unique_ptr<struct InternalItemDescriptor>>
    deserialize(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
