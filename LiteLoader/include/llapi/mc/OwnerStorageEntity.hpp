/**
 * @file  OwnerStorageEntity.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "EntityContext.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class OwnerStorageEntity.
 *
 */
class OwnerStorageEntity {

#define AFTER_EXTRA
    // Add Member There
public:

    enum class VariadicInit : int {
        NonAmbiguous = 0,
    };
    enum class EmptyInit : int {
        NoValue = 0,
    };

    std::optional<EntityContext> mContext;

    
    template <class Entity, bool Unknown = false>
    inline Entity* tryUnwrap() {
        if (!_hasValue()) {
            return nullptr;
        }
        return Entity::tryGetFromEntity(_getStackRef(), Unknown);
    }

#define DISABLE_CONSTRUCTOR_PREVENTION_OWNERSTORAGEENTITY

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERSTORAGEENTITY
public:
    class OwnerStorageEntity& operator=(class OwnerStorageEntity const &) = delete;
    OwnerStorageEntity(class OwnerStorageEntity const &) = delete;
    OwnerStorageEntity() = delete;
#endif

public:

//protected:
    /**
     * @symbol ??0OwnerStorageEntity\@\@IEAA\@W4VariadicInit\@0\@AEAVEntityRegistry\@\@\@Z
     */
    MCAPI OwnerStorageEntity(enum class OwnerStorageEntity::VariadicInit, class EntityRegistry &);
    /**
     * @symbol ??0OwnerStorageEntity\@\@IEAA\@$$QEAV0\@\@Z
     */
    MCAPI OwnerStorageEntity(class OwnerStorageEntity &&);
    /**
     * @symbol ??0OwnerStorageEntity\@\@IEAA\@W4EmptyInit\@0\@\@Z
     */
    MCAPI OwnerStorageEntity(enum class OwnerStorageEntity::EmptyInit);
    /**
     * @symbol ?_getStackRef\@OwnerStorageEntity\@\@IEBAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext & _getStackRef() const;
    /**
     * @symbol ?_hasValue\@OwnerStorageEntity\@\@IEBA_NXZ
     */
    MCAPI bool _hasValue() const;
    /**
     * @symbol ?_remake\@OwnerStorageEntity\@\@IEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void _remake(class EntityRegistry &);
    /**
     * @symbol ?_reset\@OwnerStorageEntity\@\@IEAAXXZ
     */
    MCAPI void _reset();
    /**
     * @symbol ??4OwnerStorageEntity\@\@IEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class OwnerStorageEntity & operator=(class OwnerStorageEntity &&);
    /**
     * @symbol ??1OwnerStorageEntity\@\@IEAA\@XZ
     */
    MCAPI ~OwnerStorageEntity();

protected:

};
