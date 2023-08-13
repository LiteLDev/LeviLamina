#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"

class RealmsUnknownPackSource : public ::PackSource {

public:
    // prevent constructor by default
    RealmsUnknownPackSource& operator=(RealmsUnknownPackSource const&) = delete;
    RealmsUnknownPackSource(RealmsUnknownPackSource const&)            = delete;
    RealmsUnknownPackSource()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?forEachPackConst\@RealmsUnknownPackSource\@\@UEBAXV?$function\@$$A6AXAEBVPack\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachPackConst(std::function<void(class Pack const&)>) const;
    /**
     * @vftbl 2
     * @symbol ?forEachPack\@RealmsUnknownPackSource\@\@UEAAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachPack(std::function<void(class Pack&)>);
    /**
     * @vftbl 3
     * @symbol ?getPackOrigin\@RealmsUnknownPackSource\@\@UEBA?AW4PackOrigin\@\@XZ
     */
    virtual enum class PackOrigin getPackOrigin() const;
    /**
     * @vftbl 4
     * @symbol ?getPackType\@RealmsUnknownPackSource\@\@UEBA?AW4PackType\@\@XZ
     */
    virtual enum class PackType getPackType() const;
    /**
     * @vftbl 5
     * @symbol
     * ?load\@RealmsUnknownPackSource\@\@UEAA?AVPackSourceReport\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual class PackSourceReport
    load(class IPackManifestFactory&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);
    /**
     * @symbol ??0RealmsUnknownPackSource\@\@QEAA\@W4PackType\@\@W4PackOrigin\@\@\@Z
     */
    MCAPI RealmsUnknownPackSource(enum class PackType, enum class PackOrigin);
    // NOLINTEND
};
