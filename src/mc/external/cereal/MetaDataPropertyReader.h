#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/PropertyReader.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class PropertyReader; }
// clang-format on

namespace cereal {

class MetaDataPropertyReader : public ::cereal::PropertyReader {
public:
    // prevent constructor by default
    MetaDataPropertyReader& operator=(MetaDataPropertyReader const&);
    MetaDataPropertyReader(MetaDataPropertyReader const&);
    MetaDataPropertyReader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual entt::meta_prop getProperty(std::string_view name) const;

    // vIndex: 1
    virtual ~MetaDataPropertyReader() = default;

    MCAPI explicit MetaDataPropertyReader(entt::meta_data const& metaData);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(entt::meta_data const& metaData);

    MCAPI entt::meta_prop getProperty$(std::string_view name) const;

    // NOLINTEND
};

}; // namespace cereal
