#include "../../Header/MC/Block.hpp"

#include "../../Header/MC/CompoundTag.hpp"
#include "../../Header/MC/BlockPos.hpp"
#include "../../Header/MC/AABB.hpp"
#include "../../Header/MC/Vec3.hpp"

namespace MC
{
inline Block ^ Block::Create(const String ^ str, unsigned short tileData)
{
    return gcnew Block(::Block::create(marshalString<Encoding::E_UTF8>((String ^) str), tileData));
}

inline Block ^ Block::Create(CompoundTag ^ nbt)
{
    return gcnew Block(::Block::create(nbt->NativePtr));
}

inline String ^ Block::TypeName::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getTypeName());
}

inline int Block::Id::get()
{
    return NativePtr->getId();
}

inline unsigned short Block::TileData::get()
{
    return NativePtr->getTileData();
}

inline CompoundTag ^ Block::Nbt::get()
{
    return gcnew CompoundTag(NativePtr->getNbt().release(), true);
}

inline void Block::Nbt::set(CompoundTag ^ nbt)
{
    NativePtr->setNbt(nbt->NativePtr);
}
} // namespace MC


#ifdef INCLUDE_MCAPI

::System::String ^ MC::Block::BuildDescriptionId()
{
    auto __ret = ((class ::Block*)NativePtr)->buildDescriptionId();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

::System::String ^ MC::Block::BuildDescriptionName()
{
    auto __ret = ((class ::Block*)NativePtr)->buildDescriptionName();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

void MC::Block::CacheComponentData()
{
    ((class ::Block*)NativePtr)->cacheComponentData();
}

bool MC::Block::CanBeBrokenFromFalling()
{
    auto __ret = ((class ::Block*)NativePtr)->canBeBrokenFromFalling();
    return __ret;
}

bool MC::Block::CanBeOriginalSurface()
{
    auto __ret = ((class ::Block*)NativePtr)->canBeOriginalSurface();
    return __ret;
}

bool MC::Block::CanConnect(MC::Block ^ _0, unsigned char _1, MC::Block ^ _2)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Block*)_0->NativePtr;
    if (ReferenceEquals(_2, nullptr))
        throw gcnew ::System::ArgumentNullException("_2", "Cannot be null because it is a C++ reference (&).");
    auto& __arg2 = *(class ::Block*)_2->NativePtr;
    auto __ret = ((class ::Block*)NativePtr)->canConnect(__arg0, _1, __arg2);
    return __ret;
}

bool MC::Block::CanHaveExtraData()
{
    auto __ret = ((class ::Block*)NativePtr)->canHaveExtraData();
    return __ret;
}

bool MC::Block::CanHurtAndBreakItem()
{
    auto __ret = ((class ::Block*)NativePtr)->canHurtAndBreakItem();
    return __ret;
}

bool MC::Block::CanInstatick()
{
    auto __ret = ((class ::Block*)NativePtr)->canInstatick();
    return __ret;
}

void MC::Block::GetDebugText(::System::Collections::Generic::List<::System::String ^> ^ _0, MC::BlockPos ^ _1)
{
    auto _tmp_0 = std::vector<::std::string>();
    for each (::System::String ^ _element in _0)
    {
        auto _marshalElement = clix::marshalString<clix::E_UTF8>(_element);
        _tmp_0.push_back(_marshalElement);
    }
    auto __arg0 = _tmp_0;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::BlockPos*)_1->NativePtr;
    ((class ::Block*)NativePtr)->getDebugText(__arg0, __arg1);
}

MC::AABB ^ MC::Block::GetVisualShape(MC::AABB ^ _0, bool _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::AABB*)_0->NativePtr;
    auto& __ret = ((class ::Block*)NativePtr)->getVisualShape(__arg0, _1);
    return (MC::AABB ^)((&__ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*)&__ret));
}

bool MC::Block::HasTag(unsigned long long _0)
{
    auto __arg0 = (const unsigned long long&)_0;
    auto __ret = ((class ::Block*)NativePtr)->hasTag(__arg0);
    return __ret;
}

bool MC::Block::IgnoreEntitiesOnPistonMove()
{
    auto __ret = ((class ::Block*)NativePtr)->ignoreEntitiesOnPistonMove();
    return __ret;
}

bool MC::Block::IsPreservingMediumWhenPlaced(MC::Block ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Block*)_0->NativePtr;
    auto __ret = ((class ::Block*)NativePtr)->isPreservingMediumWhenPlaced(__arg0);
    return __ret;
}

bool MC::Block::operator!=(MC::Block ^ __op, MC::Block ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return !(__opNull && _0Null);
    auto& __arg0 = *(class ::Block*)__op->NativePtr;
    auto& __arg1 = *(class ::Block*)_0->NativePtr;
    auto __ret = __arg0 != __arg1;
    return __ret;
}

bool MC::Block::operator==(MC::Block ^ __op, MC::Block ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return __opNull && _0Null;
    auto& __arg0 = *(class ::Block*)__op->NativePtr;
    auto& __arg1 = *(class ::Block*)_0->NativePtr;
    auto __ret = __arg0 == __arg1;
    return __ret;
}

bool MC::Block::Equals(::System::Object ^ obj)
{
    return this == safe_cast<MC::Block ^>(obj);
}

MC::Vec3 ^ MC::Block::RandomlyModifyPosition(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::Block*)NativePtr)->randomlyModifyPosition(__arg0);
    auto ____ret = new class ::Vec3(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

bool MC::Block::ShouldRandomTick()
{
    auto __ret = ((class ::Block*)NativePtr)->shouldRandomTick();
    return __ret;
}

bool MC::Block::ShouldRandomTickExtraLayer()
{
    auto __ret = ((class ::Block*)NativePtr)->shouldRandomTickExtraLayer();
    return __ret;
}

::System::String ^ MC::Block::ToDebugString()
{
    auto __ret = ((class ::Block*)NativePtr)->toDebugString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Block ^ MC::Block::TryGetInfested()
{
    auto __ret = ((class ::Block*)NativePtr)->tryGetInfested();
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew ::MC::Block((class ::Block*)__ret);
}

MC::Block ^ MC::Block::TryGetUninfested()
{
    auto __ret = ((class ::Block*)NativePtr)->tryGetUninfested();
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew ::MC::Block((class ::Block*)__ret);
}

bool MC::Block::CausesFreezeEffect::get()
{
    auto __ret = ((class ::Block*)NativePtr)->causesFreezeEffect();
    return __ret;
}

bool MC::Block::AllowsRunes::get()
{
    auto __ret = ((class ::Block*)NativePtr)->getAllowsRunes();
    return __ret;
}

int MC::Block::BurnOdds::get()
{
    auto __ret = ((class ::Block*)NativePtr)->getBurnOdds();
    return __ret;
}

int MC::Block::Color::get()
{
    auto __ret = ((class ::Block*)NativePtr)->getColor();
    return __ret;
}

MC::Block ^ MC::Block::DefaultState::get()
{
    auto& __ret = ((class ::Block*)NativePtr)->getDefaultState();
    return (MC::Block ^)((&__ret == nullptr) ? nullptr : gcnew ::MC::Block((class ::Block*)&__ret));
}

::System::String ^ MC::Block::DescriptionId::get()
{
    auto __ret = ((class ::Block*)NativePtr)->getDescriptionId();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

float MC::Block::DestroySpeed::get()
{
    auto __ret = ((class ::Block*)NativePtr)->getDestroySpeed();
    return __ret;
}

int MC::Block::FlameOdds::get()
{
    auto __ret = ((class ::Block*)NativePtr)->getFlameOdds();
    return __ret;
}

float MC::Block::Friction::get()
{
    auto __ret = ((class ::Block*)NativePtr)->getFriction();
    return __ret;
}

unsigned int MC::Block::RuntimeId::get()
{
    auto& __ret = ((class ::Block*)NativePtr)->getRuntimeId();
    return (unsigned int)(const_cast<unsigned int&>(__ret));
}

MC::CompoundTag ^ MC::Block::SerializationId::get()
{
    auto& __ret = ((class ::Block*)NativePtr)->getSerializationId();
    return (MC::CompoundTag ^)((&__ret == nullptr) ? nullptr : gcnew ::MC::CompoundTag((class ::CompoundTag*)&__ret));
}

float MC::Block::Thickness::get()
{
    auto __ret = ((class ::Block*)NativePtr)->getThickness();
    return __ret;
}

float MC::Block::Translucency::get()
{
    auto __ret = ((class ::Block*)NativePtr)->getTranslucency();
    return __ret;
}

int MC::Block::Variant::get()
{
    auto __ret = ((class ::Block*)NativePtr)->getVariant();
    return __ret;
}

bool MC::Block::HasBlockEntity::get()
{
    auto __ret = ((class ::Block*)NativePtr)->hasBlockEntity();
    return __ret;
}

bool MC::Block::HasComparatorSignal::get()
{
    auto __ret = ((class ::Block*)NativePtr)->hasComparatorSignal();
    return __ret;
}

bool MC::Block::HasRuntimeId::get()
{
    auto __ret = ((class ::Block*)NativePtr)->hasRuntimeId();
    return __ret;
}

bool MC::Block::IsAuxValueRelevantForPicking::get()
{
    auto __ret = ((class ::Block*)NativePtr)->isAuxValueRelevantForPicking();
    return __ret;
}

bool MC::Block::IsBounceBlock::get()
{
    return ((class ::Block*)NativePtr)->isBounceBlock();
}

bool MC::Block::IsButtonBlock::get()
{
    return ((class ::Block*)NativePtr)->isButtonBlock();
}

bool MC::Block::IsContainerBlock::get()
{
    return ((class ::Block*)NativePtr)->isContainerBlock();
}

bool MC::Block::IsCropBlock::get()
{
    return ((class ::Block*)NativePtr)->isCropBlock();
}

bool MC::Block::IsDoorBlock::get()
{
    return ((class ::Block*)NativePtr)->isDoorBlock();
}

bool MC::Block::IsFenceBlock::get()
{
    return ((class ::Block*)NativePtr)->isFenceBlock();
}

bool MC::Block::IsFenceGateBlock::get()
{
    return ((class ::Block*)NativePtr)->isFenceGateBlock();
}

bool MC::Block::IsHeavy::get()
{
    auto __ret = ((class ::Block*)NativePtr)->isHeavy();
    return __ret;
}

bool MC::Block::IsInteractiveBlock::get()
{
    return ((class ::Block*)NativePtr)->isInteractiveBlock();
}

bool MC::Block::IsLeverBlock::get()
{
    return ((class ::Block*)NativePtr)->isLeverBlock();
}

bool MC::Block::IsMotionBlockingBlock::get()
{
    return ((class ::Block*)NativePtr)->isMotionBlockingBlock();
}

bool MC::Block::IsRailBlock::get()
{
    return ((class ::Block*)NativePtr)->isRailBlock();
}

bool MC::Block::IsSignalSource::get()
{
    auto __ret = ((class ::Block*)NativePtr)->isSignalSource();
    return __ret;
}

bool MC::Block::IsSlabBlock::get()
{
    return ((class ::Block*)NativePtr)->isSlabBlock();
}

bool MC::Block::IsSolid::get()
{
    auto __ret = ((class ::Block*)NativePtr)->isSolid();
    return __ret;
}

bool MC::Block::IsSolidBlockingBlock::get()
{
    return ((class ::Block*)NativePtr)->isSolidBlockingBlock();
}

bool MC::Block::IsSolidBlockingBlockAndNotSignalSource::get()
{
    auto __ret = ((class ::Block*)NativePtr)->isSolidBlockingBlockAndNotSignalSource();
    return __ret;
}

bool MC::Block::IsStairBlock::get()
{
    return ((class ::Block*)NativePtr)->isStairBlock();
}

bool MC::Block::IsStandingSign::get()
{
    auto __ret = ((class ::Block*)NativePtr)->isStandingSign();
    return __ret;
}

bool MC::Block::IsStemBlock::get()
{
    return ((class ::Block*)NativePtr)->isStemBlock();
}

bool MC::Block::IsThinFenceBlock::get()
{
    return ((class ::Block*)NativePtr)->isThinFenceBlock();
}

bool MC::Block::IsUnbreakable::get()
{
    auto __ret = ((class ::Block*)NativePtr)->isUnbreakable();
    return __ret;
}

bool MC::Block::IsWallBlock::get()
{
    return ((class ::Block*)NativePtr)->isWallBlock();
}

bool MC::Block::IsWaterBlocking::get()
{
    auto __ret = ((class ::Block*)NativePtr)->isWaterBlocking();
    return __ret;
}

bool MC::Block::MayPick::get()
{
    auto __ret = ((class ::Block*)NativePtr)->mayPick();
    return __ret;
}

bool MC::Block::PushesOutItems::get()
{
    auto __ret = ((class ::Block*)NativePtr)->pushesOutItems();
    return __ret;
}

bool MC::Block::PushesUpFallingBlocks::get()
{
    auto __ret = ((class ::Block*)NativePtr)->pushesUpFallingBlocks();
    return __ret;
}

::System::String ^ MC::Block::BLOCK_DESCRIPTION_PREFIX::get()
{
    return clix::marshalString<clix::E_UTF8>(::Block::BLOCK_DESCRIPTION_PREFIX);
}

float MC::Block::SIZE_OFFSET::get()
{
    return ::Block::SIZE_OFFSET;
}

#endif // INCLUDE_MCAPI
