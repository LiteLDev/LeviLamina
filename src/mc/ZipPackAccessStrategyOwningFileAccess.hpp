/**
 * @file  ZipPackAccessStrategyOwningFileAccess.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"
#include "ZipPackAccessStrategy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ZipPackAccessStrategyOwningFileAccess.
 *
 */
class ZipPackAccessStrategyOwningFileAccess : public ZipPackAccessStrategy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZIPPACKACCESSSTRATEGYOWNINGFILEACCESS
public:
    class ZipPackAccessStrategyOwningFileAccess& operator=(class ZipPackAccessStrategyOwningFileAccess const &) = delete;
    ZipPackAccessStrategyOwningFileAccess(class ZipPackAccessStrategyOwningFileAccess const &) = delete;
    ZipPackAccessStrategyOwningFileAccess() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ZipPackAccessStrategyOwningFileAccess();
    /**
     * @symbol  ??0ZipPackAccessStrategyOwningFileAccess\@\@QEAA\@V?$shared_ptr\@VIFileAccess\@\@\@std\@\@AEBVResourceLocation\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI ZipPackAccessStrategyOwningFileAccess(class std::shared_ptr<class IFileAccess>, class ResourceLocation const &, class Core::Path const &);

};