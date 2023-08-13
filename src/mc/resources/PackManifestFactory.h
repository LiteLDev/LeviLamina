#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/resources/interface/IPackManifestFactory.h"

class PackManifestFactory : public ::IPackManifestFactory {

public:
    // prevent constructor by default
    PackManifestFactory& operator=(PackManifestFactory const&) = delete;
    PackManifestFactory(PackManifestFactory const&)            = delete;
    PackManifestFactory()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?create\@PackManifestFactory\@\@UEAA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@AEAVPackAccessStrategy\@\@AEBVResourceLocation\@\@AEAVPackReport\@\@PEAVSubpackInfoCollection\@\@\@Z
     */
    virtual std::unique_ptr<class PackManifest>
    create(class PackAccessStrategy&, class ResourceLocation const&, class PackReport&, class SubpackInfoCollection*);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKMANIFESTFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PackManifestFactory();
#endif
    /**
     * @symbol ??0PackManifestFactory\@\@QEAA\@AEBVPackCapabilityRegistry\@\@AEAVIPackTelemetry\@\@\@Z
     */
    MCAPI PackManifestFactory(class PackCapabilityRegistry const&, class IPackTelemetry&);
    /**
     * @symbol
     * ?create\@PackManifestFactory\@\@QEAA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@AEAVPackAccessStrategy\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAVPackReport\@\@V23\@PEAVSubpackInfoCollection\@\@\@Z
     */
    MCAPI std::unique_ptr<class PackManifest>
    create(class PackAccessStrategy&, std::string const&, class PackReport&, std::unique_ptr<class PackManifest>, class SubpackInfoCollection*);
    /**
     * @symbol
     * ?contentKeyLookup\@PackManifestFactory\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::string contentKeyLookup(std::string const&);
    /**
     * @symbol
     * ?MANIFEST_LOG_PATH\@PackManifestFactory\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_LOG_PATH;
    /**
     * @symbol
     * ?MANIFEST_PACK_UUID_UPGRADE_SALT\@PackManifestFactory\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MANIFEST_PACK_UUID_UPGRADE_SALT;
    /**
     * @symbol
     * ?MANIFEST_PATH\@PackManifestFactory\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH;
    /**
     * @symbol
     * ?MANIFEST_PATH_OLD\@PackManifestFactory\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH_OLD;
    /**
     * @symbol
     * ?MANIFEST_PATH_OLD_BACKUP\@PackManifestFactory\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH_OLD_BACKUP;
    /**
     * @symbol ?REQUIRED_VANILLA_FOR_OLD_PACKS\@PackManifestFactory\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const REQUIRED_VANILLA_FOR_OLD_PACKS;
    /**
     * @symbol
     * ?mAlternateContentKeys\@PackManifestFactory\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV?$vector\@DV?$allocator\@D\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV?$vector\@DV?$allocator\@D\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::unordered_map<std::string, std::vector<char> const> mAlternateContentKeys;
    /**
     * @symbol
     * ?mContentKeys\@PackManifestFactory\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV?$vector\@DV?$allocator\@D\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV?$vector\@DV?$allocator\@D\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::unordered_map<std::string, std::vector<char> const> mContentKeys;
    // NOLINTEND
};
