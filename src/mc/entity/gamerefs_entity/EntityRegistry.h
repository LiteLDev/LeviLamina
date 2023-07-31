#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/gamerefs_entity/EntityRegistryBase.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

class EntityRegistry : public EntityRegistryBase, public std::enable_shared_from_this<EntityRegistry> {

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getWeakRef\@EntityRegistry\@\@QEAA?AV?$WeakRefT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct EntityRegistryRefTraits> getWeakRef();
    /**
     * @symbol ??1EntityRegistry\@\@QEAA\@XZ
     */
    MCAPI ~EntityRegistry();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ??0EntityRegistry\@\@IEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI EntityRegistry(std::string);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_createEntity\@EntityRegistry\@\@AEAA?AVEntityContext\@\@XZ
     */
    MCAPI class EntityContext _createEntity();
    /**
     * @symbol ?_destroyEntity\@EntityRegistry\@\@AEAAXVEntityContext\@\@\@Z
     */
    MCAPI void _destroyEntity(class EntityContext);
    // NOLINTEND
};
