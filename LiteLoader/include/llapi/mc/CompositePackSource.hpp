/**
 * @file  MC/CompositePackSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompositePackSource.
 *
 */
class CompositePackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSITEPACKSOURCE
public:
    class CompositePackSource& operator=(class CompositePackSource const &) = delete;
    CompositePackSource(class CompositePackSource const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CompositePackSource();
    /**
     * @hash   189180338
     * @vftbl  1
     * @symbol ?forEachPackConst@CompositePackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
     */
    virtual void forEachPackConst(class std::function<void (class Pack const &)>) const;
    /**
     * @hash   -1195725469
     * @vftbl  2
     * @symbol ?forEachPack@CompositePackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
     */
    virtual void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   452280632
     * @vftbl  5
     * @symbol ?load@CompositePackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
    /**
     * @hash   -455847433
     * @symbol ??0CompositePackSource@@QEAA@XZ
     */
    MCAPI CompositePackSource();
    /**
     * @hash   -1852568152
     * @symbol ??0CompositePackSource@@QEAA@$$QEAV?$vector@PEAVPackSource@@V?$allocator@PEAVPackSource@@@std@@@std@@@Z
     */
    MCAPI CompositePackSource(std::vector<class PackSource *> &&);
    /**
     * @hash   -1223223243
     * @symbol ?addPackSource@CompositePackSource@@QEAAXPEAVPackSource@@@Z
     */
    MCAPI void addPackSource(class PackSource *);
    /**
     * @hash   -2077782193
     * @symbol ?clear@CompositePackSource@@QEAAXXZ
     */
    MCAPI void clear();

};