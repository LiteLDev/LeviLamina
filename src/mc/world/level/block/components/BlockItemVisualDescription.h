#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockItemVisualDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk5cb854;
    ::ll::UntypedStorage<8, 144> mUnk9341c7;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockItemVisualDescription& operator=(BlockItemVisualDescription const&);
    BlockItemVisualDescription(BlockItemVisualDescription const&);
    BlockItemVisualDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual bool isNetworkComponent() const /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    virtual ~BlockItemVisualDescription() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

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
