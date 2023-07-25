#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/resources/ZipPackAccessStrategy.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ZipPackAccessStrategyOwningFileAccess : public ::ZipPackAccessStrategy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZIPPACKACCESSSTRATEGYOWNINGFILEACCESS
public:
    ZipPackAccessStrategyOwningFileAccess& operator=(ZipPackAccessStrategyOwningFileAccess const&) = delete;
    ZipPackAccessStrategyOwningFileAccess(ZipPackAccessStrategyOwningFileAccess const&)            = delete;
    ZipPackAccessStrategyOwningFileAccess()                                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol
     * ??0ZipPackAccessStrategyOwningFileAccess\@\@QEAA\@V?$shared_ptr\@VIFileAccess\@\@\@std\@\@AEBVResourceLocation\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI
    ZipPackAccessStrategyOwningFileAccess(class std::shared_ptr<class IFileAccess>, class ResourceLocation const&, class Core::Path const&);
};
