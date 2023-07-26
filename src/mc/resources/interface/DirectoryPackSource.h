#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class DirectoryPackSource {

public:
    // prevent constructor by default
    DirectoryPackSource& operator=(DirectoryPackSource const&) = delete;
    DirectoryPackSource(DirectoryPackSource const&)            = delete;
    DirectoryPackSource()                                      = delete;

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
     * @symbol ?getPackOrigin\@DirectoryPackSource\@\@UEBA?AW4PackOrigin\@\@XZ
     */
    virtual enum class PackOrigin getPackOrigin() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getPackType\@DirectoryPackSource\@\@UEBA?AW4PackType\@\@XZ
     */
    virtual enum class PackType getPackType() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?load\@DirectoryPackSource\@\@UEAA?AVPackSourceReport\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual class PackSourceReport
    load(class IPackManifestFactory&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTORYPACKSOURCE
    /**
     * @symbol ?forEachPack\@DirectoryPackSource\@\@UEAAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPack(class std::function<void(class Pack&)>); // NOLINT
    /**
     * @symbol ?forEachPackConst\@DirectoryPackSource\@\@UEBAXV?$function\@$$A6AXAEBVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPackConst(class std::function<void(class Pack const&)>) const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DirectoryPackSource(); // NOLINT
#endif
    /**
     * @symbol ??0DirectoryPackSource\@\@QEAA\@AEBVPath\@Core\@\@W4PackType\@\@W4PackOrigin\@\@_N\@Z
     */
    MCAPI DirectoryPackSource(class Core::Path const&, enum class PackType, enum class PackOrigin, bool); // NOLINT
    /**
     * @symbol
     * ?getPath\@DirectoryPackSource\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const& getPath() const; // NOLINT
    /**
     * @symbol ?removePack\@DirectoryPackSource\@\@QEAA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool removePack(class Core::Path const&); // NOLINT
    /**
     * @symbol ?checkAndRemoveIncompletePacks\@DirectoryPackSource\@\@SAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI static void checkAndRemoveIncompletePacks(class Core::Path const&); // NOLINT
};
