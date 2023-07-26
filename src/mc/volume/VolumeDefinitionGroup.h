#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VolumeDefinitionGroup {

public:
    // prevent constructor by default
    VolumeDefinitionGroup& operator=(VolumeDefinitionGroup const&) = delete;
    VolumeDefinitionGroup(VolumeDefinitionGroup const&)            = delete;
    VolumeDefinitionGroup()                                        = delete;

public:
    /**
     * @symbol
     * ??0VolumeDefinitionGroup\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@$$CBVVolumeComponentFactory\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI VolumeDefinitionGroup(class gsl::not_null<
                                class Bedrock::NonOwnerPointer<class VolumeComponentFactory const>>); // NOLINT
    /**
     * @symbol ?loadDefinitions\@VolumeDefinitionGroup\@\@QEAAXAEBVResourcePackManager\@\@_N\@Z
     */
    MCAPI void loadDefinitions(class ResourcePackManager const&, bool); // NOLINT
    /**
     * @symbol
     * ?tryGetVolumeDefinition\@VolumeDefinitionGroup\@\@QEBAPEBUVolumeDefinition\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct VolumeDefinition const* tryGetVolumeDefinition(std::string const&) const; // NOLINT
    /**
     * @symbol ??1VolumeDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI ~VolumeDefinitionGroup(); // NOLINT
    /**
     * @symbol ?bindVolumeDefinitions\@VolumeDefinitionGroup\@\@SAXXZ
     */
    MCAPI static void bindVolumeDefinitions(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_parseAndRegisterDefinition\@VolumeDefinitionGroup\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@0\@Z
     */
    MCAPI bool _parseAndRegisterDefinition(std::string const&, class SemVersion const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_registerDefinition\@VolumeDefinitionGroup\@\@AEAA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBVSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool
    _registerDefinition(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&, class SemVersion const&, std::string const&); // NOLINT

private:
};
