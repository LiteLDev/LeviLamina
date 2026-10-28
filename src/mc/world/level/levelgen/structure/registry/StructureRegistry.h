#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/level/levelgen/structure/registry/OnStructurePlacedToken.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace br::worldgen { class StructureInstance; }
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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<char[0]>>> mOnStructurePlacedNames;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(::Dimension&, ::br::worldgen::StructureInstance const&)>>>
        mOnStructurePlaced;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::std::string_view,
            ::br::worldgen::OnStructurePlacedToken,
            ::std::less<::std::string_view>,
            ::std::vector<::std::string_view>,
            ::std::vector<::br::worldgen::OnStructurePlacedToken>>>
        mOnStructurePlacedMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::br::worldgen::JigsawStructure const> get(::std::string_view key) const;

    MCAPI ::br::worldgen::OnStructurePlacedToken
    record(::std::string_view name, ::std::function<void(::Dimension&, ::br::worldgen::StructureInstance const&)>&& cb);

    MCAPI ::br::worldgen::OnStructurePlacedToken reserveOnPlaced(::std::string_view name);
    // NOLINTEND
};

} // namespace br::worldgen
