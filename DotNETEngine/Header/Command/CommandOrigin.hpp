#pragma once
#include <MC/CommandOrigin.hpp>
#include "../MC/Types.hpp"

namespace MC
{
ref class CommandArea;
ref class CommandPositionFloat;
ref struct CommandOriginData;
ref struct CommandOriginIdentity;
ref class NetworkIdentifier;
ref class Level;
ref class ServerPlayer;
ref class CompoundTag;
ref class Vec3;
ref class Vec2;
ref class Dimension;
ref class Actor;
} // namespace MC

namespace MC
{

public
ref class CommandOrigin : ClassTemplate<CommandOrigin, ::CommandOrigin>
{
public:
    __ctor(CommandOrigin, ::CommandOrigin);

    inline CommandOrigin ^ Clone();
    inline CommandOriginData ^ ToCommandOriginData();
    inline void UpdateValues();
    inline Vec3 ^ GetExecutePosition(int a0, CommandPositionFloat ^ a1);
    inline CompoundTag ^ Serialize();
    CommandArea ^ GetAreaAt(BlockPos ^ bp0, BlockPos ^ bp1, int a0, bool a1);
    CommandArea ^ GetAreaAt(BlockPos ^ bp0, int a0);
    CommandArea ^ GetAreaAtWithBuffer(BlockPos ^ bp0, BlockPos ^ bp1, int a0, bool a1);
    CommandArea ^ GetAreaAtWithBuffer(BlockPos ^ bp0, int a0);

    property ServerPlayer ^ Player { ServerPlayer ^ get(); };
    property String ^ RequestId { String ^ get(); };
    property String ^ Name { String ^ get(); };
    property BlockPos ^ BlockPosition { BlockPos ^ get(); };
    property Vec3 ^ WorldPosition { Vec3 ^ get(); };
    property Vec2 ^ Rotation { Vec2 ^ get(); };
    property MC::Level ^ Level { MC::Level ^ get(); };
    property Dimension ^ Dimension { MC::Dimension ^ get(); };
    property Actor ^ Entity { Actor ^ get(); };
    property BlockPos ^ CursorHitBlockPos { MC::BlockPos ^ get(); };
    property Vec3 ^ CursorHitPos { Vec3 ^ get(); };
    property CommandOrigin ^ OutputReceiver { CommandOrigin ^ get(); };
    property CommandOriginIdentity ^ Identity { CommandOriginIdentity ^ get(); };
    property NetworkIdentifier ^ SourceId { NetworkIdentifier ^ get(); };
    property Mce::UUID ^ UUID { Mce::UUID ^get();void set( Mce::UUID ^value); };

    // property CommandPermissionLevel PermissionsLevel
    //{
    //     CommandPermissionLevel get();
    // };
    property bool HasChatPerms
    {
        bool get();
    }
    property bool HasTellPerms
    {
        bool get();
    }
    inline bool CanUseAbility(int _EnumAbilitiesIndex);
    property bool IsWorldBuilder
    {
        bool get();
    }
    property bool CanUseCommandsWithoutCheatsEnabled
    {
        bool get();
    }
    property bool IsSelectorExpansionAllowed
    {
        bool get();
    }
    property unsigned char SourceSubId
    {
        unsigned char get();
    }
    property int OriginType
    {
        int get();
    };
    property bool IsValid
    {
        bool get();
    };
};
} // namespace MC