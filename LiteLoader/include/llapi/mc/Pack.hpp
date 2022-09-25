/**
 * @file  Pack.hpp
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
 * @brief MC class Pack.
 *
 */
class Pack {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACK
public:
    class Pack& operator=(class Pack const &) = delete;
    Pack(class Pack const &) = delete;
    Pack() = delete;
#endif

public:
    /**
     * @hash   889783586
     * @symbol ??0Pack@@QEAA@V?$unique_ptr@VPackManifest@@U?$default_delete@VPackManifest@@@std@@@std@@V?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@2@V?$unique_ptr@VSubpackInfoCollection@@U?$default_delete@VSubpackInfoCollection@@@std@@@2@V?$unique_ptr@VPackMetadata@@U?$default_delete@VPackMetadata@@@std@@@2@@Z
     */
    MCAPI Pack(std::unique_ptr<class PackManifest>, std::unique_ptr<class PackAccessStrategy>, std::unique_ptr<class SubpackInfoCollection>, std::unique_ptr<class PackMetadata>);
    /**
     * @hash   1971126513
     * @symbol ?getAccessStrategy@Pack@@QEAAPEAVPackAccessStrategy@@XZ
     */
    MCAPI class PackAccessStrategy * getAccessStrategy();
    /**
     * @hash   -2138861978
     * @symbol ?getManifest@Pack@@QEAAAEAVPackManifest@@XZ
     */
    MCAPI class PackManifest & getManifest();
    /**
     * @hash   -924200476
     * @symbol ?getManifest@Pack@@QEBAAEBVPackManifest@@XZ
     */
    MCAPI class PackManifest const & getManifest() const;
    /**
     * @hash   932923607
     * @symbol ?getManifestPtr@Pack@@QEAAPEAVPackManifest@@XZ
     */
    MCAPI class PackManifest * getManifestPtr();
    /**
     * @hash   2107485081
     * @symbol ?getSubpackInfoStack@Pack@@QEAAPEAVSubpackInfoCollection@@XZ
     */
    MCAPI class SubpackInfoCollection * getSubpackInfoStack();
    /**
     * @hash   336883340
     * @symbol ?move@Pack@@QEAAX$$QEAV1@@Z
     */
    MCAPI void move(class Pack &&);
    /**
     * @hash   -1563753629
     * @symbol ?notifyDeleted@Pack@@QEAAXXZ
     */
    MCAPI void notifyDeleted();
    /**
     * @hash   -919035197
     * @symbol ?notifyUpdated@Pack@@QEAAXXZ
     */
    MCAPI void notifyUpdated();
    /**
     * @hash   -1176169643
     * @symbol ?registerPackDeletedCallback@Pack@@QEAAXPEAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
     */
    MCAPI void registerPackDeletedCallback(void *, class std::function<void (class Pack &)>);
    /**
     * @hash   -681848731
     * @symbol ?registerPackUpdatedCallback@Pack@@QEAAXPEAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
     */
    MCAPI void registerPackUpdatedCallback(void *, class std::function<void (class Pack &)>);
    /**
     * @hash   -2070621801
     * @symbol ?unregisterPackDeletedCallback@Pack@@QEAAXPEAX@Z
     */
    MCAPI void unregisterPackDeletedCallback(void *);
    /**
     * @hash   934029939
     * @symbol ?unregisterPackUpdatedCallback@Pack@@QEAAXPEAX@Z
     */
    MCAPI void unregisterPackUpdatedCallback(void *);
    /**
     * @hash   552972779
     * @symbol ?createPack@Pack@@SA?AV?$unique_ptr@VPack@@U?$default_delete@VPack@@@std@@@std@@AEBVResourceLocation@@W4PackType@@W4PackOrigin@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@PEAVPackSourceReport@@@Z
     */
    MCAPI static std::unique_ptr<class Pack> createPack(class ResourceLocation const &, enum PackType, enum PackOrigin, class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &, class PackSourceReport *);
    /**
     * @hash   -60212824
     * @symbol ?createPackMetadata@Pack@@SA?AV?$unique_ptr@VPackMetadata@@U?$default_delete@VPackMetadata@@@std@@@std@@W4PackType@@AEAVPackManifest@@AEBVPackAccessStrategy@@AEAVPackReport@@@Z
     */
    MCAPI static std::unique_ptr<class PackMetadata> createPackMetadata(enum PackType, class PackManifest &, class PackAccessStrategy const &, class PackReport &);

//private:

private:
    /**
     * @hash   438055887
     * @symbol ?EDUCATION_METADATA_FILE@Pack@@0V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     */
    MCAPI static class Core::PathBuffer<std::string> const EDUCATION_METADATA_FILE;

};