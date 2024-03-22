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
    // vIndex: 0, symbol:
    // ?getProperty@MetaTypePropertyReader@cereal@@UEBA?AUmeta_prop@entt@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual entt::meta_prop getProperty(std::string const&) const;

    // vIndex: 1, symbol: ??1MetaTypePropertyReader@cereal@@UEAA@XZ
    virtual ~MetaTypePropertyReader();

    // symbol: ??0MetaTypePropertyReader@cereal@@QEAA@AEBVmeta_type@entt@@@Z
    MCAPI explicit MetaTypePropertyReader(entt::meta_type const&);

    // NOLINTEND
};

}; // namespace cereal
