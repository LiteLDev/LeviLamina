#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class ExpressionNode;
class ReadOnlyBinaryStream;
namespace Json { class Value; }
// clang-format on

struct MolangDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ExpressionNode>> mExpressionTags;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> clone() const /*override*/;

    virtual bool sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const /*override*/;

    virtual bool sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool) const /*override*/;

    virtual ::std::string getFullName() const /*override*/;

    virtual ::std::map<::std::string, ::std::string> toMap() const /*override*/;

    virtual ::std::optional<::CompoundTag> save() const /*override*/;

    virtual void serialize(::Json::Value& val) const /*override*/;

    virtual void serialize(::BinaryStream& stream) const /*override*/;

    virtual ::ItemDescriptor::InternalType getType() const /*override*/;

    virtual uint64 getHash() const /*override*/;

    virtual ~MolangDescriptor() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::std::unique_ptr<::MolangDescriptor>> deserialize(::ReadOnlyBinaryStream& stream);

    MCNAPI static ::std::unique_ptr<::MolangDescriptor>
    fromExpressionTag(::std::string const& tagExpression, ::MolangVersion molangVersion);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $clone() const;

    MCNAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

    MCNAPI bool $sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool) const;

    MCNAPI ::std::string $getFullName() const;

    MCNAPI ::std::map<::std::string, ::std::string> $toMap() const;

    MCNAPI ::std::optional<::CompoundTag> $save() const;

    MCNAPI void $serialize(::Json::Value& val) const;

    MCNAPI void $serialize(::BinaryStream& stream) const;

    MCNAPI ::ItemDescriptor::InternalType $getType() const;

    MCNAPI uint64 $getHash() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
