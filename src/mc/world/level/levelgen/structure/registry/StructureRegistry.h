#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk6b4ac6;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureRegistry& operator=(StructureRegistry const&);
    StructureRegistry(StructureRegistry const&);
    StructureRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::entt::internal::dense_map_iterator<::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<
        ::entt::internal::dense_map_node<::std::string, ::std::shared_ptr<::br::worldgen::Structure>>>>>>
    begin() const;

    MCFOLD ::entt::internal::dense_map_iterator<::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<
        ::entt::internal::dense_map_node<::std::string, ::std::shared_ptr<::br::worldgen::Structure>>>>>>
    end() const;

    MCAPI ::std::shared_ptr<::br::worldgen::Structure const> get(::std::string_view key) const;

    MCAPI uint64 size() const;

    MCAPI ~StructureRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
