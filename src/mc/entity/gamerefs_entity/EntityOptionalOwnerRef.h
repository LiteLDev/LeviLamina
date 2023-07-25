#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"

class EntityOptionalOwnerRef {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYOPTIONALOWNERREF
public:
    EntityOptionalOwnerRef& operator=(EntityOptionalOwnerRef const&) = delete;
    EntityOptionalOwnerRef(EntityOptionalOwnerRef const&)            = delete;
#endif

public:
    /**
     * @symbol ??0EntityOptionalOwnerRef\@\@QEAA\@XZ
     */
    MCAPI EntityOptionalOwnerRef();
    /**
     * @symbol ?isSet\@EntityOptionalOwnerRef\@\@QEBA_NXZ
     */
    MCAPI bool isSet() const;
    /**
     * @symbol ?setOwnedRef\@EntityOptionalOwnerRef\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void setOwnedRef(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol ?setWeakRef\@EntityOptionalOwnerRef\@\@QEAAXV?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void setWeakRef(class WeakRefT<struct EntityRefTraits>);
    /**
     * @symbol ?tryGet\@EntityOptionalOwnerRef\@\@QEBA?AV?$StackRefResultT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCAPI class StackRefResultT<struct EntityRefTraits> tryGet() const;
};
