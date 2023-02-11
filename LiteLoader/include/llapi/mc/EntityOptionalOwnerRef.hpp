/**
 * @file  EntityOptionalOwnerRef.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityOptionalOwnerRef.
 *
 */
class EntityOptionalOwnerRef {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYOPTIONALOWNERREF
public:
    class EntityOptionalOwnerRef& operator=(class EntityOptionalOwnerRef const &) = delete;
    EntityOptionalOwnerRef(class EntityOptionalOwnerRef const &) = delete;
#endif

public:
    /**
     * @hash   -783173809
     * @symbol  ??0EntityOptionalOwnerRef\@\@QEAA\@XZ
     */
    MCAPI EntityOptionalOwnerRef();
    /**
     * @hash   370070474
     * @symbol  ?isSet\@EntityOptionalOwnerRef\@\@QEBA_NXZ
     */
    MCAPI bool isSet() const;
    /**
     * @hash   689565121
     * @symbol  ?setOwnedRef\@EntityOptionalOwnerRef\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void setOwnedRef(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -1739459565
     * @symbol  ?setWeakRef\@EntityOptionalOwnerRef\@\@QEAAXV?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void setWeakRef(class WeakRefT<struct EntityRefTraits>);
    /**
     * @hash   -133342429
     * @symbol  ?tryGet\@EntityOptionalOwnerRef\@\@QEBA?AV?$StackRefResultT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCAPI class StackRefResultT<struct EntityRefTraits> tryGet() const;

};