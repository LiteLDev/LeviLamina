# 找函数指南

本篇将介绍如何理解 BDS 中的函数的作用，以及如何在 BDS 中找到你想要的函数。

## 如何开始？

在开始之前，你最好已经阅读了[Hook指南](../guides/hook_guide.md)。并且对 C++ 和底层知识有一定的了解。

### 需要的工具

`IDA Pro`：用于反编译 BDS 的二进制文件。
!!! Note
    如果你没有购买 IDA Pro，可以使用[IDA Free](https://hex-rays.com/ida-free/)，但是 IDA Free 没有将函数反编译为C语言的功能。

## 为什么要理解BDS的函数？

试想一个场景，你需要获取玩家的坐标，你会怎么做？

很明显，如果你打开过 IDA Pro，查看过生成的函数列表，你会发现 BDS 是高度面向对象的，而如果你搜索过 `Player`, 这个关键词，你会发现这个类里有很多的函数，但是却没看到 `getPos`，`getPosition` 这样的函数。

为什么呢？

这时候，我们打开 LeviLamina 关于 Player 类的 [`Fake Header`](https://github.com/LiteLDev/LeviLamina/blob/develop/src/mc/world/actor/player/Player.h#L54C30-L54C30) 文件，你会发现这个类的定义是这样的：

```cpp

class Player : public ::Mob {
...
};

```

很明显，Player 继承了 Mob 类，而依次类推，Mob 又是继承的 Actor，在 Actor 类中，我们终于找到了

```cpp
class Vec3 const& getPosition() const;
```

这样一个函数，我们依靠函数的名称猜测出这个函数可能的作用，并且返回值是一个 `Vec3` 类型的引用，这更符合我们的预期。

但是，为了更加确信这个函数的作用，我们还需要查看这个函数的实现。

我们打开IDA Pro，搜索 `Actor::getPosition`

IDA Pro给出这样的结果：

=== "汇编"
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

=== "伪代码"
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

这个函数的实现非常简单，它返回了一个 `Vec3` 类型的指针，这个指针是 `this` 指针加上偏移量 `84` 的值。

根据经验，一个对象指针加上一个偏移量，那么这个多半是一个成员变量。

而后续我们的实践证明了，这个函数确实是返回了玩家的坐标（或者说这个函数用于返回一个实体的坐标）。

事实上，这个函数非常简单，函数的命名也十分直观，寻找到它的过程也非常简单，而在我们的开发中，依靠这样的方法来寻找目标是最基本的技能。

## 确定插件目的后，如何寻找函数？

有时候，我们寻找函数的目的不是为了调用，而是为了修改函数的行为，使其符合我们的需求。

例如，如果我们想要实现一个功能，玩家聊天的内容转发到控制台，我们就需要找到BDS中处理玩家聊天的函数。（是的，原生BDS并没有这个功能）

那么，我们该如何寻找这个函数呢？

通过查阅资料，我们知道 Minecraft 基岩版客户端与服务端之间的通信使用的是 `RakNet` 协议，而 `RakNet` 协议使用的是 `UDP` 协议。

这就意味着，BDS 中会收到来自客户端的数据包。

查阅资料可知，处理聊天的数据包是 `TextPacket` ，我们打开 IDA Pro，搜索 `TextPacket` 。

顺利的找到了收取 `TextPacket` 的函数：

```cpp
public: virtual void __cdecl ServerNetworkHandler::handle(class NetworkIdentifier const & __ptr64,class TextPacket const & __ptr64) __ptr64
//symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z
```

利用我们在[Hook指南](../guides/hook_guide.md)中学到的知识，我们可以很容易的 Hook 这个函数，实现我们的功能。（吗？）

好吧，事实上我们遇到第二个问题，这里似乎没有一个 `std::string` 类型的参数，我们似乎无法获取到玩家的聊天内容。

但是真的如此吗？

我们打开 IDA Pro，观察这个函数的伪代码：

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

看起来很复杂哈？

但是我们并不需要一次性全部理解，我们只需要明确我们需要获取的信息：`玩家`，`聊天内容`。

而，聊天内容大抵是`std::string`类型的，我们可以在这个函数中搜索`std::string`，找到这样一段代码：

```cpp
std::string::string(v17, (char *)a3 + 88);

...

std::string::string(v23, (char *)a3 + 56);
```

好吧，光是字符串的构造函数有这么多，但是我们观察到 v23 并没有后续的调用，而 v17 却有，我们可以猜测 v17 是我们想要的字符串。

而下文的代码：

```cpp
if ( (unsigned int)ServerNetworkEventCoordinator::sendEvent(v10, &v13) == 1 )
          ServerNetworkHandler::_displayGameMessage(
            (ServerNetworkHandler *)((char *)this - 16),
            v6,
            (struct ChatEvent *)v17);
```

也极大的支持了我们的猜测。

而 Player 也很容易的从第一行可以得到：

```cpp
v5 = (const struct Player *)(*(__int64 (__fastcall **)(char *, const struct NetworkIdentifier *, _QWORD))(*((_QWORD *)this - 2) + 8i64))(
                                (char *)this - 16,
                                a2,
                                *((unsigned __int8 *)a3 + 16));
```

这很明显是一个虚函数的调用，最终返回了一个 Player 指针。

我们可以直接抄下来，但是这样很不优雅。

而查阅 LeviLamina 提供的有关 [ServerNetworkHandler](https://github.com/LiteLDev/LeviLamina/blob/develop/src/mc/network/ServerNetworkHandler.h#L57C1-L63C6) 的内容
我们可以得知，ServerNetworkHandler 类提供了一个虚函数 `_getServerPlayer`，这个函数的作用是获取一个玩家的指针。
但是，上下文中的：

```cpp
    // Do not use _getServerPlayer directly
    // Please get SubID from the packet
    [[nodiscard]] inline optional_ref<ServerPlayer>
    getServerPlayer(class NetworkIdentifier const& source, ::SubClientId subId) {
        auto& handler = ll::memory::dAccess<ServerNetworkHandler>(this, -16);
        return {handler._getServerPlayer(source, subId)};
    }
```

和前面的伪代码可以看出，直接调用 _getServerPlayer 并不可行，我们需要对NetworkIdentifier 指针做一个 -16 的偏移才能正确的获取玩家指针，为了方便开发，LeviLamina提供了一个封装，我们可以跳过这个步骤，直接使用这个封装来获取玩家的指针。

就此，我们已经实现了我们的目标，我们可以Hook这个函数，实现我们的功能。

具体的代码实现，限于篇幅，不再赘述。

而LeviLamina在新版本提供了部分数据包的结构体信息，你可以在 [TextPacket.h](https://github.com/LiteLDev/LeviLamina/blob/19e0aeb44c13967307bb1ed0795325fca41e0e48/src/mc/network/packet/TextPacket.h#L13) 中看到，LLDEV 已经补全了这个数据包的结构体信息。

```cpp
std::string              mMessage;    // this+0x58
```

利用这个，我们可以直接使用 `textPacket.mMessage` 代替偏移来获取玩家的聊天内容。

!!! Danger
    但是我们不是官方，提供的结构体信息并不一定完全正确，可能随着版本的更新，这个结构体会发生变化，而我们可能没有及时更新，所以，使用结构体替代偏移的时候，一定要注意！
    当然，如果你发现了这样的问题，欢迎提交PR。

## 总结

本篇介绍了如何理解 BDS 中的函数的作用，以及如何在 BDS 中找到你想要的函数。

事实上，本教程只能是一个入门教程，实际开发中你会遇到更加困难的条件和情况，这就需要你付出更多的努力，去学习更多的知识，去解决更多的问题。

希望本教程能够帮助到你，祝你开发愉快！
