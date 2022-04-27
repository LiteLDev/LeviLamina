#include "../../Header/MC/ItemStackBase.hpp"
namespace MC
{
int ItemStackBase::Count::get()
{
    return NativePtr->getCount();
}
#ifndef INCLUDE_MCAPI
short MC::ItemStackBase::Id::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getId();
    return __ret;
}
#endif // INCLUDE_MCAPI


} // namespace MC


#ifdef INCLUDE_MCAPI

#include "../../Header/MC/HashedString.hpp"

void MC::ItemStackBase::SetNull()
{
    ((class ::ItemStackBase*)NativePtr)->setNull();
}

::System::String ^ MC::ItemStackBase::ToString()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

::System::String ^ MC::ItemStackBase::ToDebugString()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->toDebugString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

void MC::ItemStackBase::Add(int _0)
{
    ((class ::ItemStackBase*)NativePtr)->add(_0);
}

bool MC::ItemStackBase::CanBeCharged()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->canBeCharged();
    return __ret;
}

void MC::ItemStackBase::ClearChargedItem()
{
    ((class ::ItemStackBase*)NativePtr)->clearChargedItem();
}

bool MC::ItemStackBase::ComponentsMatch(MC::ItemStackBase ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::ItemStackBase*)_0->NativePtr;
    auto __ret = ((class ::ItemStackBase*)NativePtr)->componentsMatch(__arg0);
    return __ret;
}

bool MC::ItemStackBase::HasSameAuxValue(MC::ItemStackBase ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::ItemStackBase*)_0->NativePtr;
    auto __ret = ((class ::ItemStackBase*)NativePtr)->hasSameAuxValue(__arg0);
    return __ret;
}

bool MC::ItemStackBase::HasSameUserData(MC::ItemStackBase ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::ItemStackBase*)_0->NativePtr;
    auto __ret = ((class ::ItemStackBase*)NativePtr)->hasSameUserData(__arg0);
    return __ret;
}

bool MC::ItemStackBase::HasTag(unsigned long long _0)
{
    auto __arg0 = (const unsigned long long&)_0;
    auto __ret = ((class ::ItemStackBase*)NativePtr)->hasTag(__arg0);
    return __ret;
}

bool MC::ItemStackBase::IsOneOfInstances(::System::Collections::Generic::List<MC::HashedString ^> ^ _0, bool _1)
{
    auto _tmp_0 = std::vector<::HashedString>();
    for each (MC::HashedString ^ _element in _0)
    {
        if (ReferenceEquals(_element, nullptr))
            throw gcnew ::System::ArgumentNullException("_element", "Cannot be null because it is passed by value.");
        auto _marshalElement = *(class ::HashedString*)_element->NativePtr;
        _tmp_0.push_back(_marshalElement);
    }
    auto __arg0 = _tmp_0;
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isOneOfInstances(__arg0, _1);
    return __ret;
}

bool MC::ItemStackBase::IsStackable(MC::ItemStackBase ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::ItemStackBase*)_0->NativePtr;
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isStackable(__arg0);
    return __ret;
}

bool MC::ItemStackBase::IsValidAuxValue(int _0)
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isValidAuxValue(_0);
    return __ret;
}

bool MC::ItemStackBase::Matches(MC::ItemStackBase ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::ItemStackBase*)_0->NativePtr;
    auto __ret = ((class ::ItemStackBase*)NativePtr)->matches(__arg0);
    return __ret;
}

bool MC::ItemStackBase::MatchesItem(MC::ItemStackBase ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::ItemStackBase*)_0->NativePtr;
    auto __ret = ((class ::ItemStackBase*)NativePtr)->matchesItem(__arg0);
    return __ret;
}

MC::ItemStackBase::operator bool(MC::ItemStackBase ^ __op)
{
    if (ReferenceEquals(__op, nullptr))
        throw gcnew ::System::ArgumentNullException("__op", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::ItemStackBase*)__op->NativePtr;
    auto __ret = (bool)__arg0;
    return __ret;
}

bool MC::ItemStackBase::operator!=(MC::ItemStackBase ^ __op, MC::ItemStackBase ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return !(__opNull && _0Null);
    auto& __arg0 = *(class ::ItemStackBase*)__op->NativePtr;
    auto& __arg1 = *(class ::ItemStackBase*)_0->NativePtr;
    auto __ret = __arg0 != __arg1;
    return __ret;
}

bool MC::ItemStackBase::operator==(MC::ItemStackBase ^ __op, MC::ItemStackBase ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return __opNull && _0Null;
    auto& __arg0 = *(class ::ItemStackBase*)__op->NativePtr;
    auto& __arg1 = *(class ::ItemStackBase*)_0->NativePtr;
    auto __ret = __arg0 == __arg1;
    return __ret;
}

bool MC::ItemStackBase::Equals(::System::Object ^ obj)
{
    return this == safe_cast<MC::ItemStackBase ^>(obj);
}

void MC::ItemStackBase::Remove(int _0)
{
    ((class ::ItemStackBase*)NativePtr)->remove(_0);
}

void MC::ItemStackBase::ResetHoverName()
{
    ((class ::ItemStackBase*)NativePtr)->resetHoverName();
}

bool MC::ItemStackBase::SameItem(int _0, int _1)
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->sameItem(_0, _1);
    return __ret;
}

bool MC::ItemStackBase::SameItem(MC::ItemStackBase ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::ItemStackBase*)_0->NativePtr;
    auto __ret = ((class ::ItemStackBase*)NativePtr)->sameItem(__arg0);
    return __ret;
}

bool MC::ItemStackBase::SameItemAndAux(MC::ItemStackBase ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::ItemStackBase*)_0->NativePtr;
    auto __ret = ((class ::ItemStackBase*)NativePtr)->sameItemAndAux(__arg0);
    return __ret;
}

void MC::ItemStackBase::Set(int _0)
{
    ((class ::ItemStackBase*)NativePtr)->set(_0);
}

void MC::ItemStackBase::SetCustomLore(::System::Collections::Generic::List<::System::String ^> ^ _0)
{
    auto _tmp_0 = std::vector<::std::string>();
    for each (::System::String ^ _element in _0)
    {
        auto _marshalElement = clix::marshalString<clix::E_UTF8>(_element);
        _tmp_0.push_back(_marshalElement);
    }
    auto __arg0 = _tmp_0;
    ((class ::ItemStackBase*)NativePtr)->setCustomLore(__arg0);
}

void MC::ItemStackBase::SetJustBrewed(bool _0)
{
    ((class ::ItemStackBase*)NativePtr)->setJustBrewed(_0);
}

void MC::ItemStackBase::SetPickupTime()
{
    ((class ::ItemStackBase*)NativePtr)->setPickupTime();
}

void MC::ItemStackBase::SetRepairCost(int _0)
{
    ((class ::ItemStackBase*)NativePtr)->setRepairCost(_0);
}

bool MC::ItemStackBase::ShouldVanish()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->shouldVanish();
    return __ret;
}

bool MC::ItemStackBase::IsValidComponent(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ::ItemStackBase::isValidComponent(__arg0);
    return __ret;
}

int MC::ItemStackBase::AttackDamage::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getAttackDamage();
    return __ret;
}

short MC::ItemStackBase::AuxValue::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getAuxValue();
    return __ret;
}

void MC::ItemStackBase::AuxValue::set(short _0)
{
    ((class ::ItemStackBase*)NativePtr)->setAuxValue(_0);
}

int MC::ItemStackBase::BaseRepairCost::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getBaseRepairCost();
    return __ret;
}

::System::String ^ MC::ItemStackBase::CategoryName::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getCategoryName();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Mce::Color ^ MC::ItemStackBase::Color::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getColor();
    auto ____ret = new class ::mce::Color(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Mce::Color((class ::mce::Color*)____ret, true);
}

::System::String ^ MC::ItemStackBase::CustomName::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getCustomName();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

void MC::ItemStackBase::CustomName::set(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    ((class ::ItemStackBase*)NativePtr)->setCustomName(__arg0);
}

short MC::ItemStackBase::DamageValue::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getDamageValue();
    return __ret;
}

void MC::ItemStackBase::DamageValue::set(short _0)
{
    ((class ::ItemStackBase*)NativePtr)->setDamageValue(_0);
}

::System::String ^ MC::ItemStackBase::DescriptionId::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getDescriptionId();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

::System::String ^ MC::ItemStackBase::EffectName::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getEffectName();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

int MC::ItemStackBase::EnchantValue::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getEnchantValue();
    return __ret;
}

::System::String ^ MC::ItemStackBase::HoverName::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getHoverName();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

short MC::ItemStackBase::Id::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getId();
    return __ret;
}

int MC::ItemStackBase::IdAux::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getIdAux();
    return __ret;
}

short MC::ItemStackBase::MaxDamage::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getMaxDamage();
    return __ret;
}

unsigned char MC::ItemStackBase::MaxStackSize::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getMaxStackSize();
    return __ret;
}

::System::String ^ MC::ItemStackBase::Name::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getName();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

::System::String ^ MC::ItemStackBase::RawNameId::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getRawNameId();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

bool MC::ItemStackBase::WasPickedUp::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->getWasPickedUp();
    return __ret;
}

void MC::ItemStackBase::WasPickedUp::set(bool _0)
{
    ((class ::ItemStackBase*)NativePtr)->setWasPickedUp(_0);
}

bool MC::ItemStackBase::HasChargedItem::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->hasChargedItem();
    return __ret;
}

bool MC::ItemStackBase::HasCompoundTextUserData::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->hasCompoundTextUserData();
    return __ret;
}

bool MC::ItemStackBase::HasCustomHoverName::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->hasCustomHoverName();
    return __ret;
}

bool MC::ItemStackBase::HasUserData::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->hasUserData();
    return __ret;
}

bool MC::ItemStackBase::IsArmorItem::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isArmorItem();
    return __ret;
}

bool MC::ItemStackBase::IsBlock::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isBlock();
    return __ret;
}

bool MC::ItemStackBase::IsDamageableItem::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isDamageableItem();
    return __ret;
}

bool MC::ItemStackBase::IsDamaged::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isDamaged();
    return __ret;
}

bool MC::ItemStackBase::IsEnchanted::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isEnchanted();
    return __ret;
}

bool MC::ItemStackBase::IsEnchantingBook::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isEnchantingBook();
    return __ret;
}

bool MC::ItemStackBase::IsExplodable::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isExplodable();
    return __ret;
}

bool MC::ItemStackBase::IsFireResistant::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isFireResistant();
    return __ret;
}

bool MC::ItemStackBase::IsFullStack::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isFullStack();
    return __ret;
}

bool MC::ItemStackBase::IsGlint::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isGlint();
    return __ret;
}

bool MC::ItemStackBase::IsHorseArmorItem::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isHorseArmorItem();
    return __ret;
}

bool MC::ItemStackBase::IsLiquidClipItem::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isLiquidClipItem();
    return __ret;
}

bool MC::ItemStackBase::IsMusicDiscItem::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isMusicDiscItem();
    return __ret;
}

bool MC::ItemStackBase::IsNull::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isNull();
    return __ret;
}

bool MC::ItemStackBase::IsOffhandItem::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isOffhandItem();
    return __ret;
}

bool MC::ItemStackBase::IsPattern::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isPattern();
    return __ret;
}

bool MC::ItemStackBase::IsPotionItem::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isPotionItem();
    return __ret;
}

bool MC::ItemStackBase::IsStackedByData::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isStackedByData();
    return __ret;
}

bool MC::ItemStackBase::IsWearableItem::get()
{
    auto __ret = ((class ::ItemStackBase*)NativePtr)->isWearableItem();
    return __ret;
}

::System::String ^ MC::ItemStackBase::TAG_CAN_DESTROY::get()
{
    return clix::marshalString<clix::E_UTF8>(::ItemStackBase::TAG_CAN_DESTROY);
}

::System::String ^ MC::ItemStackBase::TAG_CAN_PLACE_ON::get()
{
    return clix::marshalString<clix::E_UTF8>(::ItemStackBase::TAG_CAN_PLACE_ON);
}

::System::String ^ MC::ItemStackBase::TAG_DISPLAY::get()
{
    return clix::marshalString<clix::E_UTF8>(::ItemStackBase::TAG_DISPLAY);
}

::System::String ^ MC::ItemStackBase::TAG_DISPLAY_NAME::get()
{
    return clix::marshalString<clix::E_UTF8>(::ItemStackBase::TAG_DISPLAY_NAME);
}

::System::String ^ MC::ItemStackBase::TAG_ENCHANTS::get()
{
    return clix::marshalString<clix::E_UTF8>(::ItemStackBase::TAG_ENCHANTS);
}

::System::String ^ MC::ItemStackBase::TAG_LORE::get()
{
    return clix::marshalString<clix::E_UTF8>(::ItemStackBase::TAG_LORE);
}

::System::String ^ MC::ItemStackBase::TAG_REPAIR_COST::get()
{
    return clix::marshalString<clix::E_UTF8>(::ItemStackBase::TAG_REPAIR_COST);
}

#endif // INCLUDE_MCAPI
