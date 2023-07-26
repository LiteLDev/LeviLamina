#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"

class EntityOptionalOwnerRef {

public:
    // prevent constructor by default
    EntityOptionalOwnerRef& operator=(EntityOptionalOwnerRef const&) = delete;
    EntityOptionalOwnerRef(EntityOptionalOwnerRef const&)            = delete;

public:
    /**
     * @symbol ??0EntityOptionalOwnerRef\@\@QEAA\@XZ
     */
    MCAPI EntityOptionalOwnerRef(); // NOLINT
    /**
     * @symbol ?isSet\@EntityOptionalOwnerRef\@\@QEBA_NXZ
     */
    MCAPI bool isSet() const; // NOLINT
    /**
     * @symbol ?setOwnedRef\@EntityOptionalOwnerRef\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void setOwnedRef(class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?setWeakRef\@EntityOptionalOwnerRef\@\@QEAAXV?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void setWeakRef(class WeakRefT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?tryGet\@EntityOptionalOwnerRef\@\@QEBA?AV?$StackRefResultT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCAPI class StackRefResultT<struct EntityRefTraits> tryGet() const; // NOLINT
};
