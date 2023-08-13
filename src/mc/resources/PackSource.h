#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class PackSource {

public:
    // prevent constructor by default
    PackSource& operator=(PackSource const&) = delete;
    PackSource(PackSource const&)            = delete;
    PackSource()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol ?forEachPackConst\@RealmsUnknownPackSource\@\@UEBAXV?$function\@$$A6AXAEBVPack\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachPackConst(std::function<void(class Pack const&)>) const = 0;
    /**
     * @vftbl 2
     * @symbol ?forEachPack\@RealmsUnknownPackSource\@\@UEAAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachPack(std::function<void(class Pack&)>) = 0;
    /**
     * @vftbl 3
     * @symbol ?getPackOrigin\@PackSource\@\@UEBA?AW4PackOrigin\@\@XZ
     */
    virtual enum class PackOrigin getPackOrigin() const;
    /**
     * @vftbl 4
     * @symbol ?getPackType\@PackSource\@\@UEBA?AW4PackType\@\@XZ
     */
    virtual enum class PackType getPackType() const;
    /**
     * @vftbl 5
     * @symbol
     * ?load\@RealmsUnknownPackSource\@\@UEAA?AVPackSourceReport\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual class PackSourceReport
    load(class IPackManifestFactory&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKSOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PackSource();
#endif
    /**
     * @symbol ?fetchPack\@PackSource\@\@QEAAPEAVPack\@\@AEBUPackIdVersion\@\@\@Z
     */
    MCAPI class Pack* fetchPack(struct PackIdVersion const&);
    /**
     * @symbol
     * ?resolveUpgradeDependencies\@PackSource\@\@QEAAXAEAVPack\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI void
    resolveUpgradeDependencies(class Pack&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);
    // NOLINTEND
};
