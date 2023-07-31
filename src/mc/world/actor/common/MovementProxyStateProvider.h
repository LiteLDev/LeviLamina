#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class WeakRefT;
// clang-format on

namespace MovementProxyStateProvider {
// NOLINTBEGIN
/**
 * @symbol
 * ?create\@MovementProxyStateProvider\@\@YA?AV?$unique_ptr\@UIMovementProxyStateProvider\@\@U?$default_delete\@UIMovementProxyStateProvider\@\@\@std\@\@\@std\@\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@AEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@V?$not_null\@PEAVEntityRegistryBase\@\@\@gsl\@\@\@Z
 */
MCAPI std::unique_ptr<struct IMovementProxyStateProvider>
create(class WeakRefT<struct EntityRefTraits>, class entt::basic_dispatcher<std::allocator<void>>&, class gsl::not_null<class EntityRegistryBase*>);
// NOLINTEND

}; // namespace MovementProxyStateProvider
