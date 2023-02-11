/**
 * @file  WorldHistoryPackSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldHistoryPackSource.
 *
 */
class WorldHistoryPackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDHISTORYPACKSOURCE
public:
    class WorldHistoryPackSource& operator=(class WorldHistoryPackSource const &) = delete;
    WorldHistoryPackSource(class WorldHistoryPackSource const &) = delete;
    WorldHistoryPackSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WorldHistoryPackSource();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   -1743549200
     * @vftbl  3
     * @symbol  ?getPackOrigin\@WorldHistoryPackSource\@\@UEBA?AW4PackOrigin\@\@XZ
     */
    virtual enum class PackOrigin getPackOrigin() const;
    /**
     * @hash   -533989504
     * @vftbl  4
     * @symbol  ?getPackType\@WorldHistoryPackSource\@\@UEBA?AW4PackType\@\@XZ
     */
    virtual enum class PackType getPackType() const;
    /**
     * @hash   1945011725
     * @vftbl  5
     * @symbol  ?load\@WorldHistoryPackSource\@\@UEAA?AVPackSourceReport\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDHISTORYPACKSOURCE
    /**
     * @hash   -1419497170
     * @symbol  ?forEachPack\@WorldHistoryPackSource\@\@UEAAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @hash   -1617110579
     * @symbol  ?forEachPackConst\@WorldHistoryPackSource\@\@UEBAXV?$function\@$$A6AXAEBVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPackConst(class std::function<void (class Pack const &)>) const;
#endif
    /**
     * @hash   -620878760
     * @symbol  ??0WorldHistoryPackSource\@\@QEAA\@AEBVPath\@Core\@\@W4PackType\@\@\@Z
     */
    MCAPI WorldHistoryPackSource(class Core::Path const &, enum class PackType);
    /**
     * @hash   -235113155
     * @symbol  ?getPathToWorld\@WorldHistoryPackSource\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const & getPathToWorld() const;
    /**
     * @hash   1126763475
     * @symbol  ?generateHistoryFilePath\@WorldHistoryPackSource\@\@SA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@W4PackType\@\@\@Z
     */
    MCAPI static class Core::PathBuffer<std::string> generateHistoryFilePath(class Core::Path const &, enum class PackType);

//private:
    /**
     * @hash   1431158162
     * @symbol  ?_addPackFromHistoryPack\@WorldHistoryPackSource\@\@AEAAXAEBVWorldPackHistory\@\@\@Z
     */
    MCAPI void _addPackFromHistoryPack(class WorldPackHistory const &);
    /**
     * @hash   677042480
     * @symbol  ?_createPackFromHistoryPack\@WorldHistoryPackSource\@\@AEAA?AV?$unique_ptr\@VPack\@\@U?$default_delete\@VPack\@\@\@std\@\@\@std\@\@AEBVWorldPackHistory\@\@\@Z
     */
    MCAPI std::unique_ptr<class Pack> _createPackFromHistoryPack(class WorldPackHistory const &);
    /**
     * @hash   1847678531
     * @symbol  ?_readWorldHistoryFile\@WorldHistoryPackSource\@\@AEAA_NXZ
     */
    MCAPI bool _readWorldHistoryFile();

private:

};