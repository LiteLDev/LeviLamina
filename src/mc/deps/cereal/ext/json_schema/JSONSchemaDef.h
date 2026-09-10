#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ext/json_schema/JSONSchemaBody.h"
#include "mc/deps/cereal/ext/json_schema/JSONSchemaValidation.h"
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal::ext::internal {

struct JSONSchemaDef : public ::cereal::ext::internal::JSONSchemaBody,
                       public ::cereal::ext::internal::JSONSchemaValidation {
public:
    // JSONSchemaDef inner types define
    using MetaProperties = ::std::map<::std::string, ::cereal::DynamicValue>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                     mDescription;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::DynamicValue>>> mMetaProperties;
    ::ll::TypedStorage<
        8,
        24,
        ::std::optional<::std::map<::std::string, ::std::map<::std::string, ::cereal::DynamicValue>>>>
                                                                                    mEnumProperties;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                       mExtraUnderlyingType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                       mExtraControlValueType;
    ::ll::TypedStorage<8, 72, ::std::optional<::std::unordered_set<::std::string>>> mExtraSerializationTraits;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>>                                mExtraOrdinalIndex;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                       mExtraNonPublicProperty;
    ::ll::TypedStorage<8, 72, ::std::optional<::std::unordered_map<::std::string, ::std::vector<::std::string>>>>
        mExtraNonPublicEnumValues;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaDef();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JSONSchemaDef(::cereal::ext::internal::JSONSchemaDef const&);

    MCAPI ::cereal::ext::internal::JSONSchemaDef& operator=(::cereal::ext::internal::JSONSchemaDef&&);

    MCAPI ::cereal::ext::internal::JSONSchemaDef& operator=(::cereal::ext::internal::JSONSchemaDef const&);

    MCAPI ~JSONSchemaDef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ext::internal::JSONSchemaDef const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext::internal
