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
    MCNAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor>
    _initFromBlockType(::BlockType const& block, ::WeakPtr<::Item>&& item) const;

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

    MCNAPI ::std::string $getFullName() const;

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
