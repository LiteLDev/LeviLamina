#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/util/molang/MolangVersion.h"
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
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const&, bool) const;

    // vIndex: 2
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const&, bool) const;

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
    deserialize(class ReadOnlyBinaryStream&);

    MCAPI static std::unique_ptr<struct MolangDescriptor>
    fromExpressionTag(std::string const& tagExpression, ::MolangVersion molangVersion);

    // NOLINTEND
};
