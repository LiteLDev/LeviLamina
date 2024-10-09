#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
        // prevent constructor by default
        PropertyCollection(PropertyCollection const&);
        PropertyCollection();

    public:
        // NOLINTBEGIN
        MCAPI struct DynamicProperties::PropertyCollection&
        operator=(struct DynamicProperties::PropertyCollection const&);

        MCAPI static void fromVariantMap(
            struct DynamicProperties::PropertyCollection& collection,
            std::unordered_map<std::string, std::variant<double, float, bool, std::string, class Vec3>> const&
                properties
        );

        MCAPI static std::unordered_map<std::string, std::variant<double, float, bool, std::string, class Vec3>>
        toVariantMap(struct DynamicProperties::PropertyCollection const& collection);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DynamicProperties& operator=(DynamicProperties const&);
    DynamicProperties(DynamicProperties const&);
    DynamicProperties();

public:
    // NOLINTBEGIN
    MCAPI void clearCollection(std::string const& collectionName);

    MCAPI void deserialize(class CompoundTag const& root, struct cereal::ReflectionCtx const& ctx);

    MCAPI uint64 getCollectionCount() const;

    MCAPI std::variant<double, float, bool, std::string, class Vec3> const*
          getDynamicProperty(std::string const& key, std::string const& collectionName) const;

    MCAPI std::vector<std::string> getDynamicPropertyIds(std::string const& collectionName) const;

    MCAPI uint64 getTotalByteCount() const;

    MCAPI uint64 getTotalByteCount(std::string const& collectionName) const;

    MCAPI bool removeDynamicProperty(std::string const& key, std::string const& collectionName);

    MCAPI std::unique_ptr<class CompoundTag> serialize(struct cereal::ReflectionCtx const& ctx) const;

    MCAPI void setDynamicProperty(
        std::string const&                                                key,
        std::variant<double, float, bool, std::string, class Vec3> const& value,
        std::string const&                                                collectionName
    );

    MCAPI void updateCollectionName(std::string const& from, std::string const& to);

    MCAPI ~DynamicProperties();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static std::optional<std::string> validateDynamicProperty(
        std::string const&                                                key,
        std::variant<double, float, bool, std::string, class Vec3> const* value
    );

    MCAPI static std::string validateDynamicProperty_V010(
        struct DynamicPropertyDefinition const*                           propertyDefinition,
        std::string const&                                                key,
        std::variant<double, float, bool, std::string, class Vec3> const* value
    );

    MCAPI static std::string const STORAGE_TAG;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct DynamicProperties::PropertyCollection* _getPropertyCollection(std::string const& collectionName);

    MCAPI struct DynamicProperties::PropertyCollection const* _getPropertyCollection(std::string const& collectionName
    ) const;

    MCAPI static entt::meta_any
    _getPropertyVariant(std::variant<double, float, bool, std::string, class Vec3> const& var);

    // NOLINTEND
};
