#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/persistence/DynamicPropertyDefinePropertyError.h"

// auto generated forward declare list
// clang-format off
struct DynamicPropertyDefinition;
// clang-format on

class DynamicPropertiesDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk645c3d;
    ::ll::UntypedStorage<8, 8>  mUnk1a8ad5;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicPropertiesDefinition& operator=(DynamicPropertiesDefinition const&);
    DynamicPropertiesDefinition(DynamicPropertiesDefinition const&);
    DynamicPropertiesDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canMergeDefinitions(
        ::DynamicPropertiesDefinition const& other,
        ::std::string const&                 identifier,
        uint64                               sizeLimit,
        ::std::string&                       error
    ) const;

    MCAPI ::std::optional<::DynamicPropertyDefinePropertyError>
    defineProperty(::std::string const& identifier, ::DynamicPropertyDefinition definition);

    MCAPI ::DynamicPropertyDefinition const* tryGetPropertyDefinition(::std::string const& identifier) const;

    MCAPI ::std::optional<::std::string>
    tryMergeDefinitions(::DynamicPropertiesDefinition const& other, ::std::string const& identifier, uint64 sizeLimit);

    MCAPI ~DynamicPropertiesDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& ACTOR_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT();

    MCAPI static uint64 const& IDENTIFIER_SIZE_LIMIT();

    MCAPI static uint64 const& WORLD_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
