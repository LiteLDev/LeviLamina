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
    ::ll::UntypedStorage<8, 32> mUnkdb28a7;
    ::ll::UntypedStorage<8, 24> mUnk305a7f;
    ::ll::UntypedStorage<8, 32> mUnk23c3f6;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplatePool& operator=(StructureTemplatePool const&);
    StructureTemplatePool(StructureTemplatePool const&);
    StructureTemplatePool();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureTemplatePool(
        ::std::string                                                         name,
        ::std::string                                                         fallback,
        ::std::vector<::std::pair<::StructurePoolElement const*, int>> const& templates
    );

    MCAPI StructureTemplatePool(
        ::StructureTemplateRegistrationContext                           context,
        ::std::string_view                                               name,
        ::std::string_view                                               fallback,
        ::Projection                                                     projection,
        ::std::initializer_list<::WeightedStructureTemplateRegistration> pieces
    );

    MCFOLD ::std::string const& getFallback() const;

    MCAPI ::StructurePoolElement const* getRandomTemplate(::Random& random) const;

    MCAPI ::std::vector<uint64> getShuffledTemplateIndexes(::Random& random) const;

    MCAPI ::StructurePoolElement const* getTemplate(uint64 index) const;

    MCAPI bool isValid() const;

    MCAPI ~StructureTemplatePool();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::StructureTemplatePool> create(
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
    MCAPI void* $ctor(
        ::std::string                                                         name,
        ::std::string                                                         fallback,
        ::std::vector<::std::pair<::StructurePoolElement const*, int>> const& templates
    );

    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND
};
