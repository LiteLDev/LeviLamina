#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class ItemStack;
class Vec3;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace PublisherItemComponent {

class OnUseOn : public ::ItemComponent,
                public ::Bedrock::PubSub::Publisher<
                    void(bool&, ::ItemStack const&, ::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&),
                    ::Bedrock::PubSub::ThreadModel::MultiThreaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5f099d;
    // NOLINTEND

public:
    // prevent constructor by default
    OnUseOn& operator=(OnUseOn const&);
    OnUseOn(OnUseOn const&);
    OnUseOn();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool isNetworkComponent() const /*override*/;

    // vIndex: 4
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    // vIndex: 5
    virtual bool initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    // vIndex: 0
    virtual ~OnUseOn() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isNetworkComponent() const;

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCAPI bool $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static void** $vftableForDispatchingPublisherBase();

    MCAPI static void** $vftableForConnector();
    // NOLINTEND
};

} // namespace PublisherItemComponent
