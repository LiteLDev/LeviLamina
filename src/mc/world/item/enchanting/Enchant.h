#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Enchant {
public:
    // Enchant inner types define
    enum class Frequency {};

    enum class Slot {};

    enum class Type {};

public:
    // prevent constructor by default
    Enchant& operator=(Enchant const&);
    Enchant(Enchant const&);
    Enchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Enchant();

    // vIndex: 1
    virtual bool isCompatibleWith(::Enchant::Type type) const;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 4
    virtual int getMinLevel() const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 6
    virtual int getDamageProtection(int level, class ActorDamageSource const& source) const;

    // vIndex: 7
    virtual float getAfterBreachArmorFraction(int, float) const;

    // vIndex: 8
    virtual float getDamageBonus(int, class Actor const&, class Actor const&) const;

    // vIndex: 9
    virtual void doPostAttack(class Actor& attacker, class Actor& victim, int level) const;

    // vIndex: 10
    virtual void doPostItemHurtActor(class Actor&, class Actor&, int) const;

    // vIndex: 11
    virtual void doPostHurt(class ItemInstance& item, class Actor& victim, class Actor& attacker, int level) const;

    // vIndex: 12
    virtual bool isMeleeDamageEnchant() const;

    // vIndex: 13
    virtual bool isProtectionEnchant() const;

    // vIndex: 14
    virtual bool isTreasureOnly() const;

    // vIndex: 15
    virtual bool isDiscoverable() const;

    // vIndex: 16
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    MCAPI Enchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    MCAPI Enchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots,
        bool                 isLootable
    );

    MCAPI bool canEnchant(int slot, bool allowNonVanilla) const;

    MCAPI std::string getDescription() const;

    MCAPI std::string getDescriptionId() const;

    MCAPI ::Enchant::Type getEnchantType() const;

    MCAPI ::Enchant::Frequency getFrequency() const;

    MCAPI class HashedString const& getStringId() const;

    MCAPI bool isAvailable() const;

    MCAPI bool isDisabled() const;

    MCAPI bool isLootable() const;

    MCAPI static ::Enchant::Slot enchantSlotFromString(std::string_view str);

    MCAPI static class Enchant const* getEnchant(::Enchant::Type const& type);

    MCAPI static class Enchant const* getEnchantFromName(class HashedString const& name);

    MCAPI static ::Enchant::Type getEnchantTypeFromName(class HashedString const& name);

    MCAPI static void initEnchants();

    MCAPI static void shutdownEnchants();

    MCAPI static std::string stringFromEnchantSlot(::Enchant::Slot const& enchantSlot);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    MCAPI void* ctor$(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots,
        bool                 isLootable
    );

    MCAPI void dtor$();

    MCAPI bool _isValidEnchantmentTypeForCategory$(::Enchant::Type type) const;

    MCAPI void doPostAttack$(class Actor& attacker, class Actor& victim, int level) const;

    MCAPI void doPostHurt$(class ItemInstance& item, class Actor& victim, class Actor& attacker, int level) const;

    MCAPI void doPostItemHurtActor$(class Actor&, class Actor&, int) const;

    MCAPI float getAfterBreachArmorFraction$(int, float) const;

    MCAPI float getDamageBonus$(int, class Actor const&, class Actor const&) const;

    MCAPI int getDamageProtection$(int level, class ActorDamageSource const& source) const;

    MCAPI int getMaxCost$(int level) const;

    MCAPI int getMaxLevel$() const;

    MCAPI int getMinCost$(int level) const;

    MCAPI int getMinLevel$() const;

    MCAPI bool isCompatibleWith$(::Enchant::Type type) const;

    MCAPI bool isDiscoverable$() const;

    MCAPI bool isMeleeDamageEnchant$() const;

    MCAPI bool isProtectionEnchant$() const;

    MCAPI bool isTreasureOnly$() const;

    MCAPI static std::unordered_map<class HashedString, ::Enchant::Type>& mEnchantNameToType();

    MCAPI static std::unordered_map<::Enchant::Slot, std::string, struct EnchantSlotEnumHasher>&
    mEnchantSlotTypeEnumToStringMap();

    MCAPI static std::unordered_map<std::string, ::Enchant::Slot>& mEnchantSlotTypeNameToEnumMap();

    MCAPI static std::vector<std::unique_ptr<class Enchant>>& mEnchants();

    // NOLINTEND
};
