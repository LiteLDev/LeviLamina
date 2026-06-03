#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/ConstraintDescription.h"
#include "mc/deps/cereal/schema/ReflectedType.h"
#include "mc/deps/cereal/schema/SchemaInfo.h"
#include "mc/deps/cereal/schema/SerializationTraits.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct EnumValue; }
namespace cereal::internal { struct Member; }
// clang-format on

namespace cereal {

struct SchemaDescription : public ::cereal::internal::SchemaInfo {
public:
    // SchemaDescription inner types define
    using CerealProperties = ::std::map<::std::string, ::cereal::DynamicValue>;

    using ConstraintDescription = ::cereal::internal::ConstraintDescription;

    using EnumValue = ::cereal::internal::EnumValue;

    using Member = ::cereal::internal::Member;

    using ReflectedType = ::cereal::internal::ReflectedType;

    using SchemaInfo = ::cereal::internal::SchemaInfo;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 456, ::std::optional<::cereal::internal::ConstraintDescription>>            mConstraint;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::cereal::internal::EnumValue>>>          mEnumValues;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::cereal::SchemaDescription>>>            mParents;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::cereal::SchemaDescription>>>            mSetters;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::internal::Member>>> mMembers;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::internal::Member>>> mPatternMembers;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::SchemaDescription>>                         mValueType;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::SchemaDescription>>                         mKeyType;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::SchemaDescription>>                         mMappedType;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::DynamicValue>>>     mCerealProperties;
    ::ll::TypedStorage<4, 8, ::std::optional<::cereal::internal::ReflectedType>>                      mUnderlyingType;
    ::ll::TypedStorage<4, 8, ::std::optional<::cereal::internal::ReflectedType>>                      mControlValueType;
    ::ll::TypedStorage<1, 2, ::std::optional<::cereal::SerializationTraits>> mSerializationTraits;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>>                         mOrdinalIndex;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mNonPublicFlag;
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SchemaDescription(::cereal::SchemaDescription&&);

    MCAPI SchemaDescription(::cereal::SchemaDescription const&);

    MCAPI ::cereal::SchemaDescription& operator=(::cereal::SchemaDescription&&);

    MCAPI ::cereal::SchemaDescription& operator=(::cereal::SchemaDescription const&);

    MCAPI ~SchemaDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::SchemaDescription&&);

    MCAPI void* $ctor(::cereal::SchemaDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
