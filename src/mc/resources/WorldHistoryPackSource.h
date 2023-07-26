#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class WorldHistoryPackSource {

public:
    // prevent constructor by default
    WorldHistoryPackSource& operator=(WorldHistoryPackSource const&) = delete;
    WorldHistoryPackSource(WorldHistoryPackSource const&)            = delete;
    WorldHistoryPackSource()                                         = delete;

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
     * @symbol ?getPackOrigin\@WorldHistoryPackSource\@\@UEBA?AW4PackOrigin\@\@XZ
     */
    virtual enum class PackOrigin getPackOrigin() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getPackType\@WorldHistoryPackSource\@\@UEBA?AW4PackType\@\@XZ
     */
    virtual enum class PackType getPackType() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?load\@WorldHistoryPackSource\@\@UEAA?AVPackSourceReport\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual class PackSourceReport
    load(class IPackManifestFactory&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDHISTORYPACKSOURCE
    /**
     * @symbol ?forEachPack\@WorldHistoryPackSource\@\@UEAAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPack(class std::function<void(class Pack&)>); // NOLINT
    /**
     * @symbol ?forEachPackConst\@WorldHistoryPackSource\@\@UEBAXV?$function\@$$A6AXAEBVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPackConst(class std::function<void(class Pack const&)>) const; // NOLINT
#endif

    // private:
    /**
     * @symbol ?_addPackFromHistoryPack\@WorldHistoryPackSource\@\@AEAAXAEBVWorldPackHistory\@\@\@Z
     */
    MCAPI void _addPackFromHistoryPack(class WorldPackHistory const&); // NOLINT
    /**
     * @symbol
     * ?_createPackFromHistoryPack\@WorldHistoryPackSource\@\@AEAA?AV?$unique_ptr\@VPack\@\@U?$default_delete\@VPack\@\@\@std\@\@\@std\@\@AEBVWorldPackHistory\@\@\@Z
     */
    MCAPI std::unique_ptr<class Pack> _createPackFromHistoryPack(class WorldPackHistory const&); // NOLINT
    /**
     * @symbol ?_readWorldHistoryFile\@WorldHistoryPackSource\@\@AEAA_NXZ
     */
    MCAPI bool _readWorldHistoryFile(); // NOLINT

private:
};
