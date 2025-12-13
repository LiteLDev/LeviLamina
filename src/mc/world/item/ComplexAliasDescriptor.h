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
    virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> clone() const /*override*/;

    virtual bool sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const /*override*/;

    virtual bool sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool) const /*override*/;

    virtual bool forEachItemUntil(::std::function<bool(::Item const&, short)> func) const /*override*/;

    virtual ::std::string getFullName() const /*override*/;

    virtual ::ItemDescriptor::ItemEntry getItem() const /*override*/;

    virtual ::std::map<::std::string, ::std::string> toMap() const /*override*/;

    virtual ::std::optional<::CompoundTag> save() const /*override*/;

    virtual void serialize(::BinaryStream& stream) const /*override*/;

    virtual ::ItemDescriptor::InternalType getType() const /*override*/;

    virtual uint64 getHash() const /*override*/;

    virtual ~ComplexAliasDescriptor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ComplexAliasDescriptor(::std::string const& fullName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::std::unique_ptr<::ComplexAliasDescriptor>>
    deserialize(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& fullName);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $clone() const;

    MCNAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

    MCNAPI bool $sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool) const;

    MCNAPI bool $forEachItemUntil(::std::function<bool(::Item const&, short)> func) const;

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
