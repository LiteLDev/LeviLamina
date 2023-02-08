/**
 * @file  OwnerStorageEntity.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OwnerStorageEntity.
 *
 */
class OwnerStorageEntity {

#define AFTER_EXTRA
// Add Member There

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
     * @hash   142723021
     * @symbol  ??0OwnerStorageEntity\@\@IEAA\@W4VariadicInit\@0\@AEAVEntityRegistry\@\@\@Z
     */
    MCAPI OwnerStorageEntity(enum class OwnerStorageEntity::VariadicInit, class EntityRegistry &);
    /**
     * @hash   457969989
     * @symbol  ??0OwnerStorageEntity\@\@IEAA\@W4EmptyInit\@0\@\@Z
     */
    MCAPI OwnerStorageEntity(enum class OwnerStorageEntity::EmptyInit);
    /**
     * @hash   -1288739462
     * @symbol  ??0OwnerStorageEntity\@\@IEAA\@$$QEAV0\@\@Z
     */
    MCAPI OwnerStorageEntity(class OwnerStorageEntity &&);
    /**
     * @hash   1067985903
     * @symbol  ?_getStackRef\@OwnerStorageEntity\@\@IEBAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext & _getStackRef() const;
    /**
     * @hash   -48457913
     * @symbol  ?_hasValue\@OwnerStorageEntity\@\@IEBA_NXZ
     */
    MCAPI bool _hasValue() const;
    /**
     * @hash   -976856476
     * @symbol  ?_remake\@OwnerStorageEntity\@\@IEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void _remake(class EntityRegistry &);
    /**
     * @hash   -2016038984
     * @symbol  ?_reset\@OwnerStorageEntity\@\@IEAAXXZ
     */
    MCAPI void _reset();
    /**
     * @hash   -2129134856
     * @symbol  ??4OwnerStorageEntity\@\@IEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class OwnerStorageEntity & operator=(class OwnerStorageEntity &&);
    /**
     * @hash   -481916352
     * @symbol  ??1OwnerStorageEntity\@\@IEAA\@XZ
     */
    MCAPI ~OwnerStorageEntity();

protected:

};