#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IBiomeComponentGlue;
// clang-format on

struct BiomeJsonDocumentGlueResolvedBiomeData {
public:
    // BiomeJsonDocumentGlueResolvedBiomeData inner types declare
    // clang-format off
    struct ResolvedComponent;
    // clang-format on

    // BiomeJsonDocumentGlueResolvedBiomeData inner types define
    struct ResolvedComponent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IBiomeComponentGlue>>> mComponentGlue;
        ::ll::TypedStorage<8, 64, ::entt::meta_any>                                          mJsonComponent;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ResolvedComponent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeJsonDocumentGlueResolvedBiomeData::ResolvedComponent>>
        mResolvedComponents;
    // NOLINTEND
};
