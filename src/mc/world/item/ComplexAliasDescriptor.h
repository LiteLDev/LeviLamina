#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ComplexAliasDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // prevent constructor by default
    ComplexAliasDescriptor& operator=(ComplexAliasDescriptor const&);
    ComplexAliasDescriptor(ComplexAliasDescriptor const&);
    ComplexAliasDescriptor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;

    // vIndex: 1
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const& otherDescriptor, bool) const;

    // vIndex: 2
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const& otherItem, bool) const;

    // vIndex: 3
    virtual std::string const& getFullName() const;

    // vIndex: 4
    virtual struct ItemDescriptor::ItemEntry getItem() const;

    // vIndex: 5
    virtual bool forEachItemUntil(std::function<bool(class Item const&, short)> func) const;

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
    virtual ~ComplexAliasDescriptor() = default;

    MCAPI explicit ComplexAliasDescriptor(std::string const& fullName);

    MCAPI static class Bedrock::Result<std::unique_ptr<struct ComplexAliasDescriptor>>
    deserialize(class ReadOnlyBinaryStream& stream);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& fullName);

    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone$() const;

    MCAPI bool forEachItemUntil$(std::function<bool(class Item const&, short)> func) const;

    MCAPI std::string const& getFullName$() const;

    MCAPI uint64 getHash$() const;

    MCAPI struct ItemDescriptor::ItemEntry getItem$() const;

    MCAPI ::ItemDescriptor::InternalType getType$() const;

    MCAPI bool sameItem$(struct ItemDescriptor::ItemEntry const& otherItem, bool) const;

    MCAPI bool sameItems$(struct ItemDescriptor::BaseDescriptor const& otherDescriptor, bool) const;

    MCAPI std::optional<class CompoundTag> save$() const;

    MCAPI void serialize$(class BinaryStream& stream) const;

    MCAPI std::map<std::string, std::string> toMap$() const;

    // NOLINTEND
};
