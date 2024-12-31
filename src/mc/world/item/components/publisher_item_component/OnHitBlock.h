#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ItemStack;
class Mob;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace PublisherItemComponent {

class OnHitBlock : public ::ItemComponent,
                   public ::Bedrock::PubSub::Publisher<
                       void(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&),
                       ::Bedrock::PubSub::ThreadModel::MultiThreaded> {
public:
    // prevent constructor by default
    OnHitBlock& operator=(OnHitBlock const&);
    OnHitBlock(OnHitBlock const&);
    OnHitBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnHitBlock() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForDispatchingPublisherBase();

    MCAPI static void** $vftableForConnector();

    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PublisherItemComponent
