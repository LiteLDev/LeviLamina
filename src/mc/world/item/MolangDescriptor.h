#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct MolangDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // prevent constructor by default
    MolangDescriptor& operator=(MolangDescriptor const&);
    MolangDescriptor(MolangDescriptor const&);
    MolangDescriptor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;

    // vIndex: 1
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

    // vIndex: 2
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const& otherItem, bool) const;

    // vIndex: 3
    virtual std::string const& getFullName() const;

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
    virtual ~MolangDescriptor() = default;

    MCAPI static class Bedrock::Result<std::unique_ptr<struct MolangDescriptor>>
    deserialize(class ReadOnlyBinaryStream& stream);

    MCAPI static std::unique_ptr<struct MolangDescriptor>
    fromExpressionTag(std::string const& tagExpression, ::MolangVersion molangVersion);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone$() const;

    MCAPI std::string const& getFullName$() const;

    MCAPI uint64 getHash$() const;

    MCAPI ::ItemDescriptor::InternalType getType$() const;

    MCAPI bool sameItem$(struct ItemDescriptor::ItemEntry const& otherItem, bool) const;

    MCAPI bool sameItems$(struct ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

    MCAPI std::optional<class CompoundTag> save$() const;

    MCAPI void serialize$(class Json::Value& val) const;

    MCAPI void serialize$(class BinaryStream& stream) const;

    MCAPI std::map<std::string, std::string> toMap$() const;

    // NOLINTEND
};
