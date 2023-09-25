/**
 * @file  unity_9bb0c8f2be65bb8d69379f6e5be416a7.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace unity_9bb0c8f2be65bb8d69379f6e5be416a7 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?parseBaseGameVersionRequired\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YAXAEBVValue\@Json\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVPackManifest\@\@AEAVPackReport\@\@W4PackManifestFormat\@\@\@Z
     */
    MCAPI void parseBaseGameVersionRequired(class Json::Value const &, std::vector<std::string>, class PackManifest &, class PackReport &, enum class PackManifestFormat);
    /**
     * @symbol ?parseCapabilities\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YAXAEBVPackCapabilityRegistry\@\@AEBVValue\@Json\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVPackManifest\@\@AEAVPackReport\@\@_N\@Z
     */
    MCAPI void parseCapabilities(class PackCapabilityRegistry const &, class Json::Value const &, std::vector<std::string>, class PackManifest &, class PackReport &, bool);
    /**
     * @symbol ?parseDependencies\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YAXAEBVValue\@Json\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVPackManifest\@\@AEAVPackReport\@\@_N4\@Z
     */
    MCAPI void parseDependencies(class Json::Value const &, std::vector<std::string>, class PackManifest &, class PackReport &, bool, bool);
    /**
     * @symbol ?parseHasEducationMetadata\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YAXAEBVValue\@Json\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVPackManifest\@\@AEAVPackReport\@\@_N\@Z
     */
    MCAPI void parseHasEducationMetadata(class Json::Value const &, std::vector<std::string> &, class PackManifest &, class PackReport &, bool);
    /**
     * @symbol ?parseHeader\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YA?AVValue\@Json\@\@AEBV23\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVPackManifest\@\@AEAVPackReport\@\@_N4AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@5\@5W4PackManifestFormat\@\@\@Z
     */
    MCAPI class Json::Value parseHeader(class Json::Value const &, std::vector<std::string>, class PackManifest &, class PackReport &, bool, bool, std::string const &, std::string const &, enum class PackManifestFormat);
    /**
     * @symbol ?parseLegacyModuleDependencies\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YAXAEBVValue\@Json\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVPackManifest\@\@AEAVPackReport\@\@_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@5\@\@Z
     */
    MCAPI void parseLegacyModuleDependencies(class Json::Value const &, std::vector<std::string>, class PackManifest &, class PackReport &, bool, std::string const &);
    /**
     * @symbol ?parseManifestSyntax\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YA?AW4PackManifestFormat\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@Json\@\@AEAVPackReport\@\@_N\@Z
     */
    MCAPI enum class PackManifestFormat parseManifestSyntax(std::string const &, class Json::Value &, class PackReport &, bool);
    /**
     * @symbol ?parseMetadata\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YAXAEBVValue\@Json\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVPackManifest\@\@AEAVPackReport\@\@_N\@Z
     */
    MCAPI void parseMetadata(class Json::Value const &, std::vector<std::string> &, class PackManifest &, class PackReport &, bool);
    /**
     * @symbol ?parseModules\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YAXAEBVValue\@Json\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVPackManifest\@\@AEAVPackReport\@\@_N4\@Z
     */
    MCAPI void parseModules(class Json::Value const &, std::vector<std::string>, class PackManifest &, class PackReport &, bool, bool);
    /**
     * @symbol ?parseOptionLockedStateRequired\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YAXAEBVValue\@Json\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVPackManifest\@\@AEAVPackReport\@\@W4PackManifestFormat\@\@\@Z
     */
    MCAPI void parseOptionLockedStateRequired(class Json::Value const &, std::vector<std::string>, class PackManifest &, class PackReport &, enum class PackManifestFormat);
    /**
     * @symbol ?parseSettings\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YAXAEBVValue\@Json\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVPackManifest\@\@AEAVPackReport\@\@\@Z
     */
    MCAPI void parseSettings(class Json::Value const &, std::vector<std::string>, class PackManifest &, class PackReport &);
    /**
     * @symbol ?parseSubpacks\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YAXAEBVValue\@Json\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVSubpackInfoCollection\@\@AEAVPackReport\@\@\@Z
     */
    MCAPI void parseSubpacks(class Json::Value const &, std::vector<std::string>, class SubpackInfoCollection &, class PackReport &);
    /**
     * @symbol ?readEngineVersion\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YA?AVSemVersion\@\@AEBVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@AEAVPackReport\@\@W4PackManifestFormat\@\@W4PackType\@\@\@Z
     */
    MCAPI class SemVersion readEngineVersion(class Json::Value const &, std::string const &, std::vector<std::string> &, class PackReport &, enum class PackManifestFormat, enum class PackType);
    /**
     * @symbol ?readRequiredBaseGameVersion\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YA?AVSemVersion\@\@AEBVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@AEAVPackReport\@\@\@Z
     */
    MCAPI class SemVersion readRequiredBaseGameVersion(class Json::Value const &, std::string const &, std::vector<std::string> &, class PackReport &);
    /**
     * @symbol ?readUUIDAndReport\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YA?AVUUID\@mce\@\@AEBVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@7\@AEAVPackReport\@\@_N\@Z
     */
    MCAPI class mce::UUID readUUIDAndReport(class Json::Value const &, std::string const &, std::string const &, std::vector<std::string> &, class PackReport &, bool);
    /**
     * @symbol ?readVersionAndReport\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YA?AVSemVersion\@\@AEBVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@AEAVPackReport\@\@_N4\@Z
     */
    MCAPI class SemVersion readVersionAndReport(class Json::Value const &, std::string const &, std::vector<std::string> &, class PackReport &, bool, bool);
    /**
     * @symbol ?upgradeToWorldTemplateManifest\@unity_9bb0c8f2be65bb8d69379f6e5be416a7\@\@YA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@AEBVPackAccessStrategy\@\@$$QEAVPackManifest\@\@\@Z
     */
    MCAPI std::unique_ptr<class PackManifest> upgradeToWorldTemplateManifest(class PackAccessStrategy const &, class PackManifest &&);

};