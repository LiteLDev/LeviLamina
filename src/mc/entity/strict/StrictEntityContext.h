#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StrictEntityContext {

public:
    // prevent constructor by default
    StrictEntityContext& operator=(StrictEntityContext const&) = delete;
    StrictEntityContext(StrictEntityContext const&)            = delete;
    StrictEntityContext()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0StrictEntityContext\@\@QEAA\@AEAVEntityRegistryBase\@\@VEntityId\@\@\@Z
     */
    MCAPI StrictEntityContext(class EntityRegistryBase&, class EntityId);
    /**
     * @symbol ??0StrictEntityContext\@\@QEAA\@AEBVEntityContextBase\@\@\@Z
     */
    MCAPI StrictEntityContext(class EntityContextBase const&);
    /**
     * @symbol ??0StrictEntityContext\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StrictEntityContext(class StrictEntityContext&&);
    /**
     * @symbol ?isNull\@StrictEntityContext\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @symbol ??9StrictEntityContext\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class StrictEntityContext const&) const;
    /**
     * @symbol ??4StrictEntityContext\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class StrictEntityContext& operator=(class StrictEntityContext&&);
    /**
     * @symbol ??8StrictEntityContext\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class StrictEntityContext const&) const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_getEntityId\@StrictEntityContext\@\@IEBA?AVEntityId\@\@XZ
     */
    MCAPI class EntityId _getEntityId() const;
    /**
     * @symbol ?_getRegistryId\@StrictEntityContext\@\@IEBAIXZ
     */
    MCAPI unsigned int _getRegistryId() const;
    // NOLINTEND
};
