#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureRegistry {
public:
    // prevent constructor by default
    StructureRegistry& operator=(StructureRegistry const&);
    StructureRegistry(StructureRegistry const&);
    StructureRegistry();

public:
    // NOLINTBEGIN
    // symbol:
    // ?get@StructureRegistry@worldgen@br@@QEBA?AV?$shared_ptr@$$CBUStructure@worldgen@br@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@5@@Z
    MCAPI std::shared_ptr<struct br::worldgen::Structure const> get(std::string_view) const;

    // symbol: ??1StructureRegistry@worldgen@br@@QEAA@XZ
    MCAPI ~StructureRegistry();

    // NOLINTEND
};

}; // namespace br::worldgen
