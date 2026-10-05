# 设置屏注册表与工厂构建时上下文过滤

> 调研版本：26.51 client（`26.51_client.i64`）
> 关键代码：`Settings::Registry` / `Settings::IRegistry`（`mc/client/settings/Registry.h`、`IRegistry.h`）、
> `Settings::RegistryBuilder::IBuilderContext`（`mc/client/settings/IBuilderContext.h`）、
> `Settings::FactoryUtil`（`mc/client/settings/FactoryUtil.h`）、
> `ClientInstance::getSettingsRegistry`（注册表缓存点）

## 1. 是什么

26.51 的设置屏是 OreUI（React）+ 数据驱动：UI 侧不硬编码任何选项，全部通过
`vanilla.menus.settingsGroupQuery(tabId)` 从 `Settings::IRegistry` 拉数据渲染。
注册表的核心结构是 **组键 → 组件 variant 列表**：

- `Settings::Registry::mSettingsFactories`：`组键 → 工厂函数`。工厂签名
  `std::vector<std::unique_ptr<std::variant<...9 种组件...>>>()`，即每次调用产出一组的全部组件。
- `Settings::Registry::mSettingsMap`：组键 → 已物化的组件列表。`getSettingsGroup(id)`
  首次调用时跑工厂物化并缓存。

组件 variant 共 9 种（`SettingsType`）：

| variant | SettingsType | 用途 |
|---|---|---|
| `NumberComponent<int>` / `NumberComponent<float>` | Number = 0 | 数值（滑块/输入框） |
| `BooleanComponent` | Boolean = 1 | 开关 |
| `StringComponent` | String = 2 | 文本输入 |
| `OptionComponent` | Option = 3 | 下拉/选项组 |
| `ActionComponent` | Action = 4 | 按钮（如"制作团队""复制文本"） |
| `TextComponent` | Text = 5 | 纯文本/小节标题 |
| `GroupInfoComponent` | GroupInfo = 6 | 组引用（tab、小节） |
| `BannerComponent` | Banner = 7 | 横幅（如"本世界中无法获得成就"） |

注意 variant 索引与 `SettingsType` **不是恒等映射**（Number 拆成 int/float 两个 variant），
JS 侧按 `SettingsType` 解析渲染器。

### 层级：rail → tab → 小节 → 内容组

- 左侧栏 rail 本身是一个组：`"settings-tabs-groups"`（`SettingsConstants::GROUP_OF_GROUPS_ID`），
  由 `SettingsTabsFactory` 构建，每个 tab 是一个
  `GroupInfoComponent(id="settings-*-group", 标题 loc 键)`。
- tab id 实测：`settings-core-group`、`settings-game-group`、`settings-realms-group`、
  `settings-controls-group`、`settings-social-group`、`settings-general-group`、
  `settings-addons-group`、`settings-debug-group`；另有 `-jsonui` 后缀的旧版内嵌页
  （`storage-jsonui`、`global_resources-jsonui` 等）。
- tab 内容 = 注册表里与 tabId 同名的组；其中 `type == GroupInfo` 的项是小节，
  小节再引用内容组（如 `general`、`game.general`、`video.general`）。
- JS 路由为 `/oreui-settings/:tab`。

## 2. 工厂构建时的上下文过滤（本文档核心）

注册表内容**不是静态表**。每个组的工厂在运行时根据
`Settings::RegistryBuilder::IBuilderContext` 的谓词决定产出哪些组件——
"游戏内设置比主菜单多两个选项"这类差异全部来自这一层：工厂在 `isPreGame()` 为 true
（主菜单）时不产出世界相关组件（世界名称、难度、默认游戏模式等）。

谓词按用途分类（全部见 `IBuilderContext.h`，均为纯虚）：

### 游戏会话状态

| 谓词 | 含义 |
|---|---|
| `isPreGame()` | 在主菜单 / 未进世界。**最常用的过滤条件** |
| `hasLocalPlayer()` | 是否有本地玩家（是否已进世界） |
| `isMultiplayerClient()` | 是否为多人游戏客户端 |
| `hasCommands()` | 是否有命令系统（世界内） |
| `isEligibleForPauseFeature()` | 是否满足暂停特性条件（单人世界等） |
| `isGamePlayTipsEnabled()` | 游戏提示是否开启 |

### Realms / 账户

| 谓词 | 含义 |
|---|---|
| `isInRealms()` | 当前在 Realm 中 |
| `isRealmsEnabled()` | Realms 功能可用 |
| `isRealmsOwner()` | 是 Realm 所有者 |
| `isRealmsFeatureEnabled(featureName)` | 指定 Realms 特性开关 |
| `canUserDoActionForCurrentRealm(action)` | 对当前 Realm 的权限 |
| `isConfigurableRealmsEnvironment()` | Realm 环境可配置 |
| `isSignedInToXBL()` | 已登录 Xbox Live |
| `shouldShowSignOutOfMicrosoftAccount()` | 是否展示登出微软账户 |

### 平台 / 输入 / 分屏

| 谓词 | 含义 |
|---|---|
| `supportsKeyboardAndMouse()` / `supportsGamepad()` / `supportsTouch()` | 平台支持的输入方式（控制"键盘和鼠标/控制器/轻触"组是否出现） |
| `getCurrentInputMode()` | 当前输入模式 |
| `supportsFullScreen()` / `supportsUserDefinedSafeZone()` / `supportsSetClipboard()` | 平台能力 |
| `isSplitScreenActive()` / `supportsSplitScreen()` / `isPrimaryClient()` | 分屏状态 |
| `isConsolePlatform()` / `isDesktopPlatform()` | 平台类型 |
| `isTrial()` | 试用版 |
| `isEduEdition()` | 教育版 |

### 编辑器 / 图形 / 其他

| 谓词 | 含义 |
|---|---|
| `isPlayerInEditor()` / `isEditorModeOrInEditorWorld()` | 编辑器相关 |
| `supportsAdvancedGraphics()` / `supportsDeferredGraphics()` / `supportsRayTracing` 系列 | 图形能力（视频组按此过滤） |
| `isFeatureEnabled(FeatureOptionID)` / `isGameFeatureEnabled(MinecraftGameFeatures)` | 通用特性开关 |
| `isTTSEnabled()` / `supportsTTSLanguage(code)` | TTS（可访问性组） |
| `isServerFormDataAvailable()` | 服务器表单数据就绪 |
| `isPartySystemAvailable()` | 队伍系统（社交 tab） |

## 3. 重建时机

工厂过滤是**构建期**的，所以要让内容随上下文变化，必须重建：

- 注册表由 `ClientInstance::getSettingsRegistry` **惰性构建并缓存**（整个
  `shared_ptr<IRegistry>` 缓存为 ClientInstance 成员）。
- **世界进出等上下文切换会重建注册表**（新实例内是原版工厂）。这一点已实测验证：
  在 enable 时对注册表做的注入，进世界后被冲掉——因为拿到的是新实例。
- `Registry::refresh()` / `refresh(id)` **只发变更通知、不重跑工厂**，不是内容变化的来源。
- `registerSettingsFactory` 内部是 `try_emplace`：**同键重注册无效**。要包装已有工厂，
  需直接给 `mSettingsFactories[key]` 赋值覆盖。

因此对注入方的要求：**注入必须在注册表每次（重）构建后重放**（CoralMap PoC 用 hook
`getSettingsRegistry` 实现，返回前检查并重新挂接）。

## 4. 组件级运行时显隐（轻量路径）

不重建的显隐走 `ComponentState`（`Hidden = 0, Disabled = 1, Enabled = 2`）：
单个组件订阅其 option / 上下文变化**实时**翻转状态（条件置灰/隐藏）。
组件默认状态 = `dataProvider->canModify() + 1`（不可改 → Disabled）。

## 5. 已验证的坑

- **组件必须由游戏侧构造**：LL 头文件里 `Settings::Component<T>` 基类是空壳 stub，
  真实组件约 976 字节，在 mod 侧构造会堆损坏。用 MCAPI 的
  `Settings::FactoryUtil::addBoolean / addOption / addInputBoolean / addInputFloatComponent`
  （参数：父 vector、id、`OptionID`、`IOptionRegistry&`、可选 data provider）。
- **跨分配器释放会崩**：在 mod DLL 里 `clear()` / 销毁游戏分配的组件 = 0xC0000005。
- **OptionID 固定 822 槽**（`BaseOptionRegistry::mOptions` 为
  `std::array<..., 822>`），`_registerOption` 按 Option 自带的 mID 入槽；需先扫空槽。
  `BoolOption(OptionID, OptionOwnerType::User, OptionResetFlags::None, captionId, saveTag, 默认值)`
  MCAPI 可用（LL_PLAT_C）。
- **EnumOption 以 const 引用持有 ValueNameMap**——构造时传入的
  `unordered_map<int,string>` 必须比 Option 活得久且地址稳定（局部变量会在
  `OptionsDataProvider::_updateData` 读取时悬垂崩溃，0xC0000005 实测）。
  做法：map 放进永不搬迁的容器（如 deque）随管理器存活。
- **BoolOption/IntOption 注册晚于 options.txt 加载**——游戏不会为后注册的选项回读
  存档值；需要自己持久化并用 `set(value, false)` 恢复（观察者比对缓存可抑制
  恢复时的 onChange 误触发）。
- **`Bedrock::PubSub::Subscription` 无移动构造**（只有移动赋值，默认构造被生成器
  标记为 prevent）——LL 侧用 `Subscription.cpp` 补默认构造定义 +
  deque（防搬迁）+ 移动赋值持有订阅。
- **浮点滑条必须用 `InputModeFloatOption`**：`addInputFloatComponent` 的 provider
  工厂（`createInputFloatDataProvider`）检查 `option->mOptionType == InputModeFloat(3)`，
  普通 `FloatOption(2)` 直接返回 nullopt，组件构造时崩溃。`InputModeFloatOption`
  构造函数是 MCAPI（id, owner, reset, captionId, saveTag, 默认值, min, max），
  DELTA（步长）为 const 成员，构造后 const_cast 写入。值按 InputMode 分桶
  （mValues map），统一用 `InputMode::Mouse` 读写。
  （先前"手写 FloatOption + 借 vftable"的方案因此废弃——根本不需要 FloatOption。）
- **StringComponent 必须给 mMaxLength**：OreUI 文本框的 placeholder 显隐判断是
  `value.slice(0, maxLength) !== "" || focused`——maxLength 缺失序列化成 JS null 时
  `slice(0, null) === ""`，placeholder 在失焦后永远显示。Builder\<StringComponent\>
  尾部：mDataProvider @0x178、mPlaceholder @0x180（has @0x1A0）、**mMaxLength @0x1A8**
  （has @0x1B0）、optional\<function\> @0x1B8、vector @0x200。
- **InputModeFloatOption::set 只发 mInputModeChangedPublisher**（Option::registerObserver
  订的是 mValueChangedPublisher，收不到）；且其 DELTA 是变更检测阈值而非 UI 步长。
- **JS 渲染器解析顺序**：`uiComponents[id]`（特例）→ `dataComponents[type]`（Mue 覆盖
  Boolean/Number/Option/String）→ 兜底 bue（仅 dev 构建可见
  "Component type could not be found"）。

## 6. 新增 tab（左侧栏注入）的完整配方

左侧栏 rail 由 `SettingsTabsFactory.cpp:393` 的 lambda 工厂构建（注册在
`"settings-tabs-groups"` 键下），逐个调用匿名命名空间的
`SettingsTabsFactoryAnon::addTabGroup(vector&, id, titleLocKey)`，并用
IBuilderContext 谓词门控每个 tab（如 Realms tab 只在对应形态出现）。

`addTabGroup`（0x144263eb0）逻辑极简，可在 LL 侧完整复刻：

1. 分配 **976 字节（0x3D0）**（游戏用 Bedrock memoryAllocator，释放路径是全局
   `operator delete(ptr, 0x3D0)`——两者同源，LL 侧 `::operator new(976)` 兼容）；
2. 在偏移 0 处调用 `GroupInfoComponent(id, titleLocKey, nullopt)` 构造函数
   （MCAPI 已有，0x1442271e0）；
3. `*(byte*)(ptr + 0x3C8) = 7`——variant 的 `_Which` 在偏移 0x3C8，
   GroupInfo 的 variant 索引是 7（variant 索引 = 声明顺序：
   Boolean=0, Number\<int\>=1, Number\<float\>=2, Option=3, String=4,
   Action=5, Text=6, GroupInfo=7, Banner=8，**与 SettingsType 枚举不同**）；
4. 包成 `unique_ptr` push_back 进组 vector（只是指针搬运，安全）。

析构路径（游戏侧）：`_Which != 0xFF` 时调组件 vtable[0]（析构），再
`operator delete(ptr, 976)`。LL 侧绝不能用自己（尺寸错误的）variant 类型去析构。

其他注意：

- tab 的 `name` 直接是 loc 键（如 `"options.general"`），自定义 tab 的标题/描述
  文本走 mod resource_packs 的 lang 文件；
- 新 tab 需同时在同注册表注册同名内容组工厂（JS 点击后路由
  `/oreui-settings/:tabId` → `settingsGroupQuery(tabId)` 读同名组）；
- tab 内 `GroupInfoComponent` 小节再引用下层组，可多级嵌套——mod 列表页 →
  各 mod 子页就靠这个；
- `Settings::Builder<T>`（流式构建器）也存在且 `build()` 已导出
  （0x144222c10），但其**构造函数全部被内联**（无符号），mod 侧无法构造
  Builder 实例，不可用；
- 组件运行时通过 `Component<T>::addSubscription` 订阅 option/组件变化驱动
  `refresh` 通知——mod 自定义组件一般不需要。

## 7. LL 实现 getSettings() 的缺口清单

已具备（MCAPI/接口可用）：`Registry` 双 map + `registerSettingsFactory` +
`refresh`、`ClientInstance::$getSettingsRegistry` thunk、`FactoryUtil` 四个
add*`、`GroupInfoComponent`/`TextComponent`/`ActionComponent` 构造函数、
`IOptionRegistry::_registerOption`/`getIfValid`（纯虚接口）、
`BoolOption`/`IntOption`/`StringOption`/`EnumOption` 构造函数（LL_PLAT_C）。

缺失：

| 缺口 | 影响 | 解法 |
|---|---|---|
| `Settings::Component<T>` 基类真实布局（现为 stub） | 所有组件 sizeof 错误，mod 侧 `new` 组件必崩 | 短期：LL core 硬编码 976/0x3C8/索引 复刻 addTabGroup；长期：header 生成器补布局 |
| `FloatOption` 构造函数未导出到头文件 | 无法注册 float 选项（滑条） | 需加白/补头文件 |
| `StringComponent`/`BannerComponent` 构造函数未导出到头文件 | 无法做文本输入/横幅组件 | 需加白/补头文件（如需要） |
| OptionID 仅 822 槽且全局共享 | 多 mod 抢槽冲突 | LL 集中分配（纯 LL 侧设计，不需游戏符号） |

### 7.1 符号清单（26.51 client）

**Component\<T\> 布局**：不是符号问题，是 header 生成的布局数据，无符号可加白。
辅助验证用（已确认存在）：`GroupInfoComponent` 构造函数
`??0GroupInfoComponent@Settings@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@0V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@3@@Z`
（0x1442271e0，LL 已是 MCAPI）——真实布局可从它反推。
短期硬编码值：variant 大小 0x3D0，`_Which` 偏移 0x3C8，variant 索引见第 6 节。

**FloatOption**：构造函数在二进制中被**完全内联，不存在可加白的符号**。vftable
`??_7FloatOption@@6B@` 也未进白名单（`?$vftable@FloatOption@@SAPEAPEAXXZ` 链接不到）。
已在 LL 手工还原构造函数（`FloatOption.h` 声明 + `src-client/mc/options/option_types/
FloatOption.cpp` 定义，LL_PLAT_C 守卫）：`Option(id, owner, reset, captionId, saveTag,
OptionType::Float=2, GameVersion{})` → VALUE_MIN/VALUE_MAX/DELTA=0.001f →
`mValue = mDefaultValue = clamp(默认值)`；vftable 惰性从 options 注册表里的活体
FloatOption 实例借用（原版 `_registerOptions` 里有 type=2 的实例，构造现场实测
DELTA=0.001f）。若日后 vftable 加白可改回 `$vftable()` 直取。

**StringComponent / BannerComponent**：构造函数同样被完全内联，且 vftable
在二进制中没有命名符号（需额外 xref 分析定位）。第一期建议不做这两种组件：
说明文字用 `TextComponent`（ctor 已是 MCAPI），文本输入需求后置。

### 7.2 OptionID 822 槽详解

**机制**：`BaseOptionRegistry::mOptions` 是 `std::array<std::unique_ptr<Option>, 822>`，
游戏编译期定死，不可扩容；`_registerOption` 不做分配，直接以 Option 自带的
mID 作为数组下标入槽。

**硬限制**：

1. FactoryUtil 的 add\* 内部走 `withNameFromOption` → `options->get(gsl::not_null<Option*>, id)`
   ——**无效 OptionID 直接触发 not_null 断言/崩溃**。因此"传假 ID + 自定义
   DataProvider 绕开槽位"不可行，每个经 FactoryUtil 创建的组件都必须有一个
   真实注册的 Option。
2. 槽位全进程共享：原版自身占用大部分（LL 的 OptionID.h 是空枚举，确切用量
   需运行时扫描确定；PoC 实测 821 号槽空闲）。剩余槽是所有 mod 的稀缺资源。
3. 冲突后果：两个 mod 拿到同一槽 → 后注册者覆盖先入槽的 Option，两个设置项
   绑到同一 Option，值互相串、options.txt 读写混乱。
4. 分配竞态：各 mod 各自"从 821 向下扫第一个空槽再注册"，扫描与注册之间
   无同步，两个 mod 会选中同一槽。

**解决方案（分层）**：

1. **LL 集中分配（必须做）**：LL core 提供 OptionID 分配接口，首次使用时
   扫描一次 822 槽记录空闲集，之后加锁分配；mod 不直接扫描/选槽。
   消除冲突与竞态。
2. **声明式注册减少消耗**：LL 的 getSettings API 让 mod 声明条目
   （开关/滑条/下拉），由 LL 统一分配 ID，一个 mod 通常只耗个位数槽。
3. **彻底绕开 OptionID（长期，依赖 7.1 的 Component\<T\> 布局）**：布局补齐后
   mod 可直接构造 BooleanComponent 等并挂**自定义 DataProvider**
   （`IBooleanDataProvider` 是纯虚接口，mod 侧可实现），名称/描述直接给 loc 键
   ——零 OptionID 消耗，值读写走 mod 自己的 `ll::config`，不写 options.txt。
   这也是"mod 自行设计配置界面"最干净的形态。
4. **持久化语义差异**：走 Option 路线的值写入全局 options.txt（跨世界共享）；
   自定义 provider 由 mod 自行持久化——对 mod 配置来说后者本来就更合适。

### 7.3 OptionID 的影响面（26.51 实测）

`_registerOption`（0x140fb47d0）行为：mID >= 822 走 `std::array::_Xran`
（抛 out_of_range，无人捕获即 terminate）；槽位已占用时**静默析构旧 Option
并替换**，无任何报错。OptionOwnerType::Machine 的选项还会挂 per-machine
override source。

OptionID 被以下系统消费：

| 消费方 | 用途 | 冲突/错误的影响 |
|---|---|---|
| `BaseOptionRegistry::mOptions` 数组 | 按 id 直接索引（get/getIfValid） | 越界即崩；撞槽即静默替换 |
| `FactoryUtil` / `Builder` | 组件命名（caption/description loc 键）、创建默认 DataProvider、注册 option 依赖订阅 | 设置组件无法创建或绑错值 |
| options.txt 持久化 | 读写按 saveTag 遍历已注册 Option；恢复默认按 resetFlags 遍历 | 值被写到别的键/被重置逻辑波及 |
| Option 变更 PubSub | 每个 Option 自己的 onChange 发布器，组件依赖它刷新 | UI 不刷新或跟着别的选项联动 |
| `OreUI::OptionsCommandGroup` | OreUI 命令通道（_setFloatOption 等）改选项值 | 命令改错选项 |
| `OreUI::OptionsFacet_DEPRECATED` | 旧版 OreUI options facet 按 OptionID 注册观察器 | 旧 UI 里串值 |
| `Settings::Eventing` | 变更遥测 | 仅遥测串名 |

注意：OreUI 查询（`settingsGroupQuery`/`settingsOptionQuery`）按**字符串组件 id**
查 `IRegistry::getSetting`，不直接暴露 OptionID——OptionID 只在
组件↔Option 绑定层起作用。

### 7.4 StringComponent / BannerComponent 的解决方案（Builder 借用）

`Builder<StringComponent>::build()`（0x14420dfe0）与
`Builder<BannerComponent>::build()`（0x144219360）是**导出的**，组件构造逻辑
全部内联在 build 里。缺的只是 Builder 实例的构造——而 MSVC 的 ICF（相同代码折叠）
把所有 `BaseBuilder<Builder<T>, T>` 实例折成了一个符号（证据：`addBoolean` 构造
Boolean builder 时调用的就是 ActionComponent 那个实例），因此这一个 ctor 可构造
**任何** Builder\<T\> 的公共头部：

- `??0?$BaseBuilder@V?$Builder@VActionComponent@Settings@@@Settings@@VActionComponent@2@@Settings@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z`（0x140be5610）

**26.51 白名单已落地**，这些符号都进了 bedrock_runtime_data，对应声明已手写到
LL 头文件（生成器不发模板符号）：

| 声明位置 | 内容 |
|---|---|
| `mc/client/settings/BaseBuilder.h` | `BaseBuilder` 模板 + ActionComponent 实例化构造（ICF 共享） |
| `mc/client/settings/Builder.h` | `Builder<T>` 成员声明 + String/Banner/NumberComponent\<int\> 的 build/dtor MCTAPI 特化 |
| `src-client/mc/client/settings/DataProvider.h` | `createNumberDataProvider<T>` 模板声明 |
| `mc/options/option_types/FloatOption.h` + `src-client/.../FloatOption.cpp` | 手工还原的 FloatOption 构造（见 7.1） |

构造配方（LL core 内部，`buildWithGameBuilder<T>` 即按此实现）：

1. `::operator new(0x400)` 并清零（容量大于任何 Builder 实例）；
2. 在偏移 0 调用共享 BaseBuilder ctor（id, name）——初始化公共头部
   （mId/mName/mDescription/各 optional provider/mOptions/set/vector/flags，
   BaseBuilder 子对象大小 0x178）；
3. 手写尾部成员（T 特定，偏移来自各 Builder dtor 反汇编，**版本相关**）：

   | Builder\<StringComponent\> | 偏移 |
   |---|---|
   | `unique_ptr<IStringDataProvider>` mDataProvider | 0x178 |
   | `optional<string>` mPlaceholder（has_value @0x1A0） | 0x180 |
   | `optional<function>`（has_value @0x1F8） | 0x1B8 |
   | vector（元素 0x40） | 0x200 |

   | Builder\<BannerComponent\> | 偏移 |
   |---|---|
   | 标量（疑 BannerType） | 0x178 |
   | string | 0x180 |
   | `optional<function>`（has_value @0x1E0） | 0x1A0 |
   | `unique_ptr<IDataProvider>` mDataProvider | 0x1E8 |
   | `optional<BannerCta>`（约 0x80 字节，has_value @0x270） | 0x1F0 |

   全部置空（provider 置 null、optional 的 has_value 置 0、vector 清零）即可；
   String 的文本值绑定走 mDataProvider（mod 实现 `IStringDataProvider`）。
4. 调 `build()` → 返回 `optional<unique_ptr<variant>>`（游戏侧完整构造组件，
   含 mutex/publisher/订阅初始化）；
5. 调对应 Builder dtor（String 0x14420f1b0 / Banner 0x140b4fd30），释放缓冲区。

同一配方同样适用于 GroupInfo/Text/Action 等——`Builder<T>::build` 是全类型统一的
构造入口，比硬编码 976/0x3C8 更稳（build 内部自己处理 _Which 与订阅）。


## 8. rail tab 图标不可自定义

rail 项图标由 OreUI JS 内置的 id→图标映射决定：`Sse[tabId.toLowerCase()]`（先精确匹配，
再剥掉 `-jsonui` 后缀重试），只有原版 id（`accessibility`/`audio`/`video`/`general` 等）
才有图标；查不到一律落到默认占位图（placeholder.png——即我们 Mods/CoralMap tab 显示的
拼图占位图标）。

`GroupInfoComponent` 与 `settingsGroupInfoQuery` 都没有图标字段，组件层没有注入通道。
不改 OreUI JS 资源（不可取）的前提下自定义 tab 只能显示默认图标；把 tab id 命名为原版
已有 id 可以"借"到图标，但会与原版内容组冲突，不可行。例外：account tab 用的是
Xbox 头像。

补充：给 JS 的映射表（`Sse`）加键值对也不可行——它是 webpack 闭包内的局部 const，
运行时无从触及；唯一的理论路径是 hook OreUI 资源 handler 链
（`Gameface::ResourceHandlerBrokerImpl::OnResourceRequest`，游戏自带
Registered/Pack/HybridResourceHandler）在 JS bundle 加载途中 patch 源码文本，但
minified 变量名与带 hash 的文件名每个版本都变，极脆，不建议。另：
`PackResourceHandler` 会经 ResourcePackManager 解析 hbui 资源，资源包可覆盖
placeholder.png，但那是全局生效、不能按 tab 区分。

为什么"按 mod 区分"在当前结构上无解：rail section 的 GroupInfo id **同时**是图标查找键
和点击导航目标（`/oreui-settings/<id>`）——借原版 id 拿到图标就会导航到原版页面；
所有未收录 id 请求同一个 placeholder URL，资源 handler 层无法区分来源 tab。可行方向：
上游申请给 GroupInfoComponent/query 加图标字段（零维护），或 LL 集中式地在 bundle 加载
途中 patch Sse（锚点用语义键名而非 minified 变量名，失败降级默认图标），后者每个版本
需验证锚点。

## 9. 键位编辑（键盘和鼠标/控制器页）的实现

按键行（"攻击/摧毁 → 按钮1"这类）的结构：

- 每行是一个 **ActionComponent**，其 data provider 是 `Settings::RebindActionDataProvider`
  （IActionDataProvider）；行上显示的当前键位文本由 label provider 从 RemappingLayout 生成。
- 行由 `Settings::InputControlsSettingsHelper::createInputBindingGroup(InputBindingGroupData,
  IBuilderContext&, RemappingLayout&, ...)` 批量构建，键盘（keyboardAndMouse）与手柄
  （controller）分属不同 InputMode 的组。
- 点击后进入监听态：provider 通过 `IBuilderContext::registerToRawInputEvent` 订阅**原始输入**
  （回调签名 `void(int key, RawInputType, ButtonState, bool)`）。
- 下一次按键被捕获 lambda 处理（RebindActionDataProvider.cpp:101）：若是重置触发键
  （Esc 等）→ 恢复默认绑定；否则写入 `RemappingLayout` 的 Keymapping、
  `RemappingLayoutRawIndex::unassignDuplicateKeys` 清掉占用同键的其他绑定、发布变更通知
  UI 刷新；`flush()` 负责持久化。
- 冲突/合法性判断发生在写入前（遍历现有绑定查重）。

对 mod 的意义：要做可编辑键位行，需要 (1) 按键已注册进游戏的 Keymapping/RemappingLayout
（LL KeyRegistry 注册的 gameplay 键走的就是这条路），(2) 拿到 IBuilderContext——我们的
组工厂签名是无参的，但 `RegistryBuilder::buildDefaultSettingsRegistry`（MCAPI）持有
context，hook 它即可捕获，进而使用 `registerToRawInputEvent` 等能力。

## 10. ModSettings::addKeybind 实现要点

**自实现键位行（不再走 createInputBindingGroup）**：原版那条路依赖 RebindActionDataProvider
的"开始捕获" lambda——lambda 通常不给白名单，借它修鼠标改绑循环只能特征码 hook。
改为整条逻辑自己实现（`ModKeybindDataProvider : Settings::IActionDataProvider`）：

- 行组件 = `ActionComponent`（MCAPI 构造）+ `mActionLabelOverrideProvider`（TypedStorage
  成员直接赋值）+ `mActionCallback`（点击 → 我们的捕获逻辑）；重置按钮同理再造一行
  （`showReset=false` 时不造）。
- 捕获：`IBuilderContext::registerToRawInputEvent`（纯虚可直接调）订阅原始输入；
  `InputSettingsHandler::setCapturingKeymapping`（MCAPI）标记捕获态让前端吞输入；
  结束直接 `mCapturingKeymapping.reset()`（成员可见，无需符号）。
  **关键**：开始捕获必须调 `IBuilderContext::setInputBindingMode(MouseAndKeyboard)`、
  结束调回 `Undefined`——`KeyboardMapper::tick` 只在绑定模式为 1（MouseAndKeyboard）
  时才把键盘事件入队为 type-5 原始事件，正常模式（0）下按键全走按钮映射路径，
  原始输入事件根本不会发生（原版 RebindActionDataProvider.cpp:67 的
  setInputBindingMode 调用做同一件事，漏了它订阅就永远收不到事件）。
- 写入：`layout->setMappingWithRawInput`（我们的 hook 同步 json/回调/重建输入映射）；
  ESC 取消指派走 `layout->setMapping(action, {0})`；冲突清键直接遍历 `mKeymappings`
  向量做 `std::erase`（绕开 `defaultKeyAtIndex`/`unassignDuplicateKeys` 的
  "可重映射序号"语义）。
- UI 刷新：游戏构造组件时经 `setChangeListener` 接好 `mListener`（与
  ModStringDataProvider 同一通路），捕获开始/结束/重置后调 `mListener()` 驱动前端
  重新求值 label。
- 键名显示对齐原版（KeyboardAndMouseSettingsDetails.cpp:303）：遍历 keymapping 的全部
  键，`getMappedKeyName(key, false)` 拼接 ", " 后整体过 `I18n::get`（鼠标键等特殊键
  才能本地化为"按钮1"）；待输入状态 label 直接返回 ">_<"。
- **鼠标改绑的重新捕获循环**：OreUI 按钮在松开时触发点击。用鼠标点击行上按钮改绑时，
  按下完成绑定（捕获结束），松开那一下又点到按钮 → 重新进入捕获。现在由我们自己的
  点击回调挡掉：改绑完成后 500ms 窗口内忽略"开始捕获"
  （`shouldSuppressCaptureStart`，时间戳在 onKeyRemapped 命中我们的条目时刷新）。
- **发起点击被自身捕获**：OreUI 的按钮回调先于游戏 input tick 处理——点击行按钮开始
  捕获后，同一次点击的按下事件才以原始事件到达，若不处理会立即把左键绑上。
  解决：startCapture 记录时间戳，250ms 窗口内忽略 RawInputType::MouseButton 的按下事件
  （发起事件必在此窗口内；有意绑定鼠标键的下一次点击必在窗口外）。
- 键值变更通知：hook `KeyboardRemappingLayout::$setMappingWithRawInput`（Publisher 布局
  不完整，不能直接订 `mRefreshKeymappingsPublisher`，见第 11 节）。
- **改绑生效路径**：`setMappingWithRawInput` 只改 `mKeymappings` 并发布通知，不会重建
  输入映射。原版的生效路径是 `IBuilderContext::refreshClientInputConfig()`（纯虚，可直接调）
  → `Config::createConfig` + `ClientInputHandler::onConfigChanged` → 重新绑定 factory 的
  `mKeyboardRemappingLayout` 并跑 `_updateKeyboardAndMouseControls`（全量重建并覆盖
  mActiveInputMappings，KeyRegistry 的 hook 在此重读 layout）→ `refreshInputMapping`。
  我们的 hook 在检测到我们的 entry 变更后调用它，改绑立即生效。
- mod 键的 gameplay 侧由 KeyRegistry 完成：若 mod 用 `getOrCreateKey` + KeyHandle
  （layout-backed），重建后新键自动生效；若用 `registerGameplayKeyboardButton`（固定
  keyCode），mod 需在 onChange 里 unregister + 重新注册，重建随即采用新键。
- **鼠标键码**：`_rawKeyToKey` 把鼠标键存为 `rawKey - 100`（左键 = -99）；负键码必须路由进
  `mouseMapping.buttonBindings`，且 buttonNum 要经 `getAdjustedKey`（负键 +100 还原为原始
  按键号）——原版 `_bindActionToKeyboardAndMouseInput` 的做法。KeyRegistry 的两条注册路径
  （KeyHandle 的 altKey 分支与 mappingButtons）均已按此处理。
- 已知限制：捕获状态下按 ESC 是"重置/取消分配"（`isKeyboardTriggeringReset`: id==27），
  该路径直接改写 `mKeymappings` 并走 publisher dispatch，**不经过 setMappingWithRawInput**，
  我们的 hook 收不到，settings.json 会与 layout 暂时失步（下次改绑或重启时自愈）。
- **从原版"键盘和鼠标"页隐藏 mod 键位**：原版页面通过
  `KeyboardAndMouseSettingsDetails::getNormalKeysIndex/getChordKeysIndex/getMacroKeysIndex`
  （均 MCAPI）枚举 layout 里 `mAllowRemap` 的键（返回"可重映射序号"而非原始下标；
  `defaultKeyAtIndex` 输入也是该序号）。hook 这三个函数，把命中我们 action 的序号剔除，
  mod 键位只出现在 Mods 页——顺带回避了原版页面重置按钮对我们条目不生效的问题
  （原版重置回调的行内联逻辑无法在通用页面复现）。

## 11. 已验证的坑（续）

- **组件头文件的基类 `Settings::Component<T>` 是空壳，派生类成员偏移全部不可用**：
  LL 的 `ActionComponent.h` 等按空基类计算成员偏移，与游戏真实布局（基类约 0x1D8 字节）
  完全对不上。任何经 LL 头文件对组件成员的读写都会写错位置——实例：把
  `mActionLabelOverrideProvider`（真实偏移 0x388，LL 算出 0x1B0）按 LL 布局赋值，
  覆盖了基类 Publisher 的 Connector 虚表，OreUI `SettingsActionQuery` 构造时 connect
  读到垃圾虚表 → CFG fast fail（0xC0000409）。规则：**组件成员只读真实偏移
  （从游戏代码反推，如 getActionLabel 的 `[this+0x3C0]`），或只走游戏侧函数**。
- **PubSub Publisher 布局已手工还原**（模板类不进自动生成，需手工维护）：
  `Publisher<Sig, TM, Policy>` = `DispatchingPublisherBase<TM, SubscriptionBody>`（→
  `ThreadingPublisherBase<TM>` → `FastDispatchPublisherBase_{Single,Multi}Threaded` →
  `PublisherBase` → `PublisherDisconnector`）+ `Connector<Sig>`。实测布局（26.51，
  以 `RemappingLayout::mRefreshKeymappingsPublisher` 的构造点为准）：
  vtable@0、`mSubscriptions` 哨兵@8、`mSubscriberCount`@0x18、SingleThreaded 多一个
  8B 的 `mFastDispatchInfo`@0x20（LL 头文件原本整个缺这个成员，已补）、Connector@0x28；
  MultiThreaded 为 mutex(0x50)+mFastDispatchInfo(8)，Connector@0x78（本来就对）。
  `ModSettings.cpp` 里有 `sizeof(Publisher<void(optional<uint64>), SingleThreaded, 0>)
  == 0x30` 的 static_assert 守护。修好后 `mRefreshKeymappingsPublisher.connect()`
  类型安全直连，keybind 变更通知已从 hook 换成真订阅（ESC 取消指派路径也经此
  发布器，desync 问题顺带消除）。
