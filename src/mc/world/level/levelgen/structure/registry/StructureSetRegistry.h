#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct StructureSet; }
// clang-format on

namespace br::worldgen {

class StructureSetRegistry {
public:
    // StructureSetRegistry inner types define
    using Map = ::entt::dense_map<::std::string, ::std::shared_ptr<::br::worldgen::StructureSet>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::std::string, ::std::shared_ptr<::br::worldgen::StructureSet>>>
        mStructureSets;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void record(::std::string_view key, ::std::shared_ptr<::br::worldgen::StructureSet>&& set);
    // NOLINTEND
};

} // namespace br::worldgen
