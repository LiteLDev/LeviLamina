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
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace PublisherItemComponent {

class UseTimeDepleted : public ::ItemComponent,
                        public ::Bedrock::PubSub::Publisher<
                            void(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&),
                            ::Bedrock::PubSub::ThreadModel::MultiThreaded> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UseTimeDepleted() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
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
