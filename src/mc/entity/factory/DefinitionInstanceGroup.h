#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDefinitionInstance;
// clang-format on

class DefinitionInstanceGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk4e28b4;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionInstanceGroup& operator=(DefinitionInstanceGroup const&);
    DefinitionInstanceGroup(DefinitionInstanceGroup const&);
    DefinitionInstanceGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void add(::std::shared_ptr<::IDefinitionInstance> const& definition);

    MCAPI void clear();

    MCAPI void combine(::DefinitionInstanceGroup const& other);

    MCAPI bool contains(::DefinitionInstanceGroup const& other) const;

    MCAPI bool overlaps(::DefinitionInstanceGroup const& other) const;

    MCAPI void remove(::std::shared_ptr<::IDefinitionInstance> const& definition);

    MCAPI void subtract(::DefinitionInstanceGroup const& other);

    MCAPI ~DefinitionInstanceGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
