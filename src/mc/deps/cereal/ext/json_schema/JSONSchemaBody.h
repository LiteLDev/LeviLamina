#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace cereal::ext::internal { struct JSONSchemaDef; }
// clang-format on

namespace cereal::ext::internal {

struct JSONSchemaBody {
public:
    // JSONSchemaBody inner types define
    using Properties = ::std::map<::std::string, ::cereal::ext::internal::JSONSchemaDef>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                            mType;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                      mDeprecated;
    ::ll::TypedStorage<8, 80, ::std::optional<::cereal::DynamicValue>>                   mDefaultValue;
    ::ll::TypedStorage<8, 80, ::std::optional<::cereal::DynamicValue>>                   mConstValue;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>             mRequired;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>             mEnum;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::std::string>>> mEnumDescription;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::ext::internal::JSONSchemaDef>>>
        mProperties;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::ext::internal::JSONSchemaDef>>>
                                                                                         mPatternProperties;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::ext::internal::JSONSchemaDef>> mAdditionalProperties;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::ext::internal::JSONSchemaDef>> mPropertyNames;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::ext::internal::JSONSchemaDef>> mItems;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::cereal::ext::internal::JSONSchemaDef>>> mOneOf;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                         mRef;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaBody();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JSONSchemaBody(::cereal::ext::internal::JSONSchemaBody const&);

    MCAPI ::cereal::ext::internal::JSONSchemaBody& operator=(::cereal::ext::internal::JSONSchemaBody&&);

    MCAPI ::cereal::ext::internal::JSONSchemaBody& operator=(::cereal::ext::internal::JSONSchemaBody const&);

    MCAPI ~JSONSchemaBody();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ext::internal::JSONSchemaBody const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext::internal
