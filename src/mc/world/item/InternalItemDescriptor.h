#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class ReadOnlyBinaryStream;
// clang-format on

struct InternalItemDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6a1627;
    // NOLINTEND

public:
    // prevent constructor by default
    InternalItemDescriptor& operator=(InternalItemDescriptor const&);
    InternalItemDescriptor(InternalItemDescriptor const&);
    InternalItemDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> clone() const /*override*/;

    // vIndex: 2
    virtual bool sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool compareAux) const /*override*/;

    // vIndex: 3
    virtual ::std::string getFullName() const /*override*/;

    // vIndex: 5
    virtual ::ItemDescriptor::ItemEntry getItem() const /*override*/;

    // vIndex: 7
    virtual ::std::map<::std::string, ::std::string> toMap() const /*override*/;

    // vIndex: 8
    virtual ::std::optional<::CompoundTag> save() const /*override*/;

    // vIndex: 9
    virtual void serialize(::BinaryStream& stream) const /*override*/;

    // vIndex: 11
    virtual ::ItemDescriptor::InternalType getType() const /*override*/;

    // vIndex: 13
    virtual uint64 getHash() const /*override*/;

    // vIndex: 16
    virtual ~InternalItemDescriptor() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::std::unique_ptr<::InternalItemDescriptor>>
    deserialize(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $clone() const;

    MCNAPI bool $sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool compareAux) const;

    MCNAPI ::std::string $getFullName() const;

    MCNAPI ::ItemDescriptor::ItemEntry $getItem() const;

    MCNAPI ::std::map<::std::string, ::std::string> $toMap() const;

    MCNAPI ::std::optional<::CompoundTag> $save() const;

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
