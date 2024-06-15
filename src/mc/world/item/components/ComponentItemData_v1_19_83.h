#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class VersionRange; }
// clang-format on

struct ComponentItemData_v1_19_83 {
public:
    // prevent constructor by default
    ComponentItemData_v1_19_83& operator=(ComponentItemData_v1_19_83 const&);
    ComponentItemData_v1_19_83(ComponentItemData_v1_19_83 const&);
    ComponentItemData_v1_19_83();

public:
    // NOLINTBEGIN
    // symbol: ??1ComponentItemData_v1_19_83@@QEAA@XZ
    MCAPI ~ComponentItemData_v1_19_83();

    // symbol: ?PARSER_VERSION@ComponentItemData_v1_19_83@@2VSemVersion@@B
    MCAPI static class SemVersion const PARSER_VERSION;

    // symbol: ?SUPPORTED_VERSIONS@ComponentItemData_v1_19_83@@2VVersionRange@Puv@@B
    MCAPI static class Puv::VersionRange const SUPPORTED_VERSIONS;

    // NOLINTEND
};
