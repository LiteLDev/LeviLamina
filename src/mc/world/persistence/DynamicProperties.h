#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Vec3;
struct DynamicPropertyDefinition;
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
        ::ll::UntypedStorage<8, 8>  mUnkd25089;
        ::ll::UntypedStorage<8, 64> mUnk531965;
        // NOLINTEND

    public:
        // prevent constructor by default
        PropertyCollection& operator=(PropertyCollection const&);
        PropertyCollection(PropertyCollection const&);
        PropertyCollection();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::DynamicProperties::PropertyCollection& operator=(::DynamicProperties::PropertyCollection&&);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void fromVariantMap(
            ::DynamicProperties::PropertyCollection& collection,
            ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>> const&
                properties
        );

        MCAPI static ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>>
        toVariantMap(::DynamicProperties::PropertyCollection const& collection);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk2db2c1;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicProperties& operator=(DynamicProperties const&);
    DynamicProperties(DynamicProperties const&);
    DynamicProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearCollection(::std::string const& collectionName);

    MCAPI void deserialize(::CompoundTag const& root, ::cereal::ReflectionCtx const& ctx);

    MCAPI uint64 getCollectionCount() const;

    MCAPI ::std::variant<double, float, bool, ::std::string, ::Vec3> const*
    getDynamicProperty(::std::string const& key, ::std::string const& collectionName) const;

    MCAPI ::std::vector<::std::string> getDynamicPropertyIds(::std::string const& collectionName) const;

    MCAPI uint64 getTotalByteCount() const;

    MCAPI uint64 getTotalByteCount(::std::string const& collectionName) const;

    MCAPI bool removeDynamicProperty(::std::string const& key, ::std::string const& collectionName);

    MCAPI ::std::unique_ptr<::CompoundTag> serialize(::cereal::ReflectionCtx const& ctx) const;

    MCAPI void setDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value,
        ::std::string const&                                              collectionName
    );

    MCAPI void updateCollectionName(::std::string const& from, ::std::string const& to);

    MCAPI ~DynamicProperties();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::std::optional<::std::string> validateDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
    );

    MCAPI static ::std::string validateDynamicProperty_V010(
        ::DynamicPropertyDefinition const*                                propertyDefinition,
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& STORAGE_TAG();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
