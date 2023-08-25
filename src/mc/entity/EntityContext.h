#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityContextBase.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

class EntityContext : public EntityContextBase {

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0EntityContext\@\@QEAA\@AEAVEntityRegistry\@\@VEntityId\@\@\@Z
     */
    MCAPI EntityContext(class EntityRegistry&, class EntityId);
    /**
     * @symbol ?_registry\@EntityContext\@\@QEBAAEAVEntityRegistry\@\@XZ
     */
    MCAPI class EntityRegistry& _registry() const;
    /**
     * @symbol ?getWeakRef\@EntityContext\@\@QEBA?AV?$WeakRefT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct EntityRefTraits> getWeakRef() const;
    // NOLINTEND
};
