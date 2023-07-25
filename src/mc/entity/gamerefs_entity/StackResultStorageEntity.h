#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StackResultStorageEntity {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STACKRESULTSTORAGEENTITY
public:
    StackResultStorageEntity& operator=(StackResultStorageEntity const&) = delete;
    StackResultStorageEntity(StackResultStorageEntity const&)            = delete;
    StackResultStorageEntity()                                           = delete;
#endif

public:
    // protected:
    /**
     * @symbol ??0StackResultStorageEntity\@\@IEAA\@$$QEAV0\@\@Z
     */
    MCAPI StackResultStorageEntity(class StackResultStorageEntity&&);
    /**
     * @symbol ??0StackResultStorageEntity\@\@IEAA\@AEBVWeakStorageEntity\@\@\@Z
     */
    MCAPI StackResultStorageEntity(class WeakStorageEntity const&);
    /**
     * @symbol ??0StackResultStorageEntity\@\@IEAA\@AEBVOwnerStorageEntity\@\@\@Z
     */
    MCAPI StackResultStorageEntity(class OwnerStorageEntity const&);
    /**
     * @symbol ?_getStackRef\@StackResultStorageEntity\@\@IEBAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext& _getStackRef() const;
    /**
     * @symbol ?_hasValue\@StackResultStorageEntity\@\@IEBA_NXZ
     */
    MCAPI bool _hasValue() const;

protected:
};
