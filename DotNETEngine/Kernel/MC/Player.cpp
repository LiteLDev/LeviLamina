#include "../../Header/MC/Player.hpp"

#include "../../Header/MC/CompoundTag.hpp"
#include "../../Header/MC/NetworkIdentifier.hpp"
#include "../../Header/MC/Certificate.hpp"
#include "../../Header/MC/Container.hpp"
#include "../../Header/MC/ScorePacketInfo.hpp"
#include "../../Header/MC/BlockPos.hpp"
#include "../../Header/MC/ItemStack.hpp"
#include "../../Header/MC/Vec3.hpp"
#include "../../Header/MC/Attribute.hpp"

#include "../../Header/Logger.hpp"

namespace MC
{

inline System::String ^ Player::Name::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getName());
}
inline System::String ^ Player::RealName::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getRealName());
}
inline System::String ^ Player::Uuid::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getUuid());
}
inline unsigned char Player::ClientSubId::get()
{
    return NativePtr->getClientSubId();
}
inline System::String ^ Player::DeviceTypeName::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getDeviceTypeName());
}
inline int Player::AvgPing::get()
{
    return NativePtr->getAvgPing();
}
inline int Player::LastPing::get()
{
    return NativePtr->getLastPing();
}
inline System::String ^ Player::IP::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getIP());
}
inline System::String ^ Player::LanguageCode::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getLanguageCode());
}
inline System::String ^ Player::ServerAddress::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getServerAddress());
}
inline NetworkIdentifier ^ Player::NetworkIdentifier::get()
{
    return gcnew MC::NetworkIdentifier(NativePtr->getNetworkIdentifier());
}
inline Certificate ^ Player::Certificate::get()
{
    return gcnew MC::Certificate(NativePtr->getCertificate());
}
inline Container ^ Player::EnderChestContainer::get()
{
    return gcnew Container(NativePtr->getEnderChestContainer());
}
inline Pair<BlockPos ^, int> Player::RespawnPosition::get()
{
    auto& p = NativePtr->getRespawnPosition();
    return Pair<MC::BlockPos ^, int>(
        gcnew MC::BlockPos(p.first), p.second);
}
inline float Player::AvgPacketLoss::get()
{
    return NativePtr->getAvgPacketLoss();
}
inline System::String ^ Player::ClientId::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getClientId());
}
inline int Player::DeviceType::get()
{
    return NativePtr->getDeviceType();
}
inline bool Player::IsOP::get()
{
    return NativePtr->isOP();
}
inline bool Player::Kick(System::String ^ msg)
{
    return NativePtr->kick(marshalString<Encoding::E_UTF8>(msg));
}
inline bool Player::CrashClient()
{
    return NativePtr->crashClient();
}

/// <param name="type">:default = TextType::RAW</param>
inline bool Player::SendText(System::String ^ text, TextType type)
{
    return NativePtr->sendText(marshalString<Encoding::E_UTF8>(text), ::TextType(type));
}
inline bool Player::TalkAs(System::String ^ msg)
{
    return NativePtr->talkAs(marshalString<Encoding::E_UTF8>(msg));
}
inline bool Player::GiveItem(ItemStack ^ item)
{
    return NativePtr->giveItem(item->NativePtr);
}
inline int Player::ClearItem(System::String ^ typeName)
{
    return NativePtr->clearItem(marshalString<Encoding::E_UTF8>(typeName));
}
inline bool Player::Runcmd(System::String ^ cmd)
{
    return NativePtr->runcmd(marshalString<Encoding::E_UTF8>(cmd));
}
inline bool Player::TransferServer(System::String ^ address, unsigned short port)
{
    return NativePtr->transferServer(marshalString<Encoding::E_UTF8>(address), port);
}

inline bool Player::SetSidebar(System::String ^ title,
                               List<System::Tuple<System::String ^, int> ^> ^ data,
                               ObjectiveSortOrder sortOrder)
{
    auto len = data->Count;
    std::vector<std::pair<std::string, int>> stdvector(len);
    for (int i = 0; i < len; ++i)
        stdvector.emplace_back(std::move(std::pair<std::string, int>(
            marshalString<Encoding::E_UTF8>(data[i]->Item1), data[i]->Item2)));
    return NativePtr->setSidebar(
        marshalString<Encoding::E_UTF8>(title), stdvector, ::ObjectiveSortOrder(sortOrder));
}

inline bool Player::RemoveSidebar()
{
    return NativePtr->removeSidebar();
}
inline CompoundTag ^ Player::GetNbt()
{
    return gcnew CompoundTag(NativePtr->getNbt().release(), true);
}
inline bool Player::SetNbt(CompoundTag ^ nbt)
{
    return NativePtr->setNbt(nbt->NativePtr);
}
inline bool Player::RefreshAttribute(Attribute ^ attribute)
{
    return NativePtr->refreshAttribute(attribute);
}
inline bool Player::RefreshAttributes(List<Attribute ^> ^ attributes)
{
    auto len = attributes->Count;
    std::vector<::Attribute const*> stdvector(len);
    for (int i = 0; i < len; ++i)
        stdvector[i] = attributes[i];
    return NativePtr->refreshAttributes(stdvector);
}

inline int Player::GetScore(System::String ^ key)
{
    return NativePtr->getScore(marshalString<Encoding::E_UTF8>(key));
}
inline bool Player::SetScore(System::String ^ key, int value)
{
    return NativePtr->setScore(marshalString<Encoding::E_UTF8>(key), value);
}
inline bool Player::AddScore(System::String ^ key, int value)
{
    return NativePtr->addScore(marshalString<Encoding::E_UTF8>(key), value);
}
inline bool Player::ReduceScore(System::String ^ key, int value)
{
    return NativePtr->reduceScore(marshalString<Encoding::E_UTF8>(key), value);
}
inline bool Player::DeleteScore(System::String ^ key)
{
    return NativePtr->deleteScore(marshalString<Encoding::E_UTF8>(key));
}

// Packet
/// <param name="Type">:default = TextType::RAW</param>
inline bool Player::SendTextPacket(System::String ^ text, TextType Type)
{
    return NativePtr->sendText(marshalString<Encoding::E_UTF8>(text), ::TextType(Type));
}
inline bool Player::SendTitlePacket(System::String ^ text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration)
{
    return NativePtr->sendTitlePacket(marshalString<Encoding::E_UTF8>(text), ::TitleType(Type), FadeInDuration, RemainDuration, FadeOutDuration);
}
inline bool Player::SendNotePacket(unsigned int tone)
{
    return NativePtr->sendNotePacket(tone);
}
/// <param name="EntityUniqueID">:default = -1</param>
inline bool Player::SendSpawnParticleEffectPacket(Vec3 ^ spawnPos, int dimid, System::String ^ ParticleName, int64_t EntityUniqueID)
{
    return NativePtr->sendSpawnParticleEffectPacket(*spawnPos, dimid, marshalString<Encoding::E_UTF8>(ParticleName), EntityUniqueID);
}
/*bad*/ inline bool Player::SendPlaySoundPacket(System::String ^ SoundName, Vec3 ^ Position, float Volume, float Pitch)
{
    return NativePtr->sendPlaySoundPacket(marshalString<Encoding::E_UTF8>(SoundName), *Position, Volume, Pitch);
}

///// <param name="DataItem">:default = {} (using null to substitute it.)</param>
// inline bool Player::sendAddItemEntityPacket(unsigned long long runtimeID, int itemID, int stackSize, short aux, Vec3^ pos, List<csFakeDataItem^>^ DataItem) {
//	if (DataItem == nullptr) {
//		return NativePtr->sendAddItemEntityPacket(runtimeID, itemID, stackSize, aux, *pos->Translate());
//	}
//	auto len = DataItem->Count;
//	vector<FakeDataItem> stdvector = {};
//	for (int i = 0; i < len; i++)
//		stdvector.emplace_back(*DataItem[i]->Translate());
//	return NativePtr->sendAddItemEntityPacket(runtimeID, itemID, stackSize, aux, *pos->Translate(), stdvector);
// }
///// <param name="DataItem">:default = {} (using null to substitute it.)</param>
// inline bool Player::sendAddEntityPacket(unsigned long long runtimeID, System::String^ entityType, Vec3^ pos, Vec3^ rotation, List<csFakeDataItem^>^ DataItem) {
//	if (DataItem == nullptr) {
//		return NativePtr->sendAddEntityPacket(runtimeID, marshalString<Encoding::E_UTF8>(entityType), *pos->Translate(), *rotation->Translate());
//	}
//	auto len = DataItem->Count;
//	vector<FakeDataItem> stdvector = {};
//	for (int i = 0; i < len; i++)
//		stdvector.emplace_back(*DataItem[i]->Translate());
//	return NativePtr->sendAddEntityPacket(runtimeID, marshalString<Encoding::E_UTF8>(entityType), *pos->Translate(), *rotation->Translate(), stdvector);
// }

inline bool Player::SendTransferPacket(System::String ^ address, short port)
{
    return NativePtr->sendTransferPacket(marshalString<Encoding::E_UTF8>(address), port);
}
inline bool Player::SendSetDisplayObjectivePacket(System::String ^ title, System::String ^ name, char sortOrder)
{
    return NativePtr->sendSetDisplayObjectivePacket(marshalString<Encoding::E_UTF8>(title), marshalString<Encoding::E_UTF8>(name), sortOrder);
}
inline bool Player::SendSetScorePacket(char type, List<ScorePacketInfo ^> ^ data)
{
    auto len = data->Count;
    vector<::ScorePacketInfo> stdvector = {};
    for (int i = 0; i < len; i++)
        stdvector.emplace_back(*data[i]->NativePtr);
    return NativePtr->sendSetScorePacket(type, stdvector);
}
/// <param name="overlay">:default = 0</param>
inline bool Player::SendBossEventPacket(BossEvent type, System::String ^ name, float percent, BossEventColour colour, int overlay)
{
    return NativePtr->sendBossEventPacket(::BossEvent(type), marshalString<Encoding::E_UTF8>(name), percent, ::BossEventColour(colour), overlay);
}
inline bool Player::SendCommandRequestPacket(System::String ^ cmd)
{
    return NativePtr->sendCommandRequestPacket(marshalString<Encoding::E_UTF8>(cmd));
}
inline bool Player::SendTextTalkPacket(System::String ^ msg)
{
    return NativePtr->sendTextTalkPacket(marshalString<Encoding::E_UTF8>(msg));
}

inline bool Player::SendRawFormPacket(unsigned formId, System::String ^ data)
{
    return NativePtr->sendRawFormPacket(formId, marshalString<Encoding::E_UTF8>(data));
}
inline bool Player::SendSimpleFormPacket(
    System::String ^ title,
    System::String ^ content,
    List<System::String ^> ^ buttons,
    List<System::String ^> ^ images,
    callBackFunc_int ^ callback)
{
    auto len1 = buttons->Count;
    vector<string> stdvector1(len1);
    for (int i = 0; i < len1; i++)
        stdvector1.emplace_back(marshalString<Encoding::E_UTF8>(buttons[i]));
    auto len2 = images->Count;
    vector<string> stdvector2(len2);
    for (int j = 0; j < len2; j++)
        stdvector2.emplace_back(marshalString<Encoding::E_UTF8>(images[j]));
    GCHandle gch = GCHandle::Alloc(callback);
    auto __ptr = Marshal::GetFunctionPointerForDelegate(callback);
    auto __funcptr = static_cast<void (*)(int)>(__ptr.ToPointer());
    return NativePtr->sendSimpleFormPacket(
        marshalString<Encoding::E_UTF8>(title),
        marshalString<Encoding::E_UTF8>(content),
        stdvector1,
        stdvector2,
        __funcptr);
}
inline bool Player::SendModalFormPacket(
    System::String ^ title,
    System::String ^ content,
    System::String ^ button1,
    System::String ^ button2,
    callBackFunc_bool ^ callback)
{
    GCHandle gch = GCHandle::Alloc(callback);
    auto __ptr = Marshal::GetFunctionPointerForDelegate(callback);
    auto __funcptr = static_cast<void (*)(bool)>(__ptr.ToPointer());
    return NativePtr->sendModalFormPacket(
        marshalString<Encoding::E_UTF8>(title),
        marshalString<Encoding::E_UTF8>(content),
        marshalString<Encoding::E_UTF8>(button1),
        marshalString<Encoding::E_UTF8>(button2),
        __funcptr);
}
delegate void callBackFunc_String(std::string);
/// <summary>
/// QAQ
/// </summary>
/// <param name="data"></param>
/// <param name="callback"></param>
/// <returns></returns>
inline bool Player::SendCustomFormPacket(
    System::String ^ data,
    callBackFunc_String ^ callback)
{
    GCHandle gch = GCHandle::Alloc(callback);
    auto __ptr = Marshal::GetFunctionPointerForDelegate(callback);
    auto __funcptr = static_cast<void (*)(std::string)>(__ptr.ToPointer());
    return NativePtr->sendCustomFormPacket(marshalString<Encoding::E_UTF8>(data), __funcptr);
}

inline bool Player::IsValid(Player ^ player)
{
    return ::Player::isValid(player->NativePtr);
}

bool Player::SendModalForm(System::String ^ title,
                           System::String ^ content,
                           System::String ^ button1,
                           System::String ^ button2,
                           ModalForm_callback ^ func)
{
    GCHandle gch = GCHandle::Alloc(func);
    auto pfunc = static_cast<void (*)(bool)>(Marshal::GetFunctionPointerForDelegate(func).ToPointer());
    return NativePtr->sendModalFormPacket(
        marshalString<Encoding::E_UTF8>(title),
        marshalString<Encoding::E_UTF8>(content),
        marshalString<Encoding::E_UTF8>(button1),
        marshalString<Encoding::E_UTF8>(button2),
        pfunc);
}

bool Player::SendSimpleForm(System::String ^ title,
                            System::String ^ content,
                            List<System::String ^> ^ buttons,
                            List<System::String ^> ^ images,
                            SimpleForm_callback ^ callback)
{
    GCHandle gch = GCHandle::Alloc(callback);
    auto pfunc = static_cast<void (*)(int)>(Marshal::GetFunctionPointerForDelegate(callback).ToPointer());
    auto len = buttons->Count;
    std::vector<std::string> buttonsvector(len);
    for (int i = 0; i < len; ++i)
        buttonsvector.emplace_back(marshalString<Encoding::E_UTF8>(buttons[i]));
    len = images->Count;
    std::vector<std::string> imagesvector(len);
    for (int i = 0; i < len; ++i)
        imagesvector.emplace_back(marshalString<Encoding::E_UTF8>(images[i]));
    return NativePtr->sendSimpleFormPacket(
        marshalString<Encoding::E_UTF8>(title),
        marshalString<Encoding::E_UTF8>(content),
        buttonsvector,
        imagesvector,
        pfunc);
}

inline void NATIVECALLBACK Player::CustomForm_Func(std::string str)
{
    try
    {
        __func(marshalString<Encoding::E_UTF8>(str));
    }
    CATCH
}

bool Player::SendCustomForm(System::String ^ json,
                            CustomForm_callback ^ callback)
{
    __func = callback;
    auto dgfunc = gcnew dgCustomForm_Func(this, &Player::CustomForm_Func);
    GCHandle gch = GCHandle::Alloc(dgfunc);
    auto pfunc = static_cast<void (*)(std::string)>(
        Marshal::GetFunctionPointerForDelegate(dgfunc).ToPointer());
    return NativePtr->sendCustomFormPacket(
        marshalString<Encoding::E_UTF8>(json),
        pfunc);
}

} // namespace MC