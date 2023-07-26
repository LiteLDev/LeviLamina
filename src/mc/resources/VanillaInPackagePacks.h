#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IInPackagePacks.h"

class VanillaInPackagePacks {

public:
    // prevent constructor by default
    VanillaInPackagePacks& operator=(VanillaInPackagePacks const&) = delete;
    VanillaInPackagePacks(VanillaInPackagePacks const&)            = delete;
    VanillaInPackagePacks()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getPacks\@VanillaInPackagePacks\@\@UEBA?AV?$vector\@UMetaData\@IInPackagePacks\@\@V?$allocator\@UMetaData\@IInPackagePacks\@\@\@std\@\@\@std\@\@W4PackType\@\@\@Z
     */
    virtual std::vector<struct IInPackagePacks::MetaData> getPacks(enum class PackType) const; // NOLINT
};
