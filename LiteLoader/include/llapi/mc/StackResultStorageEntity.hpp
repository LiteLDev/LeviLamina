/**
 * @file  StackResultStorageEntity.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StackResultStorageEntity.
 *
 */
class StackResultStorageEntity {

#define AFTER_EXTRA
// Add Member There
public:

inline class EntityContext& getStackRef() {
    return _getStackRef();
}

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STACKRESULTSTORAGEENTITY
public:
    class StackResultStorageEntity& operator=(class StackResultStorageEntity const &) = delete;
    StackResultStorageEntity(class StackResultStorageEntity const &) = delete;
    StackResultStorageEntity() = delete;
#endif

public:

//protected:
    /**
     * @hash   -1163492432
     * @symbol ??0StackResultStorageEntity@@IEAA@AEBVWeakStorageEntity@@@Z
     */
    MCAPI StackResultStorageEntity(class WeakStorageEntity const &);
    /**
     * @hash   1499468475
     * @symbol ??0StackResultStorageEntity@@IEAA@AEBVOwnerStorageEntity@@@Z
     */
    MCAPI StackResultStorageEntity(class OwnerStorageEntity const &);
    /**
     * @hash   -1603207480
     * @symbol ??0StackResultStorageEntity@@IEAA@$$QEAV0@@Z
     */
    MCAPI StackResultStorageEntity(class StackResultStorageEntity &&);
    /**
     * @hash   1159997601
     * @symbol ?_getStackRef@StackResultStorageEntity@@IEBAAEAVEntityContext@@XZ
     */
    MCAPI class EntityContext & _getStackRef() const;
    /**
     * @hash   -1475278983
     * @symbol ?_hasValue@StackResultStorageEntity@@IEBA_NXZ
     */
    MCAPI bool _hasValue() const;

protected:

};