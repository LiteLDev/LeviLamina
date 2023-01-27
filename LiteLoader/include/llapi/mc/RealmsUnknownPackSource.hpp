/**
 * @file  RealmsUnknownPackSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RealmsUnknownPackSource.
 *
 */
class RealmsUnknownPackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REALMSUNKNOWNPACKSOURCE
public:
    class RealmsUnknownPackSource& operator=(class RealmsUnknownPackSource const &) = delete;
    RealmsUnknownPackSource(class RealmsUnknownPackSource const &) = delete;
    RealmsUnknownPackSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RealmsUnknownPackSource();
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
     * @hash   -1052024356
     * @vftbl  3
     * @symbol  ?getPackOrigin\@RealmsUnknownPackSource\@\@UEBA?AW4PackOrigin\@\@XZ
     */
    virtual enum class PackOrigin getPackOrigin() const;
    /**
     * @hash   1877985948
     * @vftbl  4
     * @symbol  ?getPackType\@RealmsUnknownPackSource\@\@UEBA?AW4PackType\@\@XZ
     */
    virtual enum class PackType getPackType() const;
    /**
     * @hash   -1865417447
     * @vftbl  5
     * @symbol  ?load\@RealmsUnknownPackSource\@\@UEAA?AVPackSourceReport\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REALMSUNKNOWNPACKSOURCE
    /**
     * @hash   1790518194
     * @symbol  ?forEachPack\@RealmsUnknownPackSource\@\@UEAAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @hash   357607825
     * @symbol  ?forEachPackConst\@RealmsUnknownPackSource\@\@UEBAXV?$function\@$$A6AXAEBVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPackConst(class std::function<void (class Pack const &)>) const;
#endif
    /**
     * @hash   372010502
     * @symbol  ??0RealmsUnknownPackSource\@\@QEAA\@W4PackType\@\@W4PackOrigin\@\@\@Z
     */
    MCAPI RealmsUnknownPackSource(enum class PackType, enum class PackOrigin);

};