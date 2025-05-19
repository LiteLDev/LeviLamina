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
    virtual ~DeferredDescriptor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor>
    _initFromBlockLegacy(::BlockLegacy const& block, ::WeakPtr<::Item>&& item) const;

    MCNAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> _initFromItem(::WeakPtr<::Item>&& item, short aux) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::std::unique_ptr<::DeferredDescriptor>>
    deserialize(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $clone() const;

    MCNAPI bool $sameItem(::ItemDescriptor::ItemEntry const&, bool) const;

    MCNAPI ::std::string const& $getFullName() const;

    MCNAPI ::std::map<::std::string, ::std::string> $toMap() const;

    MCNAPI ::std::optional<::CompoundTag> $save() const;

    MCNAPI void $serialize(::BinaryStream& stream) const;

    MCNAPI ::ItemDescriptor::InternalType $getType() const;

    MCNAPI uint64 $getHash() const;

    MCNAPI bool $shouldResolve() const;

    MCNAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $resolve() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
