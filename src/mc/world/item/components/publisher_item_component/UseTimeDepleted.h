#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemStack;
class Level;
class Player;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace PublisherItemComponent {

struct UseTimeDepleted : public ::ItemComponent,
                         public ::Bedrock::PubSub::Publisher<
                             void(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&),
                             ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                             0> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UseTimeDepleted() /*override*/ = default;
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
