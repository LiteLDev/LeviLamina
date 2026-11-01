#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
struct DynamicPropertyDefinition;
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DynamicProperties {
public:
    // DynamicProperties inner types declare
    // clang-format off
    struct PropertyCollection;
    // clang-format on

    // DynamicProperties inner types define
    struct PropertyCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> mByteCount;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>>>
            mProperties;
        // NOLINTEND
    };

    using PropertyVariant = ::std::variant<double, float, bool, ::std::string, ::Vec3>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DynamicProperties::PropertyCollection>>
        mPropertyCollections;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearCollection(::std::string const& collectionName);

    MCNAPI void deserialize(::CompoundTag const& root, ::cereal::ReflectionCtx const& ctx);

    MCNAPI ::std::variant<double, float, bool, ::std::string, ::Vec3> const*
    getDynamicProperty(::std::string const& key, ::std::string const& collectionName) const;

    MCNAPI ::std::vector<::std::string> getDynamicPropertyIds(::std::string const& collectionName) const;

    MCNAPI uint64 getTotalByteCount(::std::string const& collectionName) const;

    MCNAPI bool removeDynamicProperty(::std::string const& key, ::std::string const& collectionName);

    MCNAPI ::std::unique_ptr<::CompoundTag> serialize(::cereal::ReflectionCtx const& ctx) const;

    MCNAPI void setDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value,
        ::std::string const&                                              collectionName
    );

    MCNAPI void updateCollectionName(::std::string const& from, ::std::string const& to);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::std::optional<::Scripting::ArgumentOutOfBoundsError> validateDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
    );

    MCNAPI static ::std::string validateDynamicProperty_V010(
        ::DynamicPropertyDefinition const*                                propertyDefinition,
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& STORAGE_TAG();
    // NOLINTEND
};
