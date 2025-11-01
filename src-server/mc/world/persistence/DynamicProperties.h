#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Vec3;
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
    using PropertyVariant = ::std::variant<double, float, bool, ::std::string, ::Vec3>;
    
    struct PropertyCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> mByteCount;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>>> mProperties;
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
        MCAPI static void fromVariantMap(::DynamicProperties::PropertyCollection& collection, ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>> const& properties);
    
        MCAPI static ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>> toVariantMap(::DynamicProperties::PropertyCollection const& collection);
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DynamicProperties::PropertyCollection>> mPropertyCollections;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicProperties& operator=(DynamicProperties const&);
    DynamicProperties(DynamicProperties const&);
    DynamicProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DynamicProperties(::DynamicProperties&&);

    MCAPI void deserialize(::CompoundTag const& root, ::cereal::ReflectionCtx const& ctx);

    MCAPI ::std::vector<::std::string> getDynamicPropertyIds(::std::string const& collectionName) const;

    MCAPI bool removeDynamicProperty(::std::string const& key, ::std::string const& collectionName);

    MCAPI ::std::unique_ptr<::CompoundTag> serialize(::cereal::ReflectionCtx const& ctx) const;

    MCAPI void setDynamicProperty(::std::string const& key, ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value, ::std::string const& collectionName);

    MCAPI void updateCollectionName(::std::string const& from, ::std::string const& to);

    MCAPI ~DynamicProperties();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::Scripting::ArgumentOutOfBoundsError> validateDynamicProperty(::std::string const& key, ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& STORAGE_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DynamicProperties&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
