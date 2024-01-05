#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VolumeDefinitionGroup {
public:
    // prevent constructor by default
    VolumeDefinitionGroup& operator=(VolumeDefinitionGroup const&);
    VolumeDefinitionGroup(VolumeDefinitionGroup const&);
    VolumeDefinitionGroup();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0VolumeDefinitionGroup@@QEAA@V?$not_null@V?$NonOwnerPointer@$$CBVVolumeComponentFactory@@@Bedrock@@@gsl@@@Z
    MCAPI explicit VolumeDefinitionGroup(
        Bedrock::NotNullNonOwnerPtr<class VolumeComponentFactory const> componentFactory
    );

    // symbol: ?loadDefinitions@VolumeDefinitionGroup@@QEAAXAEBVResourcePackManager@@_N@Z
    MCAPI void loadDefinitions(class ResourcePackManager const& resourcePackManager, bool isExperimentalEnabled);

    // symbol:
    // ?tryGetVolumeDefinition@VolumeDefinitionGroup@@QEBAPEBUVolumeDefinition@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct VolumeDefinition const* tryGetVolumeDefinition(std::string const& identifier) const;

    // symbol: ??1VolumeDefinitionGroup@@QEAA@XZ
    MCAPI ~VolumeDefinitionGroup();

    // symbol: ?bindVolumeDefinitions@VolumeDefinitionGroup@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindVolumeDefinitions(struct cereal::ReflectionCtx&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_parseAndRegisterDefinition@VolumeDefinitionGroup@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@0@Z
    MCAPI bool _parseAndRegisterDefinition(
        std::string const&      jsonData,
        class SemVersion const& engineVersion,
        std::string const&      filePath
    );

    // symbol:
    // ?_registerDefinition@VolumeDefinitionGroup@@AEAA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool _registerDefinition(
        rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        class SemVersion const& engineVersion,
        std::string const&      filePath
    );

    // NOLINTEND
};
