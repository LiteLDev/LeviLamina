#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/level/block/LiquidReaction.h"
#include "mc/world/level/block/LiquidType.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/RuleSet.h"

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
    ::ll::TypedStorage<8, 24, ::RuleSet> mDetectionRules;
    // NOLINTEND

public:
    // prevent constructor by default
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
    MCAPI explicit BlockLiquidDetectionDescription(::std::vector<::DetectionRule> detectionRules);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();

    MCAPI static ::BidirectionalUnorderedMap<::std::string, ::LiquidReaction> const& liquidReactionNameBiMap();

    MCAPI static ::BidirectionalUnorderedMap<::std::string, ::LiquidType> const& liquidTypeNameBiMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::DetectionRule> detectionRules);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCFOLD bool $isNetworkComponent() const;

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
