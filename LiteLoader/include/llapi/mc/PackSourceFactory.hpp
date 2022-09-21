/**
 * @file  MC/PackSourceFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~PackSourceFactory();
    /**
     * @vftbl  1
     * @symbol ?createWorldTemplatePackSource@PackSourceFactory@@UEAAAEAVWorldTemplatePackSource@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVWorldTemplateManager@@@Bedrock@@@gsl@@AEBVUUID@mce@@W4PackType@@W4PackOrigin@@@Z
     */
    virtual class WorldTemplatePackSource & createWorldTemplatePackSource(class gsl::not_null<class Bedrock::NonOwnerPointer<class WorldTemplateManager const>> const &, class mce::UUID const &, enum PackType, enum PackOrigin);
    /**
     * @hash   724078802
     * @vftbl  2
     * @symbol ?getWorldTemplatePackSource@PackSourceFactory@@UEBAPEAVWorldTemplatePackSource@@AEBVUUID@mce@@W4PackType@@@Z
     */
    virtual class WorldTemplatePackSource * getWorldTemplatePackSource(class mce::UUID const &, enum PackType) const;
    /**
     * @hash   -643769638
     * @vftbl  3
     * @symbol ?createDirectoryPackSource@PackSourceFactory@@UEAAAEAVDirectoryPackSource@@AEBVPath@Core@@W4PackType@@W4PackOrigin@@_N@Z
     */
    virtual class DirectoryPackSource & createDirectoryPackSource(class Core::Path const &, enum PackType, enum PackOrigin, bool);
    /**
     * @hash   385655908
     * @vftbl  4
     * @symbol ?getDirectoryPackSource@PackSourceFactory@@UEBAPEAVDirectoryPackSource@@AEBVPath@Core@@W4PackType@@@Z
     */
    virtual class DirectoryPackSource * getDirectoryPackSource(class Core::Path const &, enum PackType) const;
    /**
     * @hash   -1821774438
     * @vftbl  5
     * @symbol ?createInPackagePackSource@PackSourceFactory@@UEAAAEAVInPackagePackSource@@W4PackType@@@Z
     */
    virtual class InPackagePackSource & createInPackagePackSource(enum PackType);
    /**
     * @hash   170223544
     * @vftbl  6
     * @symbol ?getInPackagePackSource@PackSourceFactory@@UEAAPEAVInPackagePackSource@@W4PackType@@@Z
     */
    virtual class InPackagePackSource * getInPackagePackSource(enum PackType);
    /**
     * @hash   1663610611
     * @vftbl  7
     * @symbol ?createWorldHistoryPackSource@PackSourceFactory@@UEAAAEAVWorldHistoryPackSource@@AEBVPath@Core@@W4PackType@@@Z
     */
    virtual class WorldHistoryPackSource & createWorldHistoryPackSource(class Core::Path const &, enum PackType);
    /**
     * @hash   -1200462440
     * @vftbl  8
     * @symbol ?getWorldHistoryPackSource@PackSourceFactory@@UEBAPEAVWorldHistoryPackSource@@AEBVPath@Core@@W4PackType@@@Z
     */
    virtual class WorldHistoryPackSource * getWorldHistoryPackSource(class Core::Path const &, enum PackType) const;
    /**
     * @hash   -152216688
     * @vftbl  9
     * @symbol ?getDirectoryPackSourceContaining@PackSourceFactory@@UEBAPEAVDirectoryPackSource@@AEBUPackIdVersion@@@Z
     */
    virtual class DirectoryPackSource * getDirectoryPackSourceContaining(struct PackIdVersion const &) const;
    /**
     * @hash   -197945871
     * @vftbl  10
     * @symbol ?removeFromDirectoryPackSource@PackSourceFactory@@UEAAXAEBVPath@Core@@@Z
     */
    virtual void removeFromDirectoryPackSource(class Core::Path const &);
    /**
     * @hash   -1840758884
     * @vftbl  11
     * @symbol ?createDynamicPackagePackSource@PackSourceFactory@@UEAAAEAVInPackagePackSource@@W4PackType@@@Z
     */
    virtual class InPackagePackSource & createDynamicPackagePackSource(enum PackType);
    /**
     * @hash   837723958
     * @vftbl  12
     * @symbol ?getDynamicPackagePackSource@PackSourceFactory@@UEAAPEAVInPackagePackSource@@W4PackType@@@Z
     */
    virtual class InPackagePackSource * getDynamicPackagePackSource(enum PackType);
    /**
     * @hash   -1065519032
     * @vftbl  13
     * @symbol ?setDynamicPackagePacks@PackSourceFactory@@UEAAXAEBV?$shared_ptr@VIDynamicPackagePacks@@@std@@@Z
     */
    virtual void setDynamicPackagePacks(class std::shared_ptr<class IDynamicPackagePacks> const &);
    /**
     * @hash   1964173686
     * @vftbl  14
     * @symbol ?setDynamicPackageRoot@PackSourceFactory@@UEAAXV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     */
    virtual void setDynamicPackageRoot(class Core::PathBuffer<std::string>);
    /**
     * @hash   -379568684
     * @symbol ??0PackSourceFactory@@QEAA@AEBV?$shared_ptr@VIInPackagePacks@@@std@@@Z
     */
    MCAPI PackSourceFactory(class std::shared_ptr<class IInPackagePacks> const &);

};