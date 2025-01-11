#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class Item;
class ReadOnlyBinaryStream;
// clang-format on

struct ComplexAliasDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkdc0e24;
    ::ll::UntypedStorage<8, 16> mUnkeee21e;
    // NOLINTEND

public:
    // prevent constructor by default
    ComplexAliasDescriptor& operator=(ComplexAliasDescriptor const&);
    ComplexAliasDescriptor(ComplexAliasDescriptor const&);
    ComplexAliasDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> clone() const /*override*/;

    // vIndex: 1
    virtual bool sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const /*override*/;

    // vIndex: 2
    virtual bool sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool) const /*override*/;

    // vIndex: 6
    virtual bool forEachItemUntil(::std::function<bool(::Item const&, short)> func) const /*override*/;

    // vIndex: 3
    virtual ::std::string const& getFullName() const /*override*/;

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
    virtual ~ComplexAliasDescriptor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ComplexAliasDescriptor(::std::string const& fullName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::std::unique_ptr<::ComplexAliasDescriptor>>
    deserialize(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& fullName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $clone() const;

    MCAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

    MCAPI bool $sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool) const;

    MCAPI bool $forEachItemUntil(::std::function<bool(::Item const&, short)> func) const;

    MCAPI ::std::string const& $getFullName() const;

    MCAPI ::ItemDescriptor::ItemEntry $getItem() const;

    MCAPI ::std::map<::std::string, ::std::string> $toMap() const;

    MCAPI ::std::optional<::CompoundTag> $save() const;

    MCAPI void $serialize(::BinaryStream& stream) const;

    MCFOLD ::ItemDescriptor::InternalType $getType() const;

    MCAPI uint64 $getHash() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
