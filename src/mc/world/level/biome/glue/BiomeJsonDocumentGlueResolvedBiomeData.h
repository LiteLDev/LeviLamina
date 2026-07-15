#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IBiomeComponentGlue;
struct IBiomeEnvironmentAttributeGlue;
// clang-format on

struct BiomeJsonDocumentGlueResolvedBiomeData {
public:
    // BiomeJsonDocumentGlueResolvedBiomeData inner types declare
    // clang-format off
    struct ResolvedComponent;
    struct ResolvedEnvironmentAttribute;
    // clang-format on

    // BiomeJsonDocumentGlueResolvedBiomeData inner types define
    struct ResolvedComponent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IBiomeComponentGlue>>> mComponentGlue;
        ::ll::TypedStorage<8, 64, ::entt::meta_any>                                          mJsonComponent;
        // NOLINTEND
    };

    struct ResolvedEnvironmentAttribute {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                                        mAttributeName;
        ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IBiomeEnvironmentAttributeGlue>>> mAttributeGlue;
        ::ll::TypedStorage<8, 64, ::entt::meta_any>                                                     mJsonAttribute;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeJsonDocumentGlueResolvedBiomeData::ResolvedComponent>>
        mResolvedComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeJsonDocumentGlueResolvedBiomeData::ResolvedEnvironmentAttribute>>
        mResolvedEnvironmentAttributes;
    // NOLINTEND
};
