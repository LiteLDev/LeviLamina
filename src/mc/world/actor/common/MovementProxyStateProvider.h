#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

namespace MovementProxyStateProvider {
// NOLINTBEGIN
/**
 * @symbol
 * ?create\@MovementProxyStateProvider\@\@YA?AV?$unique_ptr\@UIMovementProxyStateProvider\@\@U?$default_delete\@UIMovementProxyStateProvider\@\@\@std\@\@\@std\@\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@AEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@V?$not_null\@PEAVEntityRegistryBase\@\@\@gsl\@\@\@Z
 */
MCAPI std::unique_ptr<struct IMovementProxyStateProvider>
      create(class WeakRefT<struct EntityRefTraits>, entt::dispatcher&, gsl::not_null<class EntityRegistryBase*>);
// NOLINTEND

}; // namespace MovementProxyStateProvider
