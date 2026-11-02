#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DoubleSaplingArchetype {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTree;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTreeWithBeehive;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mQuadrupleSaplingTree;
    // NOLINTEND

public:
    // prevent constructor by default
    DoubleSaplingArchetype(DoubleSaplingArchetype const&);
    DoubleSaplingArchetype();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_26_20::BlockDefinition::DoubleSaplingArchetype&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::DoubleSaplingArchetype const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_20::BlockDefinition::DoubleSaplingArchetype const&) const;

    MCNAPI ~DoubleSaplingArchetype();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
