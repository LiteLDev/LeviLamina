/**
 * @file  PackSourceFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackSourceFactory.
 *
 */
class PackSourceFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSOURCEFACTORY
public:
    class PackSourceFactory& operator=(class PackSourceFactory const &) = delete;
    PackSourceFactory(class PackSourceFactory const &) = delete;
    PackSourceFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PackSourceFactory();
    /**
     * @vftbl  1
     * @symbol  ?createWorldTemplatePackSource\@PackSourceFactory\@\@UEAAAEAVWorldTemplatePackSource\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVWorldTemplateManager\@\@\@Bedrock\@\@\@gsl\@\@AEBVUUID\@mce\@\@W4PackType\@\@W4PackOrigin\@\@\@Z
     */
    virtual class WorldTemplatePackSource & createWorldTemplatePackSource(class gsl::not_null<class Bedrock::NonOwnerPointer<class WorldTemplateManager const>> const &, class mce::UUID const &, enum class PackType, enum class PackOrigin);
    /**
     * @vftbl  2
     * @symbol  ?getWorldTemplatePackSource\@PackSourceFactory\@\@UEBAPEAVWorldTemplatePackSource\@\@AEBVUUID\@mce\@\@W4PackType\@\@\@Z
     */
    virtual class WorldTemplatePackSource * getWorldTemplatePackSource(class mce::UUID const &, enum class PackType) const;
    /**
     * @vftbl  3
     * @symbol  ?createDirectoryPackSource\@PackSourceFactory\@\@UEAAAEAVDirectoryPackSource\@\@AEBVPath\@Core\@\@W4PackType\@\@W4PackOrigin\@\@_N\@Z
     */
    virtual class DirectoryPackSource & createDirectoryPackSource(class Core::Path const &, enum class PackType, enum class PackOrigin, bool);
    /**
     * @vftbl  4
     * @symbol  ?getDirectoryPackSource\@PackSourceFactory\@\@UEBAPEAVDirectoryPackSource\@\@AEBVPath\@Core\@\@W4PackType\@\@\@Z
     */
    virtual class DirectoryPackSource * getDirectoryPackSource(class Core::Path const &, enum class PackType) const;
    /**
     * @vftbl  5
     * @symbol  ?createInPackagePackSource\@PackSourceFactory\@\@UEAAAEAVInPackagePackSource\@\@W4PackType\@\@\@Z
     */
    virtual class InPackagePackSource & createInPackagePackSource(enum class PackType);
    /**
     * @vftbl  6
     * @symbol  ?getInPackagePackSource\@PackSourceFactory\@\@UEAAPEAVInPackagePackSource\@\@W4PackType\@\@\@Z
     */
    virtual class InPackagePackSource * getInPackagePackSource(enum class PackType);
    /**
     * @vftbl  7
     * @symbol  ?createWorldHistoryPackSource\@PackSourceFactory\@\@UEAAAEAVWorldHistoryPackSource\@\@AEBVPath\@Core\@\@W4PackType\@\@\@Z
     */
    virtual class WorldHistoryPackSource & createWorldHistoryPackSource(class Core::Path const &, enum class PackType);
    /**
     * @vftbl  8
     * @symbol  ?getWorldHistoryPackSource\@PackSourceFactory\@\@UEBAPEAVWorldHistoryPackSource\@\@AEBVPath\@Core\@\@W4PackType\@\@\@Z
     */
    virtual class WorldHistoryPackSource * getWorldHistoryPackSource(class Core::Path const &, enum class PackType) const;
    /**
     * @vftbl  9
     * @symbol  ?getDirectoryPackSourceContaining\@PackSourceFactory\@\@UEBAPEAVDirectoryPackSource\@\@AEBUPackIdVersion\@\@\@Z
     */
    virtual class DirectoryPackSource * getDirectoryPackSourceContaining(struct PackIdVersion const &) const;
    /**
     * @vftbl  10
     * @symbol  ?removeFromDirectoryPackSource\@PackSourceFactory\@\@UEAAXAEBVPath\@Core\@\@\@Z
     */
    virtual void removeFromDirectoryPackSource(class Core::Path const &);
    /**
     * @vftbl  11
     * @symbol  ?createDynamicPackagePackSource\@PackSourceFactory\@\@UEAAAEAVInPackagePackSource\@\@W4PackType\@\@\@Z
     */
    virtual class InPackagePackSource & createDynamicPackagePackSource(enum class PackType);
    /**
     * @vftbl  12
     * @symbol  ?getDynamicPackagePackSource\@PackSourceFactory\@\@UEAAPEAVInPackagePackSource\@\@W4PackType\@\@\@Z
     */
    virtual class InPackagePackSource * getDynamicPackagePackSource(enum class PackType);
    /**
     * @vftbl  13
     * @symbol  ?setDynamicPackagePacks\@PackSourceFactory\@\@UEAAXAEBV?$shared_ptr\@VIDynamicPackagePacks\@\@\@std\@\@\@Z
     */
    virtual void setDynamicPackagePacks(class std::shared_ptr<class IDynamicPackagePacks> const &);
    /**
     * @vftbl  14
     * @symbol  ?setDynamicPackageRoot\@PackSourceFactory\@\@UEAAXV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    virtual void setDynamicPackageRoot(class Core::PathBuffer<std::string>);
    /**
     * @vftbl  15
     * @symbol  __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol  __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @symbol  ?_Delete_this\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEAAX_N\@Z
     */
    virtual void _Delete_this(bool);
    /**
     * @vftbl  20
     * @symbol  ?_Get\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEBAPEBXXZ
     */
    virtual void const * _Get() const;
    /**
     * @symbol  ??0PackSourceFactory\@\@QEAA\@AEBV?$shared_ptr\@VIInPackagePacks\@\@\@std\@\@\@Z
     */
    MCAPI PackSourceFactory(class std::shared_ptr<class IInPackagePacks> const &);

};