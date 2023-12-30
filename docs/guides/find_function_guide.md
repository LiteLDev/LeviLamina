# Find Function Guide

This article will introduce how to understand the functions in BDS and how to find the functions you want in BDS.

## How to Start?

Before you begin, it's best if you have already read the [Hook Guide](../guides/hook_guide.md). You should also have some understanding of C++ and low-level knowledge.

### Tools Needed

`IDA Pro`: Used for decompiling the binary files of BDS.
!!! Note
    If you haven't purchased IDA Pro, you can use [IDA Free](https://hex-rays.com/ida-free/), but IDA Free does not have the feature to decompile functions into C language.

## Why Understand BDS Functions?

Imagine a scenario where you need to get a player's coordinates, how would you do it?

Obviously, if you have opened IDA Pro and looked at the generated function list, you would find that BDS is highly object-oriented. And if you have searched for `Player`, you would discover many functions in this class, but not see functions like `getPos` or `getPosition`.

Why is that?

At this point, if we open LeviLamina’s [`Fake Header`](https://github.com/LiteLDev/LeviLamina/blob/develop/src/mc/world/actor/player/Player.h#L54C30-L54C30) file about the Player class, we find that the class is defined like this:

```cpp
class Player : public ::Mob {
...
};
```

Clearly, Player inherits from the Mob class, which in turn inherits from Actor. In the Actor class, we finally find the function:

```cpp
class Vec3 const& getPosition() const;
```

We guess the possible function of this function based on its name, and the return value is a reference of type `Vec3`, which meets our expectations.

However, to be more certain of the function's role, we need to look at its implementation.

We open IDA Pro and search for `Actor::getPosition`.

IDA Pro gives us this result:

=== "Assembly"

    ```ASM
    .text:00000001415B8D50 ; const struct Vec3 *__fastcall Actor::getPosition(Actor *__hidden this)
    .text:00000001415B8D50 ?getPosition@Actor@@QEBAAEBVVec3@@XZ proc near
    .text:00000001415B8D50                                         ; CODE XREF: BarterGoal::_getThrowVector(void)+96↑p
    .text:00000001415B8D50                                         ; BarterGoal::_getThrowVector(void)+A6↑p ...
    .text:00000001415B8D50                 sub     rsp, 28h
    .text:00000001415B8D54                 mov     rax, [rcx+2A0h]
    .text:00000001415B8D5B                 test    rax, rax
    .text:00000001415B8D5E                 jz      short loc_1415B8D65
    .text:00000001415B8D60                 add     rsp, 28h
    .text:00000001415B8D64                 retn
    .text:00000001415B8D65 ; ---------------------------------------------------------------------------
    .text:00000001415B8D65
    .text:00000001415B8D65 loc_1415B8D65:                          ; CODE XREF: Actor::getPosition(void)+E↑j
    .text:00000001415B8D65                 call    ?terminate@details@gsl@@YAXXZ ; gsl::details::terminate(void)
    .text:00000001415B8D65 ; ---------------------------------------------------------------------------
    .text:00000001415B8D6A                 db 0CCh
    .text:00000001415B8D6A ?getPosition@Actor@@QEBAAEBVVec3@@XZ endp
    ```

=== "Pseudocode"
    ```cpp
    const struct Vec3 *__fastcall Actor::getPosition(Actor*this)
    {
    const struct Vec3 *result; // rax

    result = (const struct Vec3 *)*((_QWORD *)this + 84);
    if ( !result )
        gsl::details::terminate(this);
    return result;
    }
    ```

This function is very simple; it returns a pointer of type `Vec3`. This pointer is the `this` pointer plus an offset `84`.

Based on experience, a pointer to an object plus an offset is often a member variable.

Our subsequent practice proved that this function indeed returns the player's coordinates (or the coordinates of an entity).

In fact, this function is very simple, the naming of the function is also very intuitive, and the process of finding it is also straightforward. In our development, relying on such a method to find the target is the most basic skill.

## How to Find Functions After Determining the Plugin Purpose?

Sometimes, our purpose in finding functions is not to call them, but to modify their behavior to meet our needs.

For example, if we want to implement a feature where player chat content is forwarded to the console, we need to find the function in BDS that handles player chat. (Yes, native BDS does not have this feature)

So, how do we find this function?

By consulting resources, we know that the communication between the Minecraft Bedrock Edition client and the server uses the `RakNet` protocol, and the `RakNet` protocol uses the `UDP` protocol.

This means that BDS will receive packets from the client.

It is known from research that the packet handling chat is `TextPacket`. We open IDA Pro and search for `TextPacket`.

We successfully find the function that receives `TextPacket`:

```cpp
public: virtual void __cdecl ServerNetworkHandler::handle(class NetworkIdentifier const & __ptr64,class TextPacket const & __ptr64) __ptr64
//symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z
```

Using the knowledge we learned in the [Hook Guide](../guides/hook_guide.md), we can easily hook this function to achieve our functionality. (Right?)

Well, actually, we encounter a second problem: there doesn't seem to be a `std::string` type parameter here, and we seem unable to get the player's chat content.

But is that really the case?

We open IDA Pro and look at the pseudocode of this function:

```cpp
void __fastcall ServerNetworkHandler::handle(
        ServerNetworkHandler *this,
        const struct NetworkIdentifier *a2,
        const struct TextPacket *a3)
{
  const struct Player *v5; // rax
  const struct Player *v6; // rdi
  const struct PlayerCapabilities::ISharedController *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int128 v11; // [rsp+28h] [rbp-D8h] BYREF
  int v12; // [rsp+38h] [rbp-C8h]
  char *v13; // [rsp+40h] [rbp-C0h] BYREF
  char v14; // [rsp+C0h] [rbp-40h]
  char v15; // [rsp+C8h] [rbp-38h]
  char v16[16]; // [rsp+D0h] [rbp-30h] BYREF
  char v17[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v18; // [rsp+100h] [rbp+0h]
  int v19; // [rsp+110h] [rbp+10h]
  char v20; // [rsp+118h] [rbp+18h]
  __int128 v21; // [rsp+120h] [rbp+20h]
  __int64 v22; // [rsp+130h] [rbp+30h]
  char v23[32]; // [rsp+138h] [rbp+38h] BYREF
  __int16 v24; // [rsp+158h] [rbp+58h]

  v5 = (const struct Player *)(*(__int64 (__fastcall **)(char *, const struct NetworkIdentifier *, _QWORD))(*((_QWORD *)this - 2) + 8i64))(
                                (char *)this - 16,
                                a2,
                                *((unsigned __int8 *)a3 + 16));
  v6 = v5;
  if ( v5 )
  {
    PlayerCapabilities::PlayerData::PlayerData((PlayerCapabilities::PlayerData *)v16, v5);
    v7 = (const struct PlayerCapabilities::ISharedController *)(*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 9)
                                                                                                 + 2200i64))(**((_QWORD **)this + 9));
    if ( TextPacket::_shouldHandleTextPacketForPlayer(a3, (struct PlayerCapabilities::IPlayerData *)v16, v7) )
    {
      if ( *((_BYTE *)a3 + 48) == 1 && (!*((_QWORD *)a3 + 13) || *(_BYTE *)std::string::at((char *)a3 + 88, 0i64) != 47) )
      {
        EntityContext::getWeakRef((char *)v6 + 8, &v11);
        std::string::string(v17, (char *)a3 + 88);
        v18 = 0i64;
        if ( *((_QWORD *)&v11 + 1) )
        {
          v18 = v11;
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12i64));
        }
        v19 = v12;
        v20 = 0;
        v21 = 0i64;
        v22 = 0i64;
        std::string::string(v23, (char *)a3 + 56);
        v24 = 257;
        v9 = *((_QWORD *)&v11 + 1);
        if ( *((_QWORD *)&v11 + 1)
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12i64), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9);
        }
        v10 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 9) + 1440i64))(**((_QWORD **)this + 9));
        v13 = v17;
        v14 = 0;
        v15 = 0;
        if ( (unsigned int)ServerNetworkEventCoordinator::sendEvent(v10, &v13) == 1 )
          ServerNetworkHandler::_displayGameMessage(
            (ServerNetworkHandler *)((char *)this - 16),
            v6,
            (struct ChatEvent *)v17);
        ChatEvent::~ChatEvent((ChatEvent *)v17);
      }
    }
    else if ( *((_QWORD *)a3 + 13) > 0x200ui64 )
    {
      v8 = (*(__int64 (__fastcall **)(const struct Player *))(*(_QWORD *)v6 + 2048i64))(v6);
      (*(void (__fastcall **)(__int64, const struct Player *, __int64))(*(_QWORD *)v8 + 968i64))(v8, v6, 1i64);
    }
  }
}
```

It looks complicated, right?

But we don't need to understand it all at once. We just need to be clear about the information we need to get: the `Player` and the `chat content`.

And the chat content is likely of type `std::string`. We can search for `std::string` in this function and find this segment:

```cpp
std::string::string(v17, (char *)a3 + 88);

...

std::string::string(v23, (char *)a3 + 56);
```

There are so many string constructors, but we notice that v23 does not have subsequent calls, while v17 does. We can guess that v17 is the string we want.

The following code:

```cpp
if ( (unsigned int)ServerNetworkEventCoordinator::sendEvent(v10, &v13) == 1 )
          ServerNetworkHandler::_displayGameMessage(
            (ServerNetworkHandler *)((char *)this - 16),
            v6,
            (struct ChatEvent *)v17);
```

also greatly supports our guess.

And the Player can be easily obtained from the first line:

```cpp
v5 = (const struct Player *)(*(__int64 (__fastcall **)(char *, const struct NetworkIdentifier *, _QWORD))(*((_QWORD *)this - 2) + 8i64))(
                                (char *)this - 16,
                                a2,
                                *((unsigned __int8 *)a3 + 16));
```

This is clearly a call to a virtual function, eventually returning a Player pointer.

We could copy this directly, but it’s not elegant.

And by consulting LeviLamina's information about [ServerNetworkHandler](https://github.com/LiteLDev/LeviLamina/blob/develop/src/mc/network/ServerNetworkHandler.h#L57C1-L63C6), we can know that the ServerNetworkHandler class provides a virtual function `_getServerPlayer`, which is used to get a player pointer. But, as seen in the pseudocode and the above context, directly calling _getServerPlayer is not feasible; we need to make a -16 offset to the NetworkIdentifier pointer to correctly get the player pointer. For convenience, LeviLamina provides a wrapper, and we can skip this step and directly use this wrapper to get the player pointer.

Thus, we have achieved our goal. We can hook this function to implement our feature.

The specific code implementation is omitted due to space constraints.

And in the new version, LeviLamina has provided some structural information about the packets. You can see in [TextPacket.h](https://github.com/LiteLDev/LeviLamina/blob/19e0aeb44c13967307bb1ed0795325fca41e0e48/src/mc/network/packet/TextPacket.h#L13) that LLDEV has completed the structure information of this packet.

```cpp
std::string              mMessage;    // this+0x58
```

Using this, we can directly use `textPacket.mMessage` instead of the offset to get the player's chat content.

!!! Danger
    However, it is important to note that we are not the official source, and the structural information we provide may not be entirely accurate. The structure may change with version updates, and we may not update it in time. Therefore, when using structures to replace offsets, you must be careful!
    Of course, if you discover such issues, you are welcome to submit a PR.

## Conclusion

This article introduced how to understand the functions in BDS and how to find the functions you want in BDS.

In fact, this tutorial can only be an introductory guide. In actual development, you will encounter more difficult conditions and situations, which require you to make more effort, learn more knowledge, and solve more problems.

I hope this tutorial can help you, and wish you a pleasant development!
