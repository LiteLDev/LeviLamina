#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ItemStack;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace PublisherItemComponent {

class MiningBlock : public ::ItemComponent,
                    public ::Bedrock::PubSub::Publisher<
                        void(bool&, ::ItemStack&, ::Block const&, int, int, int, ::Actor&),
                        ::Bedrock::PubSub::ThreadModel::MultiThreaded> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MiningBlock() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static void** $vftableForConnector();

    MCAPI static void** $vftableForDispatchingPublisherBase();
    // NOLINTEND
};

} // namespace PublisherItemComponent
