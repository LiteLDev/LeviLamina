// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

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
    MCAPI bool operator==(class WeakStorageEntity const &) const;

protected:
    MCAPI WeakStorageEntity(class StackResultStorageEntity const &);
    MCAPI WeakStorageEntity(class OwnerStorageEntity const &);
    MCAPI WeakStorageEntity(enum WeakStorageEntity::EmptyInit);
    MCAPI WeakStorageEntity(enum WeakStorageEntity::VariadicInit, class EntityContext const &);
    MCAPI bool _isSet() const;
    MCAPI void _reset();

private:

};