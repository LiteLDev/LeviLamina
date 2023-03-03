/**
 * @file  WorldTemplateManager.hpp
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
 * @brief MC class WorldTemplateManager.
 *
 */
class WorldTemplateManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEMANAGER
public:
    class WorldTemplateManager& operator=(class WorldTemplateManager const &) = delete;
    WorldTemplateManager(class WorldTemplateManager const &) = delete;
    WorldTemplateManager() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WorldTemplateManager();
    /**
     * @vftbl  1
     * @symbol  ?findInstalledWorldTemplateByUUID\@WorldTemplateManager\@\@UEBAPEBUWorldTemplateInfo\@\@AEBV?$vector\@VUUID\@mce\@\@V?$allocator\@VUUID\@mce\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct WorldTemplateInfo const * findInstalledWorldTemplateByUUID(std::vector<class mce::UUID> const &) const;
    /**
     * @symbol  ??0WorldTemplateManager\@\@QEAA\@AEAVPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@AEAVPackSourceFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VFilePathManager\@Core\@\@\@Bedrock\@\@\@3\@_N\@Z
     */
    MCAPI WorldTemplateManager(class PackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &, class PackSourceFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, bool);
    /**
     * @symbol  ?findInstalledWorldTemplate\@WorldTemplateManager\@\@QEBAPEBUWorldTemplateInfo\@\@AEBUPackIdVersion\@\@\@Z
     */
    MCAPI struct WorldTemplateInfo const * findInstalledWorldTemplate(struct PackIdVersion const &) const;
    /**
     * @symbol  ?getWorldTemplatesPath\@WorldTemplateManager\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getWorldTemplatesPath() const;

//private:
    /**
     * @symbol  ?_initialize\@WorldTemplateManager\@\@AEAAXXZ
     */
    MCAPI void _initialize();
    /**
     * @symbol  ?_initializePackSources\@WorldTemplateManager\@\@AEAAXXZ
     */
    MCAPI void _initializePackSources();
    /**
     * @symbol  ?_onDiscoverWorldTemplate\@WorldTemplateManager\@\@AEAAXAEBVPack\@\@\@Z
     */
    MCAPI void _onDiscoverWorldTemplate(class Pack const &);

private:

};