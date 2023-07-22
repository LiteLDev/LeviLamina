/**
 * @file  PackManifestFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackManifestFactory.
 *
 */
class PackManifestFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKMANIFESTFACTORY
public:
    class PackManifestFactory& operator=(class PackManifestFactory const &) = delete;
    PackManifestFactory(class PackManifestFactory const &) = delete;
    PackManifestFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PackManifestFactory();
    /**
     * @vftbl  1
     * @symbol  ?create\@PackManifestFactory\@\@UEAA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@AEAVPackAccessStrategy\@\@AEBVResourceLocation\@\@AEAVPackReport\@\@PEAVSubpackInfoCollection\@\@\@Z
     */
    virtual std::unique_ptr<class PackManifest> create(class PackAccessStrategy &, class ResourceLocation const &, class PackReport &, class SubpackInfoCollection *);
    /**
     * @symbol  ??0PackManifestFactory\@\@QEAA\@AEBVPackCapabilityRegistry\@\@AEAVIPackTelemetry\@\@\@Z
     */
    MCAPI PackManifestFactory(class PackCapabilityRegistry const &, class IPackTelemetry &);
    /**
     * @symbol  ?create\@PackManifestFactory\@\@QEAA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@AEAVPackAccessStrategy\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAVPackReport\@\@V23\@PEAVSubpackInfoCollection\@\@\@Z
     */
    MCAPI std::unique_ptr<class PackManifest> create(class PackAccessStrategy &, std::string const &, class PackReport &, std::unique_ptr<class PackManifest>, class SubpackInfoCollection *);
    /**
     * @symbol  ?MANIFEST_LOG_PATH\@PackManifestFactory\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_LOG_PATH;
    /**
     * @symbol  ?MANIFEST_PACK_UUID_UPGRADE_SALT\@PackManifestFactory\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MANIFEST_PACK_UUID_UPGRADE_SALT;
    /**
     * @symbol  ?MANIFEST_PATH\@PackManifestFactory\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH;
    /**
     * @symbol  ?MANIFEST_PATH_OLD\@PackManifestFactory\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH_OLD;
    /**
     * @symbol  ?MANIFEST_PATH_OLD_BACKUP\@PackManifestFactory\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH_OLD_BACKUP;
    /**
     * @symbol  ?REQUIRED_VANILLA_FOR_OLD_PACKS\@PackManifestFactory\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const REQUIRED_VANILLA_FOR_OLD_PACKS;
    /**
     * @symbol  ?contentKeyLookup\@PackManifestFactory\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::string contentKeyLookup(std::string const &);
    /**
     * @symbol  ?mAlternateContentKeys\@PackManifestFactory\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV?$vector\@DV?$allocator\@D\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV?$vector\@DV?$allocator\@D\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<std::string, std::vector<char> const, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::vector<char> const>>> mAlternateContentKeys;
    /**
     * @symbol  ?mContentKeys\@PackManifestFactory\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV?$vector\@DV?$allocator\@D\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV?$vector\@DV?$allocator\@D\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<std::string, std::vector<char> const, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::vector<char> const>>> mContentKeys;

};