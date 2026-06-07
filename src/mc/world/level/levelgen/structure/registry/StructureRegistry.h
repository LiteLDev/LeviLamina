#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureRegistry {
public:
    // StructureRegistry inner types define
    using Map = ::entt::dense_map<::std::string, ::std::shared_ptr<::br::worldgen::Structure>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::std::string, ::std::shared_ptr<::br::worldgen::Structure>>>
        mStructures;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::entt::internal::dense_map_iterator<
        ::entt::internal::dense_map_node<::std::string, ::std::shared_ptr<::br::worldgen::Structure>> const*>
    begin() const;

    MCFOLD ::entt::internal::dense_map_iterator<
        ::entt::internal::dense_map_node<::std::string, ::std::shared_ptr<::br::worldgen::Structure>>*>
    begin();

    MCFOLD ::entt::internal::dense_map_iterator<
        ::entt::internal::dense_map_node<::std::string, ::std::shared_ptr<::br::worldgen::Structure>> const*>
    end() const;

    MCFOLD ::entt::internal::dense_map_iterator<
        ::entt::internal::dense_map_node<::std::string, ::std::shared_ptr<::br::worldgen::Structure>>*>
    end();

    MCAPI ::std::shared_ptr<::br::worldgen::Structure const> get(::std::string_view key) const;

    MCFOLD uint64 size() const;

    MCAPI ~StructureRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
