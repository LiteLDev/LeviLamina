#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Vec3;
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
        MCNAPI ::DynamicProperties::PropertyCollection& operator=(::DynamicProperties::PropertyCollection&&);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void fromVariantMap(
            ::DynamicProperties::PropertyCollection& collection,
            ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>> const&
                properties
        );

        MCNAPI static ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>>
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
    MCNAPI DynamicProperties(::DynamicProperties&&);

    MCNAPI void deserialize(::CompoundTag const& root, ::cereal::ReflectionCtx const& ctx);

    MCNAPI ::std::vector<::std::string> getDynamicPropertyIds(::std::string const& collectionName) const;

    MCNAPI bool removeDynamicProperty(::std::string const& key, ::std::string const& collectionName);

    MCNAPI ::std::unique_ptr<::CompoundTag> serialize(::cereal::ReflectionCtx const& ctx) const;

    MCNAPI void setDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value,
        ::std::string const&                                              collectionName
    );

    MCNAPI void updateCollectionName(::std::string const& from, ::std::string const& to);

    MCNAPI ~DynamicProperties();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::std::string> validateDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& STORAGE_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DynamicProperties&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
