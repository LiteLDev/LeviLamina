#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockLegacy;
class CompoundTag;
class Item;
class ReadOnlyBinaryStream;
// clang-format on

struct DeferredDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd4971a;
    ::ll::UntypedStorage<2, 2>  mUnk5e449c;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredDescriptor& operator=(DeferredDescriptor const&);
    DeferredDescriptor(DeferredDescriptor const&);
    DeferredDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> clone() const /*override*/;

    // vIndex: 2
    virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const /*override*/;

    // vIndex: 3
    virtual ::std::string const& getFullName() const /*override*/;

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

    // vIndex: 14
    virtual bool shouldResolve() const /*override*/;

    // vIndex: 15
    virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> resolve() const /*override*/;

    // vIndex: 16
    virtual ~DeferredDescriptor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor>
    _initFromBlockLegacy(::BlockLegacy const& block, ::WeakPtr<::Item>&& item) const;

    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> _initFromItem(::WeakPtr<::Item>&& item, short aux) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::std::unique_ptr<::DeferredDescriptor>> deserialize(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $clone() const;

    MCAPI bool $sameItem(::ItemDescriptor::ItemEntry const&, bool) const;

    MCAPI ::std::string const& $getFullName() const;

    MCAPI ::std::map<::std::string, ::std::string> $toMap() const;

    MCAPI ::std::optional<::CompoundTag> $save() const;

    MCAPI void $serialize(::BinaryStream& stream) const;

    MCAPI ::ItemDescriptor::InternalType $getType() const;

    MCAPI uint64 $getHash() const;

    MCAPI bool $shouldResolve() const;

    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $resolve() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
