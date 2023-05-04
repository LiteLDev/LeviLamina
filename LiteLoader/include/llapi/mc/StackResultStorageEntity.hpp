/**
 * @file  StackResultStorageEntity.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
    std::optional<EntityContext> mContext;

    template <class Entity, bool Unknown = false>
    inline Entity* tryUnwrap() {
        if (_hasValue()) {
            return Entity::tryGetFromEntity(_getStackRef(), Unknown);
        }
        return nullptr;
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
     * @symbol ??0StackResultStorageEntity\@\@IEAA\@$$QEAV0\@\@Z
     */
    MCAPI StackResultStorageEntity(class StackResultStorageEntity &&);
    /**
     * @symbol ??0StackResultStorageEntity\@\@IEAA\@AEBVWeakStorageEntity\@\@\@Z
     */
    MCAPI StackResultStorageEntity(class WeakStorageEntity const &);
    /**
     * @symbol ??0StackResultStorageEntity\@\@IEAA\@AEBVOwnerStorageEntity\@\@\@Z
     */
    MCAPI StackResultStorageEntity(class OwnerStorageEntity const &);
    /**
     * @symbol ?_getStackRef\@StackResultStorageEntity\@\@IEBAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext & _getStackRef() const;
    /**
     * @symbol ?_hasValue\@StackResultStorageEntity\@\@IEBA_NXZ
     */
    MCAPI bool _hasValue() const;

protected:

};
