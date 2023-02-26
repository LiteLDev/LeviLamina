/**
 * @file  MovementProxyStateProvider.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace MovementProxyStateProvider.
 *
 */
namespace MovementProxyStateProvider {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?create\@MovementProxyStateProvider\@\@YA?AV?$unique_ptr\@UIMovementProxyStateProvider\@\@U?$default_delete\@UIMovementProxyStateProvider\@\@\@std\@\@\@std\@\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@AEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@V?$not_null\@PEAVEntityRegistryBase\@\@\@gsl\@\@\@Z
     */
    MCAPI std::unique_ptr<struct IMovementProxyStateProvider> create(class WeakRefT<struct EntityRefTraits>, class entt::basic_dispatcher<class std::allocator<void>> &, class gsl::not_null<class EntityRegistryBase *>);

};