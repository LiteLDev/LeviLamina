/**
 * @file  StrictEntityContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StrictEntityContext.
 *
 */
class StrictEntityContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRICTENTITYCONTEXT
public:
    class StrictEntityContext& operator=(class StrictEntityContext const &) = delete;
    StrictEntityContext(class StrictEntityContext const &) = delete;
    StrictEntityContext() = delete;
#endif

public:
    /**
     * @hash   -692745412
     * @symbol  ??0StrictEntityContext\@\@QEAA\@AEBVEntityContextBase\@\@\@Z
     */
    MCAPI StrictEntityContext(class EntityContextBase const &);
    /**
     * @hash   1615877097
     * @symbol  ??0StrictEntityContext\@\@QEAA\@AEAVEntityRegistryBase\@\@VEntityId\@\@\@Z
     */
    MCAPI StrictEntityContext(class EntityRegistryBase &, class EntityId);
    /**
     * @hash   -1881137313
     * @symbol  ??0StrictEntityContext\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StrictEntityContext(class StrictEntityContext &&);
    /**
     * @hash   -2133745798
     * @symbol  ?isNull\@StrictEntityContext\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @hash   -1213403991
     * @symbol  ??9StrictEntityContext\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class StrictEntityContext const &) const;
    /**
     * @hash   2022052042
     * @symbol  ??4StrictEntityContext\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class StrictEntityContext & operator=(class StrictEntityContext &&);
    /**
     * @hash   1832066084
     * @symbol  ??8StrictEntityContext\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class StrictEntityContext const &) const;

//protected:
    /**
     * @hash   268043071
     * @symbol  ?_getEntityId\@StrictEntityContext\@\@IEBA?AVEntityId\@\@XZ
     */
    MCAPI class EntityId _getEntityId() const;
    /**
     * @hash   -1761861778
     * @symbol  ?_getRegistryId\@StrictEntityContext\@\@IEBAIXZ
     */
    MCAPI unsigned int _getRegistryId() const;

protected:

};