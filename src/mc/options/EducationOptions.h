#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/ServiceReference.h"

class EducationOptions {
public:
    // prevent constructor by default
    EducationOptions& operator=(EducationOptions const&);
    EducationOptions(EducationOptions const&);
    EducationOptions();

public:
    // NOLINTBEGIN
    MCVAPI void onActiveResourcePacksChanged(class ResourcePackManager& manager);

    MCVAPI ~EducationOptions();

    MCAPI explicit EducationOptions(class ResourcePackManager* packMan);

    MCAPI void init(class LevelData const& levelData);

    MCAPI static bool isBaseCodeBuilderEnabled();

    MCAPI static bool isChemistryEnabled();

    MCAPI static bool isCodeBuilderEnabled();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class ServiceReference<class EducationOptions> _getCurrentOptions();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForResourcePackListener();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void onActiveResourcePacksChanged$(class ResourcePackManager& manager);

    MCAPI static class EducationOptions& DEFAULT_OPTION();

    // NOLINTEND
};
