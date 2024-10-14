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
    MCAPI ~ComponentItemData_v1_19_83();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    MCAPI static class SemVersion const& PARSER_VERSION();

    MCAPI static class Puv::VersionRange const& SUPPORTED_VERSIONS();

    // NOLINTEND
};
