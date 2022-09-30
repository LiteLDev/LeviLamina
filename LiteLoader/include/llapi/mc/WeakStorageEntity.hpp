/**
 * @file  WeakStorageEntity.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WeakStorageEntity.
 *
 */
class WeakStorageEntity {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKSTORAGEENTITY
public:
    class WeakStorageEntity& operator=(class WeakStorageEntity const &) = delete;
    WeakStorageEntity(class WeakStorageEntity const &) = delete;
    WeakStorageEntity() = delete;
#endif

public:
    /**
     * @hash   -1439691951
     * @symbol ??8WeakStorageEntity@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class WeakStorageEntity const &) const;

//protected:
    /**
     * @hash   -1669459157
     * @symbol ??0WeakStorageEntity@@IEAA@W4VariadicInit@0@AEBVEntityContext@@@Z
     */
    MCAPI WeakStorageEntity(enum class WeakStorageEntity::VariadicInit, class EntityContext const &);
    /**
     * @hash   -698714046
     * @symbol ??0WeakStorageEntity@@IEAA@W4EmptyInit@0@@Z
     */
    MCAPI WeakStorageEntity(enum class WeakStorageEntity::EmptyInit);
    /**
     * @hash   -1556862531
     * @symbol ??0WeakStorageEntity@@IEAA@AEBVStackResultStorageEntity@@@Z
     */
    MCAPI WeakStorageEntity(class StackResultStorageEntity const &);
    /**
     * @hash   1458894955
     * @symbol ??0WeakStorageEntity@@IEAA@AEBVOwnerStorageEntity@@@Z
     */
    MCAPI WeakStorageEntity(class OwnerStorageEntity const &);
    /**
     * @hash   285526463
     * @symbol ?_isSet@WeakStorageEntity@@IEBA_NXZ
     */
    MCAPI bool _isSet() const;
    /**
     * @hash   -717554243
     * @symbol ?_reset@WeakStorageEntity@@IEAAXXZ
     */
    MCAPI void _reset();

protected:

};