#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct SaplingArchetype {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTree;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTreeWithBeehive;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mQuadrupleSaplingTree;
    // NOLINTEND

public:
    // prevent constructor by default
    SaplingArchetype(SaplingArchetype const&);
    SaplingArchetype();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_26_20::BlockDefinition::SaplingArchetype&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::SaplingArchetype const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_20::BlockDefinition::SaplingArchetype const&) const;

    MCNAPI ~SaplingArchetype();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
