#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockCollisionBoxDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnke75010;
    ::ll::UntypedStorage<4, 12> mUnka4807b;
    ::ll::UntypedStorage<4, 12> mUnk54e2ed;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCollisionBoxDescription& operator=(BlockCollisionBoxDescription const&);
    BlockCollisionBoxDescription(BlockCollisionBoxDescription const&);
    BlockCollisionBoxDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual bool isNetworkComponent() const /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    virtual ~BlockCollisionBoxDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockCollisionBoxDescription(bool enabled);

    MCNAPI BlockCollisionBoxDescription(::Vec3 const& origin, ::Vec3 const& size);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool enabled);

    MCNAPI void* $ctor(::Vec3 const& origin, ::Vec3 const& size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI bool $isNetworkComponent() const;

    MCNAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
