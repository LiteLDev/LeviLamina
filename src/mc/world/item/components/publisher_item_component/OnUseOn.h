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
class HashedString;
class ItemStack;
class Vec3;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace PublisherItemComponent {

struct OnUseOn : public ::ItemComponent,
                 public ::Bedrock::PubSub::Publisher<
                     void(bool&, ::ItemStack const&, ::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&),
                     ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                     0> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAutoSucceedOnClient;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isNetworkComponent() const /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    virtual bool initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    virtual ~OnUseOn() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isNetworkComponent() const;

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCAPI bool $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForDispatchingPublisherBase();

    MCNAPI static void** $vftableForConnector();
    // NOLINTEND
};

} // namespace PublisherItemComponent
