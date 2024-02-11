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
        // symbol: ??4PropertyCollection@DynamicProperties@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct DynamicProperties::PropertyCollection&
        operator=(struct DynamicProperties::PropertyCollection const&);

        // symbol:
        // ?fromVariantMap@PropertyCollection@DynamicProperties@@SAXAEAU12@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@2@@std@@@2@@std@@@Z
        MCAPI static void
        fromVariantMap(struct DynamicProperties::PropertyCollection&, std::unordered_map<std::string, std::variant<double, float, bool, std::string, class Vec3>> const&);

        // symbol:
        // ?toVariantMap@PropertyCollection@DynamicProperties@@SA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@2@@std@@@2@@std@@AEBU12@@Z
        MCAPI static std::unordered_map<std::string, std::variant<double, float, bool, std::string, class Vec3>>
        toVariantMap(struct DynamicProperties::PropertyCollection const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DynamicProperties& operator=(DynamicProperties const&);
    DynamicProperties(DynamicProperties const&);
    DynamicProperties();

public:
    // NOLINTBEGIN
    // symbol:
    // ?clearCollection@DynamicProperties@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void clearCollection(std::string const&);

    // symbol: ?deserialize@DynamicProperties@@QEAAXAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    MCAPI void deserialize(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // symbol: ?getCollectionCount@DynamicProperties@@QEBA_KXZ
    MCAPI uint64 getCollectionCount() const;

    // symbol:
    // ?getDynamicProperty@DynamicProperties@@QEBAPEBV?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@0@Z
    MCAPI std::variant<double, float, bool, std::string, class Vec3> const*
          getDynamicProperty(std::string const& key, std::string const& collectionName) const;

    // symbol:
    // ?getDynamicPropertyIds@DynamicProperties@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<std::string> getDynamicPropertyIds(std::string const&) const;

    // symbol: ?getTotalByteCount@DynamicProperties@@QEBA_KXZ
    MCAPI uint64 getTotalByteCount() const;

    // symbol:
    // ?getTotalByteCount@DynamicProperties@@QEBA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI uint64 getTotalByteCount(std::string const&) const;

    // symbol:
    // ?removeDynamicProperty@DynamicProperties@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI bool removeDynamicProperty(std::string const& key, std::string const& collectionName);

    // symbol:
    // ?serialize@DynamicProperties@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    MCAPI std::unique_ptr<class CompoundTag> serialize(struct cereal::ReflectionCtx const&) const;

    // symbol:
    // ?setDynamicProperty@DynamicProperties@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@3@0@Z
    MCAPI void setDynamicProperty(
        std::string const&                                                key,
        std::variant<double, float, bool, std::string, class Vec3> const& value,
        std::string const&                                                collectionName
    );

    // symbol:
    // ?updateCollectionName@DynamicProperties@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void updateCollectionName(std::string const&, std::string const&);

    // symbol: ??1DynamicProperties@@QEAA@XZ
    MCAPI ~DynamicProperties();

    // symbol: ?bindType@DynamicProperties@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?validateDynamicProperty@DynamicProperties@@SA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEBV?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@3@@Z
    MCAPI static std::optional<std::string>
    validateDynamicProperty(std::string const&, std::variant<double, float, bool, std::string, class Vec3> const*);

    // symbol:
    // ?validateDynamicProperty_V010@DynamicProperties@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUDynamicPropertyDefinition@@AEBV23@PEBV?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@3@@Z
    MCAPI static std::string
    validateDynamicProperty_V010(struct DynamicPropertyDefinition const*, std::string const&, std::variant<double, float, bool, std::string, class Vec3> const*);

    // symbol: ?STORAGE_TAG@DynamicProperties@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORAGE_TAG;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getPropertyCollection@DynamicProperties@@AEAAPEAUPropertyCollection@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct DynamicProperties::PropertyCollection* _getPropertyCollection(std::string const&);

    // symbol:
    // ?_getPropertyCollection@DynamicProperties@@AEBAPEBUPropertyCollection@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct DynamicProperties::PropertyCollection const* _getPropertyCollection(std::string const&) const;

    // symbol:
    // ?_getPropertyVariant@DynamicProperties@@CA?AVmeta_any@entt@@AEBV?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@@Z
    MCAPI static entt::meta_any
    _getPropertyVariant(std::variant<double, float, bool, std::string, class Vec3> const& var);

    // NOLINTEND
};
