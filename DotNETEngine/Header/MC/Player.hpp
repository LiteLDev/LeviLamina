#pragma once
#include <MC/Player.hpp>
#include "Mob.hpp"

namespace MC
{
ref class Attribute;
ref class NetworkIdentifier;
ref class Certificate;
ref struct ScorePacketInfo;
ref class BlockPos;
ref class Vec3;
ref class Mob;
ref class Container;
ref class ItemStack;
ref class CompoundTag;
} // namespace MC

namespace MC
{
public
ref class Player : Mob
{
public:
    __ctor_base(Player, ::Player, Mob);

    enum class PositionMode : char
    {
        NORMAL,
        RESPAWN,
        TELEPORT,
        HEAD_ROTATION,
    };

    property String ^ Name { String ^ get(); };
    property String ^ RealName { String ^ get(); };
    property System::String ^ Uuid { String ^ get(); };
    property unsigned char ClientSubId
    {
        unsigned char get();
    };
    property System::String ^ DeviceTypeName { String ^ get(); };
    property int AvgPing
    {
        int get();
    }
    property int LastPing
    {
        int get();
    }
    property String ^ IP { String ^ get(); };
    property String ^ LanguageCode { String ^ get(); };
    property String ^ ServerAddress { String ^ get(); };
    property NetworkIdentifier ^ NetworkIdentifier { MC::NetworkIdentifier ^ get(); };
    property Certificate ^ Certificate { MC::Certificate ^ get(); };
    property Container ^ EnderChestContainer { Container ^ get(); };
    property Pair<MC::BlockPos ^, int> RespawnPosition
    {
        Pair<MC::BlockPos ^, int> get();
    };
    property float AvgPacketLoss
    {
        float get();
    }
    property System::String ^ ClientId { String ^ get(); };
    property int DeviceType
    {
        int get();
    }
    property bool IsOP
    {
        bool get();
    }

    inline bool Kick(System::String ^ msg);
    inline bool CrashClient();
    /// <param name="type">:default = TextType::RAW</param>
    inline bool SendText(System::String ^ text, TextType type);

    inline bool TalkAs(System::String ^ msg);
    inline bool GiveItem(ItemStack ^ item);
    inline int ClearItem(System::String ^ typeName);
    inline bool Runcmd(System::String ^ cmd);
    inline bool TransferServer(System::String ^ address, unsigned short port);
    inline bool SetSidebar(System::String ^ title, List<System::Tuple<System::String ^, int> ^> ^ data, ObjectiveSortOrder sortOrder);
    inline bool RemoveSidebar();
    inline CompoundTag ^ GetNbt();
    inline bool SetNbt(CompoundTag ^ nbt);
    inline bool RefreshAttribute(Attribute ^ attribute);
    inline bool RefreshAttributes(List<Attribute ^> ^ attributes);

    inline int GetScore(System::String ^ key);
    inline bool SetScore(System::String ^ key, int value);
    inline bool AddScore(System::String ^ key, int value);
    inline bool ReduceScore(System::String ^ key, int value);
    inline bool DeleteScore(System::String ^ key);
    // Packet
    /// <param name="Type">:default = TextType::RAW</param>
    inline bool SendTextPacket(System::String ^ text, TextType Type);
    inline bool SendTitlePacket(System::String ^ text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration);
    inline bool SendNotePacket(unsigned int tone);
    /// <param name="EntityUniqueID">:default = -1</param>
    inline bool SendSpawnParticleEffectPacket(Vec3 ^ spawnPos, int dimid, System::String ^ ParticleName, int64_t EntityUniqueID);
    /*bad*/ inline bool SendPlaySoundPacket(System::String ^ SoundName, Vec3 ^ Position, float Volume, float Pitch);


    inline bool SendTransferPacket(System::String ^ address, short port);
    inline bool SendSetDisplayObjectivePacket(System::String ^ title, System::String ^ name, char sortOrder);
    inline bool SendSetScorePacket(char type, List<ScorePacketInfo ^> ^ data);
    /// <param name="overlay">:default = 0</param>
    inline bool SendBossEventPacket(BossEvent type, System::String ^ name, float percent, BossEventColour colour, int overlay);
    inline bool SendCommandRequestPacket(System::String ^ cmd);
    inline bool SendTextTalkPacket(System::String ^ msg);

    inline bool SendRawFormPacket(unsigned formId, System::String ^ data);
    delegate void callBackFunc_int(int);
    inline bool SendSimpleFormPacket(System::String ^ title, System::String ^ content, List<System::String ^> ^ buttons, List<System::String ^> ^ images, callBackFunc_int ^ callback);
    delegate void callBackFunc_bool(bool);
    inline bool SendModalFormPacket(System::String ^ title, System::String ^ content, System::String ^ button1, System::String ^ button2, callBackFunc_bool ^ callback);
    delegate void callBackFunc_String(std::string);
    inline bool SendCustomFormPacket(
        System::String ^ data,
        callBackFunc_String ^ callback);

    inline static bool IsValid(Player ^ player);
    delegate void ModalForm_callback(bool);
    delegate void SimpleForm_callback(int);
    delegate void CustomForm_callback(System::String ^);


private:
public:
    bool SendModalForm(System::String ^ title,
                       System::String ^ content,
                       System::String ^ button1,
                       System::String ^ button2,
                       ModalForm_callback ^ callback);

    bool SendSimpleForm(System::String ^ title,
                        System::String ^ content,
                        List<System::String ^> ^ buttons,
                        List<System::String ^> ^ images,
                        SimpleForm_callback ^ callback);

private:
    inline void NATIVECALLBACK CustomForm_Func(std::string str);
    delegate void dgCustomForm_Func(std::string);
    CustomForm_callback ^ __func;

public:
    bool SendCustomForm(System::String ^ json, CustomForm_callback ^ callback);
};

} // namespace MC