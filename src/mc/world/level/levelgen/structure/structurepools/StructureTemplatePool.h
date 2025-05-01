#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/Projection.h"

// auto generated forward declare list
// clang-format off
class Random;
class StructurePoolElement;
struct StructureTemplateRegistrationContext;
struct WeightedStructureTemplateRegistration;
// clang-format on

class StructureTemplatePool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::StructurePoolElement const*>> mTemplates;
    ::ll::TypedStorage<8, 32, ::std::string>                                mFallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureTemplatePool(
        ::std::string                                                         name,
        ::std::string                                                         fallback,
        ::std::vector<::std::pair<::StructurePoolElement const*, int>> const& templates
    );

    MCNAPI StructureTemplatePool(
        ::StructureTemplateRegistrationContext                           context,
        ::std::string_view                                               name,
        ::std::string_view                                               fallback,
        ::Projection                                                     projection,
        ::std::initializer_list<::WeightedStructureTemplateRegistration> pieces
    );

    MCNAPI ::std::vector<uint64> getShuffledTemplateIndexes(::Random& random) const;

    MCNAPI ~StructureTemplatePool();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::StructureTemplatePool> create(
        ::StructureTemplateRegistrationContext                           context,
        ::std::string_view                                               name,
        ::std::string_view                                               fallback,
        ::std::initializer_list<::WeightedStructureTemplateRegistration> pieces,
        ::Projection                                                     projection
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string                                                         name,
        ::std::string                                                         fallback,
        ::std::vector<::std::pair<::StructurePoolElement const*, int>> const& templates
    );

    MCNAPI void* $ctor(
        ::StructureTemplateRegistrationContext                           context,
        ::std::string_view                                               name,
        ::std::string_view                                               fallback,
        ::Projection                                                     projection,
        ::std::initializer_list<::WeightedStructureTemplateRegistration> pieces
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
