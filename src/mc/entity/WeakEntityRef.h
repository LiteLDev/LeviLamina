#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityRefTraits.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

class WeakEntityRef : public WeakRefT<struct EntityRefTraits> {

public:
    // prevent constructor by default
    WeakEntityRef& operator=(WeakEntityRef const&) = delete;
    WeakEntityRef(WeakEntityRef const&)            = delete;
    WeakEntityRef()                                = delete;

public:
    /**
     * @symbol ??0WeakEntityRef\@\@QEAA\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI WeakEntityRef(class WeakRefT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ??9WeakEntityRef\@\@QEBA_NV0\@\@Z
     */
    MCAPI bool operator!=(class WeakEntityRef) const; // NOLINT
    /**
     * @symbol ??4WeakEntityRef\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class WeakEntityRef& operator=(class WeakEntityRef&&); // NOLINT
    /**
     * @symbol ??8WeakEntityRef\@\@QEBA_NV?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI bool operator==(class WeakRefT<struct EntityRefTraits>) const; // NOLINT
    /**
     * @symbol ??8WeakEntityRef\@\@QEBA_NV0\@\@Z
     */
    MCAPI bool operator==(class WeakEntityRef) const; // NOLINT
    /**
     * @symbol ??1WeakEntityRef\@\@QEAA\@XZ
     */
    MCAPI ~WeakEntityRef(); // NOLINT
};
