#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IInPackagePacks.h"

class VanillaInPackagePacks {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAINPACKAGEPACKS
public:
    VanillaInPackagePacks& operator=(VanillaInPackagePacks const&) = delete;
    VanillaInPackagePacks(VanillaInPackagePacks const&)            = delete;
    VanillaInPackagePacks()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getPacks\@VanillaInPackagePacks\@\@UEBA?AV?$vector\@UMetaData\@IInPackagePacks\@\@V?$allocator\@UMetaData\@IInPackagePacks\@\@\@std\@\@\@std\@\@W4PackType\@\@\@Z
     */
    virtual std::vector<struct IInPackagePacks::MetaData> getPacks(enum class PackType) const;
};
