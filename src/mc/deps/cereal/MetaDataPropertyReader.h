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
    // vIndex: 0, symbol:
    // ?getProperty@MetaDataPropertyReader@cereal@@UEBA?AUmeta_prop@entt@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual entt::meta_prop getProperty(std::string_view) const;

    // vIndex: 1, symbol: __gen_??1MetaDataPropertyReader@cereal@@UEAA@XZ
    virtual ~MetaDataPropertyReader() = default;

    // symbol: ??0MetaDataPropertyReader@cereal@@QEAA@AEBUmeta_data@entt@@@Z
    MCAPI explicit MetaDataPropertyReader(entt::meta_data const&);

    // NOLINTEND
};

}; // namespace cereal
