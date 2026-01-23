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
    MCNAPI void add(::std::shared_ptr<::IDefinitionInstance> const& definition);

    MCNAPI void combine(::DefinitionInstanceGroup const& other);

    MCNAPI ::DefinitionInstanceGroup& operator=(::DefinitionInstanceGroup&&);

    MCNAPI void remove(::std::shared_ptr<::IDefinitionInstance> const& definition);

    MCNAPI ~DefinitionInstanceGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
