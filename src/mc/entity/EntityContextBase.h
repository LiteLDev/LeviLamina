#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityContextBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCONTEXTBASE
public:
    EntityContextBase& operator=(EntityContextBase const&) = delete;
    EntityContextBase(EntityContextBase const&)            = delete;
    EntityContextBase()                                    = delete;
#endif

public:
    /**
     * @symbol ??0EntityContextBase\@\@QEAA\@AEAVEntityRegistryBase\@\@VEntityId\@\@\@Z
     */
    MCAPI EntityContextBase(class EntityRegistryBase&, class EntityId);
    /**
     * @symbol ?isValid\@EntityContextBase\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??8EntityContextBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class EntityContextBase const&) const;

    // protected:
    /**
     * @symbol ?_getEntityId\@EntityContextBase\@\@IEBA?AVEntityId\@\@XZ
     */
    MCAPI class EntityId _getEntityId() const;
    /**
     * @symbol ?_getRegistryId\@EntityContextBase\@\@IEBAIXZ
     */
    MCAPI unsigned int _getRegistryId() const;

protected:
};
