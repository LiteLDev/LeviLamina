#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/level/block/LiquidReaction.h"
#include "mc/world/level/block/LiquidType.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
struct DetectionRule;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockLiquidDetectionDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka2862e;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockLiquidDetectionDescription& operator=(BlockLiquidDetectionDescription const&);
    BlockLiquidDetectionDescription(BlockLiquidDetectionDescription const&);
    BlockLiquidDetectionDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual bool isNetworkComponent() const /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    virtual ~BlockLiquidDetectionDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockLiquidDetectionDescription(::std::vector<::DetectionRule> detectionRules);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();

    MCNAPI static ::BidirectionalUnorderedMap<::std::string, ::LiquidReaction> const& liquidReactionNameBiMap();

    MCNAPI static ::BidirectionalUnorderedMap<::std::string, ::LiquidType> const& liquidTypeNameBiMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::DetectionRule> detectionRules);
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
