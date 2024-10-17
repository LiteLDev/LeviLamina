#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

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
    MCAPI explicit VolumeDefinitionGroup(
        Bedrock::NotNullNonOwnerPtr<class VolumeComponentFactory const> componentFactory
    );

    MCAPI void loadDefinitions(class ResourcePackManager const& resourcePackManager, bool isExperimentalEnabled);

    MCAPI struct VolumeDefinition const* tryGetVolumeDefinition(std::string const& identifier) const;

    MCAPI ~VolumeDefinitionGroup();

    MCAPI static void bindVolumeDefinitions(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _parseAndRegisterDefinition(
        std::string const&      jsonData,
        class SemVersion const& engineVersion,
        std::string const&      filePath
    );

    MCAPI bool _registerDefinition(
        rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>& doc,
        class SemVersion const&       engineVersion,
        std::string const&            filePath
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(Bedrock::NotNullNonOwnerPtr<class VolumeComponentFactory const> componentFactory);

    MCAPI void dtor$();

    // NOLINTEND
};
