#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class BaseGamePackSlices {
public:
    // BaseGamePackSlices inner types declare
    // clang-format off
    struct BaseGameVersionPack;
    // clang-format on

    // BaseGamePackSlices inner types define
    struct BaseGameVersionPack {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEGAMEPACKSLICES_BASEGAMEVERSIONPACK
    public:
        BaseGameVersionPack& operator=(BaseGameVersionPack const&) = delete;
        BaseGameVersionPack(BaseGameVersionPack const&)            = delete;
        BaseGameVersionPack()                                      = delete;
#endif

    public:
        /**
         * @symbol ??1BaseGameVersionPack\@BaseGamePackSlices\@\@QEAA\@XZ
         */
        MCAPI ~BaseGameVersionPack();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEGAMEPACKSLICES
public:
    BaseGamePackSlices& operator=(BaseGamePackSlices const&) = delete;
    BaseGamePackSlices(BaseGamePackSlices const&)            = delete;
#endif

public:
    /**
     * @symbol ??0BaseGamePackSlices\@\@QEAA\@XZ
     */
    MCAPI BaseGamePackSlices();
    /**
     * @symbol
     * ?addFromVersions\@BaseGamePackSlices\@\@QEAAXAEBV?$vector\@VBaseGameVersion\@\@V?$allocator\@VBaseGameVersion\@\@\@std\@\@\@std\@\@AEBVIResourcePackRepository\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI void
    addFromVersions(std::vector<class BaseGameVersion> const&, class IResourcePackRepository const&, class mce::UUID const&);
    /**
     * @symbol
     * ?applyPackSlices\@BaseGamePackSlices\@\@QEBAXAEBVBaseGameVersion\@\@AEBVIResourcePackRepository\@\@AEAVResourcePackStack\@\@\@Z
     */
    MCAPI void
    applyPackSlices(class BaseGameVersion const&, class IResourcePackRepository const&, class ResourcePackStack&) const;
    /**
     * @symbol ??1BaseGamePackSlices\@\@QEAA\@XZ
     */
    MCAPI ~BaseGamePackSlices();
};
