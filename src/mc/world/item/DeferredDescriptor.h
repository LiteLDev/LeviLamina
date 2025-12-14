#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockType;
class CompoundTag;
class Item;
class ReadOnlyBinaryStream;
// clang-format on

struct DeferredDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mFullName;
    ::ll::TypedStorage<2, 2, short>          mAuxValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> clone() const /*override*/;

    virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const /*override*/;

    virtual ::std::string getFullName() const /*override*/;

    virtual ::std::map<::std::string, ::std::string> toMap() const /*override*/;

    virtual ::std::optional<::CompoundTag> save() const /*override*/;

    virtual void serialize(::BinaryStream& stream) const /*override*/;

    virtual ::ItemDescriptor::InternalType getType() const /*override*/;

    virtual uint64 getHash() const /*override*/;

    virtual bool shouldResolve() const /*override*/;

    virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> resolve() const /*override*/;

    virtual ~DeferredDescriptor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor>
    _initFromBlockType(::BlockType const& block, ::WeakPtr<::Item>&& item) const;

    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> _initFromItem(::WeakPtr<::Item>&& item, short aux) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::std::unique_ptr<::DeferredDescriptor>> deserialize(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $clone() const;

    MCFOLD bool $sameItem(::ItemDescriptor::ItemEntry const&, bool) const;

    MCFOLD ::std::string $getFullName() const;

    MCAPI ::std::map<::std::string, ::std::string> $toMap() const;

    MCAPI ::std::optional<::CompoundTag> $save() const;

    MCAPI void $serialize(::BinaryStream& stream) const;

    MCFOLD ::ItemDescriptor::InternalType $getType() const;

    MCFOLD uint64 $getHash() const;

    MCFOLD bool $shouldResolve() const;

    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $resolve() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
