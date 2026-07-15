#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct JigsawStructure; }
// clang-format on

namespace br::worldgen {

class StructureRegistry {
public:
    // StructureRegistry inner types define
    using Map = ::entt::dense_map<::std::string, ::std::shared_ptr<::br::worldgen::JigsawStructure>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::std::string, ::std::shared_ptr<::br::worldgen::JigsawStructure>>>
        mStructures;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::br::worldgen::JigsawStructure const> get(::std::string_view key) const;
    // NOLINTEND
};

} // namespace br::worldgen
