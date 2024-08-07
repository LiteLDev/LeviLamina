#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/PropertyReader.h"

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
    virtual entt::meta_prop getProperty(std::string_view) const;

    // vIndex: 1
    virtual ~MetaDataPropertyReader() = default;

    MCAPI explicit MetaDataPropertyReader(entt::meta_data const&);

    // NOLINTEND
};

}; // namespace cereal
