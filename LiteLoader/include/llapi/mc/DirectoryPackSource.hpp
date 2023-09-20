/**
 * @file  DirectoryPackSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"
#include "PackSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DirectoryPackSource.
 *
 */
class DirectoryPackSource : public PackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTORYPACKSOURCE
public:
    class DirectoryPackSource& operator=(class DirectoryPackSource const &) = delete;
    DirectoryPackSource(class DirectoryPackSource const &) = delete;
    DirectoryPackSource() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?forEachPackConst\@DirectoryPackSource\@\@UEBAXV?$function\@$$A6AXAEBVPack\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachPackConst(class std::function<void (class Pack const &)>) const;
    /**
     * @vftbl 2
     * @symbol ?forEachPack\@DirectoryPackSource\@\@UEAAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @vftbl 3
     * @symbol ?getPackOrigin\@DirectoryPackSource\@\@UEBA?AW4PackOrigin\@\@XZ
     */
    virtual enum class PackOrigin getPackOrigin() const;
    /**
     * @vftbl 4
     * @symbol ?getPackType\@DirectoryPackSource\@\@UEBA?AW4PackType\@\@XZ
     */
    virtual enum class PackType getPackType() const;
    /**
     * @vftbl 5
     * @symbol ?load\@DirectoryPackSource\@\@UEAA?AVPackSourceReport\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTORYPACKSOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DirectoryPackSource();
#endif
    /**
     * @symbol ??0DirectoryPackSource\@\@QEAA\@AEBVPath\@Core\@\@W4PackType\@\@W4PackOrigin\@\@_N\@Z
     */
    MCAPI DirectoryPackSource(class Core::Path const &, enum class PackType, enum class PackOrigin, bool);
    /**
     * @symbol ?checkAndRemoveIncompletePacks\@DirectoryPackSource\@\@SAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI static void checkAndRemoveIncompletePacks(class Core::Path const &);

};
