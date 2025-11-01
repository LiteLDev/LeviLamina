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
    MCNAPI bool _canMergeDefinitions(
        ::DynamicPropertiesDefinition const& other,
        ::std::string const&                 identifier,
        uint64                               sizeLimit,
        ::std::string&                       error
    ) const;

    MCNAPI ::std::optional<::DynamicPropertyDefinePropertyError>
    defineProperty(::std::string const& identifier, ::DynamicPropertyDefinition definition);

    MCNAPI ::DynamicPropertyDefinition const* tryGetPropertyDefinition(::std::string const& identifier) const;

    MCNAPI ::std::optional<::std::string>
    tryMergeDefinitions(::DynamicPropertiesDefinition const& other, ::std::string const& identifier, uint64 sizeLimit);

    MCNAPI ~DynamicPropertiesDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint64 const& ACTOR_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT();

    MCNAPI static uint64 const& IDENTIFIER_SIZE_LIMIT();

    MCNAPI static uint64 const& WORLD_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
