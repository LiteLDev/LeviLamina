#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemStack;
class Player;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace PublisherItemComponent {

class OnUse : public ::ItemComponent,
              public ::Bedrock::PubSub::
                  Publisher<void(bool&, ::ItemStack&, ::Player&), ::Bedrock::PubSub::ThreadModel::MultiThreaded> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnUse() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
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
