#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace mce { class UUID; }
// clang-format on

class WorldTemplateManager {

public:
    // prevent constructor by default
    WorldTemplateManager& operator=(WorldTemplateManager const&) = delete;
    WorldTemplateManager(WorldTemplateManager const&)            = delete;
    WorldTemplateManager()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?findInstalledWorldTemplateByUUID\@WorldTemplateManager\@\@UEBAPEBUWorldTemplateInfo\@\@AEBV?$vector\@VUUID\@mce\@\@V?$allocator\@VUUID\@mce\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct WorldTemplateInfo const*
    findInstalledWorldTemplateByUUID(std::vector<class mce::UUID> const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDTEMPLATEMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorldTemplateManager(); // NOLINT
#endif
    /**
     * @symbol
     * ??0WorldTemplateManager\@\@QEAA\@AEAVPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@AEAVPackSourceFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VFilePathManager\@Core\@\@\@Bedrock\@\@\@3\@_N\@Z
     */
    MCAPI WorldTemplateManager(
        class PackManifestFactory&,
        class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&,
        class PackSourceFactory&,
        class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const&,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?findInstalledWorldTemplate\@WorldTemplateManager\@\@QEBAPEBUWorldTemplateInfo\@\@AEBUPackIdVersion\@\@\@Z
     */
    MCAPI struct WorldTemplateInfo const* findInstalledWorldTemplate(struct PackIdVersion const&) const; // NOLINT
    /**
     * @symbol
     * ?getWorldTemplatesPath\@WorldTemplateManager\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getWorldTemplatesPath() const; // NOLINT

    // private:
    /**
     * @symbol ?_initialize\@WorldTemplateManager\@\@AEAAXXZ
     */
    MCAPI void _initialize(); // NOLINT
    /**
     * @symbol ?_initializePackSources\@WorldTemplateManager\@\@AEAAXXZ
     */
    MCAPI void _initializePackSources(); // NOLINT
    /**
     * @symbol ?_onDiscoverWorldTemplate\@WorldTemplateManager\@\@AEAAXAEBVPack\@\@\@Z
     */
    MCAPI void _onDiscoverWorldTemplate(class Pack const&); // NOLINT

private:
};
