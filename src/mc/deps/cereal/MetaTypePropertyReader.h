#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/PropertyReader.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class PropertyReader; }
// clang-format on

namespace cereal {

class MetaTypePropertyReader : public ::cereal::PropertyReader {
public:
    // prevent constructor by default
    MetaTypePropertyReader& operator=(MetaTypePropertyReader const&);
    MetaTypePropertyReader(MetaTypePropertyReader const&);
    MetaTypePropertyReader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual entt::meta_prop getProperty(std::string_view) const;

    // vIndex: 1
    virtual ~MetaTypePropertyReader();

    MCAPI explicit MetaTypePropertyReader(entt::meta_type const&);

    // NOLINTEND
};

}; // namespace cereal
