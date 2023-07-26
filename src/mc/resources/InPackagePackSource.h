#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class InPackagePackSource {

public:
    // prevent constructor by default
    InPackagePackSource& operator=(InPackagePackSource const&) = delete;
    InPackagePackSource(InPackagePackSource const&)            = delete;
    InPackagePackSource()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getPackOrigin\@InPackagePackSource\@\@UEBA?AW4PackOrigin\@\@XZ
     */
    virtual enum class PackOrigin getPackOrigin() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getPackType\@InPackagePackSource\@\@UEBA?AW4PackType\@\@XZ
     */
    virtual enum class PackType getPackType() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?load\@InPackagePackSource\@\@UEAA?AVPackSourceReport\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual class PackSourceReport
    load(class IPackManifestFactory&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INPACKAGEPACKSOURCE
    /**
     * @symbol ?forEachPack\@InPackagePackSource\@\@UEAAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPack(class std::function<void(class Pack&)>); // NOLINT
    /**
     * @symbol ?forEachPackConst\@InPackagePackSource\@\@UEBAXV?$function\@$$A6AXAEBVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPackConst(class std::function<void(class Pack const&)>) const; // NOLINT
#endif
    /**
     * @symbol ??0InPackagePackSource\@\@QEAA\@AEBV?$shared_ptr\@VIInPackagePacks\@\@\@std\@\@W4PackType\@\@\@Z
     */
    MCAPI InPackagePackSource(class std::shared_ptr<class IInPackagePacks> const&, enum class PackType); // NOLINT
};
