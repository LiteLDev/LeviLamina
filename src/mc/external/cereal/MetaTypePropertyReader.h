#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/PropertyReader.h"

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
    virtual entt::meta_prop getProperty(std::string_view name) const;

    // vIndex: 1
    virtual ~MetaTypePropertyReader();

    MCAPI explicit MetaTypePropertyReader(entt::meta_type const& metaType);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI entt::meta_prop getProperty$(std::string_view name) const;

    // NOLINTEND
};

}; // namespace cereal
