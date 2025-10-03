#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class HashedString;
class ItemStack;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace PublisherItemComponent {

struct MiningBlock : public ::ItemComponent,
                     public ::Bedrock::PubSub::Publisher<
                         void(bool&, ::ItemStack&, ::Block const&, int, int, int, ::Actor&),
                         ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                         0> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MiningBlock() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForDispatchingPublisherBase();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForConnector();
    // NOLINTEND
};

} // namespace PublisherItemComponent
