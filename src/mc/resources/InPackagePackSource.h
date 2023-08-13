#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"

class InPackagePackSource : public ::PackSource {

public:
    // prevent constructor by default
    InPackagePackSource& operator=(InPackagePackSource const&) = delete;
    InPackagePackSource(InPackagePackSource const&)            = delete;
    InPackagePackSource()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?forEachPackConst\@InPackagePackSource\@\@UEBAXV?$function\@$$A6AXAEBVPack\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachPackConst(std::function<void(class Pack const&)>) const;
    /**
     * @vftbl 2
     * @symbol ?forEachPack\@InPackagePackSource\@\@UEAAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachPack(std::function<void(class Pack&)>);
    /**
     * @vftbl 3
     * @symbol ?getPackOrigin\@InPackagePackSource\@\@UEBA?AW4PackOrigin\@\@XZ
     */
    virtual enum class PackOrigin getPackOrigin() const;
    /**
     * @vftbl 4
     * @symbol ?getPackType\@InPackagePackSource\@\@UEBA?AW4PackType\@\@XZ
     */
    virtual enum class PackType getPackType() const;
    /**
     * @vftbl 5
     * @symbol
     * ?load\@InPackagePackSource\@\@UEAA?AVPackSourceReport\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual class PackSourceReport
    load(class IPackManifestFactory&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);
    /**
     * @symbol ??0InPackagePackSource\@\@QEAA\@AEBV?$shared_ptr\@VIInPackagePacks\@\@\@std\@\@W4PackType\@\@\@Z
     */
    MCAPI InPackagePackSource(std::shared_ptr<class IInPackagePacks> const&, enum class PackType);
    // NOLINTEND
};
