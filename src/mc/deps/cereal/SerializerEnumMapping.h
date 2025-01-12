#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class SerializerEnumMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka0608a;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializerEnumMapping& operator=(SerializerEnumMapping const&);
    SerializerEnumMapping();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SerializerEnumMapping(::cereal::SerializerEnumMapping const&);

    MCAPI ::std::optional<::std::string> lookup(int64 key) const;

    MCAPI ::std::optional<int64> lookup(::std::string_view key) const;

    MCAPI ::entt::iterable_adaptor<
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::pair<::std::string, int64>>>>,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::pair<::std::string, int64>>>>>
    mapping() const;

    MCAPI ~SerializerEnumMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::SerializerEnumMapping const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace cereal
