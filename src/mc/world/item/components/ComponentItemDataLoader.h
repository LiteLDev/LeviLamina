#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ComponentItemDataLoader {
public:
    // prevent constructor by default
    ComponentItemDataLoader& operator=(ComponentItemDataLoader const&);
    ComponentItemDataLoader(ComponentItemDataLoader const&);
    ComponentItemDataLoader();

public:
    // NOLINTBEGIN
    MCAPI class Puv::LoadResult<struct ComponentItemDataAll_Latest> load(class Json::Value const&) const;

    MCAPI ~ComponentItemDataLoader();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Puv::LoadResult<struct ComponentItemData_v1_20_80> _parseCereal(class Json::Value const&) const;

    MCAPI std::optional<struct LegacyEventItemComponentData> _parseEvents(class Json::Value const&) const;

    MCAPI std::pair<struct ComponentItemData_Legacy, bool> _parseLegacyComponents(class Json::Value) const;

    // NOLINTEND
};
