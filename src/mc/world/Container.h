#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/ContainerIterator.h"
#include "mc/world/ContainerOwner.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/safety/RedactableString.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/ContainerOwner.h"
#include "mc/world/TypedRuntimeId.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class ContainerCloseListener;
class ContainerContentChangeListener;
class ContainerSizeChangeListener;
class ItemStack;
class Player;
class Random;
class Vec3;
struct ContainerRuntimeIdTag;
// clang-format on

class Container {
public:
    // Container 内部类型声明
    // clang-format off
    struct PublisherWrapper; // 一个内部结构体，用于包装事件发布者逻辑。
    // clang-format on

    // Container 内部类型定义
    struct PublisherWrapper {
    public:
        // 成员变量
        // NOLINTBEGIN
        // 这是一个大小为48字节的未类型化存储。它隐藏了事件发布者的具体实现细节，
        // 可能是为了避免在头文件中暴露第三方库的类型，或是为了保持二进制接口的稳定。
        ::ll::UntypedStorage<8, 48> mUnka32e8c; 
        // NOLINTEND
    public:
        // 禁用默认构造和拷贝，表明这个结构体应该被特殊管理。
        PublisherWrapper& operator=(PublisherWrapper const&);
        PublisherWrapper(PublisherWrapper const&);
        PublisherWrapper();
    public:
        // 成员函数
        MCNAPI ~PublisherWrapper(); // 析构函数
    public:
        // 析构函数 Thunk (一种内部函数包装)
        MCNAPI void $dtor();
    };

    // 定义一个函数类型别名，用于在服务器初始化物品时设置回调，当物品的网络ID发生变化时被调用。
    using ItemStackNetIdChangedCallback = ::std::function<void(int, ::ItemStack const&)>;

public:
    // 获取容器类型的字符串名称（例如 "chest", "hopper"）。[[nodiscard]] 提醒调用者必须使用返回值。
    [[nodiscard]] std::string const& getTypeName() const { return containerTypeMap().at(mContainerType); }

    // 获取指定索引处物品的可修改引用（返回一个 optional_ref，表示可能不存在）。
    LLNDAPI optional_ref<ItemStack> getItemNonConst(int index);

    // 重载 [] 运算符，提供像数组一样方便地访问物品的语法（非 const 版本）。
    [[nodiscard]] ItemStack& operator[](int index) { return this->getItemNonConst(index); }

    // 重载 [] 运算符的 const 版本。
    [[nodiscard]] ItemStack const& operator[](int index) const { return this->getItem(index); }

    // 定义事务上下文的回调函数类型。它在物品发生改变时被调用，参数包括容器、槽位、旧物品和新物品。
    // 这允许对物品操作进行批处理或监听。
    using TransactionContext = std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>;

public:
    // 为 Container 类定义标准的迭代器类型，使其能够完美支持 C++ 的 range-based for loop。
    using Iterator      = ContainerIterator<Container>;
    using ConstIterator = ContainerIterator<Container const>;
    using ReverseIterator      = std::reverse_iterator<Iterator>;
    using ConstReverseIterator = std::reverse_iterator<ConstIterator>;

    // 定义 begin() 和 end() 系列函数，返回指向容器开头和结尾的迭代器。
    [[nodiscard]] constexpr Iterator      begin() noexcept { return {this, 0}; }
    [[nodiscard]] constexpr ConstIterator cbegin() const noexcept { return {this, 0}; }
    [[nodiscard]] constexpr Iterator      end() noexcept { return {this, getContainerSize()}; }
    [[nodiscard]] constexpr ConstIterator cend() const noexcept { return {this, getContainerSize()}; }
    // 定义反向迭代器
    [[nodiscard]] constexpr ReverseIterator      rbegin() noexcept { return ReverseIterator{end()}; }
    [[nodiscard]] constexpr ConstReverseIterator crbegin() const noexcept { return ConstReverseIterator{cend()}; }
    [[nodiscard]] constexpr ReverseIterator      rend() noexcept { return ReverseIterator{begin()}; }
    [[nodiscard]] constexpr ConstReverseIterator crend() const noexcept { return ConstReverseIterator{cbegin()}; }

public:
    // 成员变量
    // NOLINTBEGIN
    ::SharedTypes::Legacy::ContainerType                    mContainerType;          // 容器的基础类型，例如 CONTAINER。
    ::SharedTypes::Legacy::ContainerType                    mGameplayContainerType;  // 游戏逻辑中更具体的类型，例如 CHEST, FURNACE。
    ::std::unordered_set<::ContainerContentChangeListener*> mContentChangeListeners; // 存储所有内容改变监听器的集合。这是一个观察者模式的实现。
    ::std::unordered_set<::ContainerSizeChangeListener*>    mSizeChangeListeners;    // 存储所有尺寸改变监听器的集合。
    ::std::unordered_set<::ContainerCloseListener*>         mCloseListeners;         // 存储所有关闭事件监听器的集合。
    ::Container::PublisherWrapper                           mRemovedPublisher;       // 当容器被移除时，用于发布事件的发布者实例。
    ::std::deque<TransactionContext>                        mTransactionContextStack; // 事务上下文栈，允许嵌套的物品操作事务。
    ::Bedrock::Safety::RedactableString                     mName;                   // 容器的名称，可能是玩家通过铁砧自定义的。
    bool                                                    mCustomName;             // 标记该名称是否为自定义名称。
    ::ContainerOwner                                        mContainerOwner;         // 记录容器的所有者信息（是方块还是实体）。
    ::ContainerRuntimeId                                    mContainerRuntimeId;     // 容器在当前游戏会话中的唯一运行时ID，主要用于网络同步。
    // NOLINTEND

public:
    // 默认构造函数被禁用，强制使用带参数的构造函数来初始化必要的成员。
    Container();

public:
    // 虚函数 - 定义了 Container 的接口契约。派生类必须或可以选择性地实现它们。
    // NOLINTBEGIN
    // vIndex: 0 - 虚析构函数。确保当通过基类指针删除派生类对象时，派生类的析构函数能被正确调用。
    virtual ~Container();

    // vIndex: 1 - 初始化容器。提供一个默认的空实现，派生类可以重写以执行特定的初始化逻辑。
    virtual void init();

    // vIndex: 2 - (纯虚函数) 服务器端初始化物品的网络ID。派生类必须实现此函数来与网络层交互。
    virtual void serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)>) = 0;

    // vIndex: 3 - 添加一个内容改变监听器。
    virtual void addContentChangeListener(::ContainerContentChangeListener* listener);

    // vIndex: 4 - 移除一个内容改变监听器。
    virtual void removeContentChangeListener(::ContainerContentChangeListener* listener);

    // vIndex: 5 - 获取与“容器被移除”事件相关联的发布/订阅连接器。
    virtual ::Bedrock::PubSub::Connector<void()>* getContainerRemovedConnector();

    // vIndex: 6 - 检查是否有订阅“容器被移除”事件的监听者。
    virtual bool hasRemovedSubscribers() const;

    // vIndex: 7 - (纯虚函数) 获取指定槽位的物品（const版本）。派生类必须实现此函数来提供对其内部存储的访问。
    virtual ::ItemStack const& getItem(int) const = 0;

    // vIndex: 8 - 检查容器是否还有空间放下一个指定的物品。默认实现会遍历所有槽位。
    virtual bool hasRoomForItem(::ItemStack const& item);

    // vIndex: 9 - 尝试将一个物品添加到容器中。它会尝试合并到现有堆栈或放入空槽。
    virtual bool addItem(::ItemStack& item);

    // vIndex: 10 - 添加物品，并强制平衡（可能用于特殊的游戏逻辑）。
    virtual bool addItemWithForceBalance(::ItemStack& item);

    // vIndex: 11 - 将物品添加到第一个可用的空槽位。
    virtual bool addItemToFirstEmptySlot(::ItemStack const& item);

    // vIndex: 12 - (纯虚函数) 设置指定槽位的物品。派生类必须实现此函数以允许修改其内容。
    virtual void setItem(int modelSlot, ::ItemStack const& item) = 0;

    // vIndex: 13 - 设置物品，并可选择强制平衡。
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    // vIndex: 14 - 从指定槽位移除指定数量的物品。
    virtual void removeItem(int slot, int count);

    // vIndex: 15 - 移除容器内的所有物品。
    virtual void removeAllItems();

    // vIndex: 16 - 移除所有物品，并强制平衡。
    virtual void removeAllItemsWithForceBalance();

    // vIndex: 17 - 当容器被移除时调用，触发相关的事件通知。
    virtual void containerRemoved();

    // vIndex: 18 - 将指定槽位的内容作为掉落物丢弃在世界中。
    virtual void dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);

    // vIndex: 19 - 将容器所有内容作为掉落物丢弃在世界中（例如，箱子被破坏时）。
    virtual void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    // vIndex: 20 - (纯虚函数) 获取容器的大小（即槽位总数）。派生类必须实现。
    virtual int getContainerSize() const = 0;

    // vIndex: 21 - (纯虚函数) 获取此容器中物品的最大堆叠数量。派生类必须实现。
    virtual int getMaxStackSize() const = 0;

    // vIndex: 22 - (纯虚函数) 当玩家开始打开此容器时调用（例如，播放开箱动画）。派生类必须实现。
    virtual void startOpen(::Player&) = 0;

    // vIndex: 23 - 当玩家停止打开此容器时调用（例如，播放关箱动画）。
    virtual void stopOpen(::Player& player);

    // vIndex: 24 - 获取容器内所有物品的一份拷贝。
    virtual ::std::vector<::ItemStack> getSlotCopies() const;

    // vIndex: 25 - 获取指向容器内所有物品的指针的 const 向量。
    virtual ::std::vector<::ItemStack const*> const getSlots() const;

    // vIndex: 26 - 获取空槽位的数量。
    virtual int getEmptySlotsCount() const;

    // vIndex: 27 - 获取容器中与指定物品相匹配的物品总数。
    virtual int getItemCount(::ItemStack const& compare) const;

    // vIndex: 28 - 查找第一个空槽位的索引。
    virtual int firstEmptySlot() const;

    // vIndex: 29 - 查找第一个有物品的槽位的索引。
    virtual int firstItem() const;

    // vIndex: 30 - 从头开始查找第一个与指定物品匹配的槽位。
    virtual int findFirstSlotForItem(::ItemStack const& item) const;

    // vIndex: 31 - 从后往前查找第一个与指定物品匹配的槽位。
    virtual int reverseFindFirstSlotForItem(::ItemStack const& item) const;

    // vIndex: 32 - 检查是否可以将物品推入此容器的指定槽位（供漏斗等使用）。
    virtual bool canPushInItem(int, int, ::ItemStack const&) const;

    // vIndex: 33 - 检查是否可以从此容器的指定槽位拉出物品（供漏斗等使用）。
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;

    // vIndex: 34 - 设置容器内容已改变的标志，并通知所有内容监听器。
    virtual void setContainerChanged(int slot);

    // vIndex: 35 - 设置容器已被移动的标志。
    virtual void setContainerMoved();

    // vIndex: 36 - 设置容器的自定义名称。
    virtual void setCustomName(::Bedrock::Safety::RedactableString const& name);

    // vIndex: 37 - 检查容器是否拥有自定义名称。
    virtual bool hasCustomName() const;

    // vIndex: 38 - 从 NBT 复合标签中读取额外的存档数据（例如，熔炉的燃烧时间）。
    virtual void readAdditionalSaveData(::CompoundTag const& tag);

    // vIndex: 39 - 将额外的存档数据写入到 NBT 复合标签中。
    virtual void addAdditionalSaveData(::CompoundTag& tag);

    // vIndex: 40 - 创建一个事务上下文。它接受一个回调函数，并在执行一个给定的操作后调用该回调。
    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );

    // vIndex: 41 - 初始化容器的内容，例如从战利品表中生成物品。
    virtual void initializeContainerContents(::BlockSource& region);

    // vIndex: 42 - 检查容器是否为空。
    virtual bool isEmpty() const;

    // vIndex: 43 - 检查某个槽位是否被禁用。
    virtual bool isSlotDisabled(int) const;
    // NOLINTEND

public:
    // 普通成员函数
    // NOLINTBEGIN
    MCAPI Container(::Container const&); // 拷贝构造函数
    MCAPI explicit Container(::SharedTypes::Legacy::ContainerType type); // 主要构造函数
    MCAPI Container(::SharedTypes::Legacy::ContainerType type, ::std::string const& name, bool customName);
    MCAPI void _dropSlotContent(::BlockSource& region, ::Random& random, ::Vec3 const& pos, bool randomizeDrop, int slot); // 内部掉落函数
    MCAPI void _serverInitId(int slot, ::ItemStack& item, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged); // 内部网络ID初始化函数
    MCAPI int getItemCount(::std::function<bool(::ItemStack const&)> comparator); // 使用自定义比较器来计算物品数量
    MCAPI int getRedstoneSignalFromContainer(::BlockSource& region); // 计算容器应发出的红石信号强度（供比较器使用）
    MCAPI ::Container& operator=(::Container const&); // 拷贝赋值运算符
    MCAPI void removeCloseListener(::ContainerCloseListener* listener); // 移除关闭监听器
    MCAPI void triggerTransactionChange(int slot, ::ItemStack const& oldItem, ::ItemStack const& newItem); // 手动触发事务改变通知
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN
    // 根据字符串名称（如 "chest"）获取对应的容器类型枚举值。
    MCAPI static ::SharedTypes::Legacy::ContainerType getContainerTypeId(::std::string const& name);
    // NOLINTEND

public:
    // 静态变量
    // NOLINTBEGIN
    // 提供一个全局的、从容器类型枚举到其字符串名称的双向映射。
    MCAPI static ::BidirectionalUnorderedMap<::SharedTypes::Legacy::ContainerType, ::std::string> const& containerTypeMap();
    // NOLINTEND
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Container const&);

    MCAPI void* $ctor(::SharedTypes::Legacy::ContainerType type);

    MCAPI void* $ctor(::SharedTypes::Legacy::ContainerType type, ::std::string const& name, bool customName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $init();

    MCAPI void $addContentChangeListener(::ContainerContentChangeListener* listener);

    MCAPI void $removeContentChangeListener(::ContainerContentChangeListener* listener);

    MCFOLD ::Bedrock::PubSub::Connector<void()>* $getContainerRemovedConnector();

    MCAPI bool $hasRemovedSubscribers() const;

    MCAPI bool $hasRoomForItem(::ItemStack const& item);

    MCAPI bool $addItem(::ItemStack& item);

    MCAPI bool $addItemWithForceBalance(::ItemStack& item);

    MCAPI bool $addItemToFirstEmptySlot(::ItemStack const& item);

    MCFOLD void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCAPI void $removeItem(int slot, int count);

    MCAPI void $removeAllItems();

    MCAPI void $removeAllItemsWithForceBalance();

    MCAPI void $containerRemoved();

    MCAPI void $dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);

    MCAPI void $dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    MCAPI void $stopOpen(::Player& player);

    MCAPI ::std::vector<::ItemStack> $getSlotCopies() const;

    MCAPI ::std::vector<::ItemStack const*> const $getSlots() const;

    MCFOLD int $getEmptySlotsCount() const;

    MCAPI int $getItemCount(::ItemStack const& compare) const;

    MCAPI int $firstEmptySlot() const;

    MCAPI int $firstItem() const;

    MCAPI int $findFirstSlotForItem(::ItemStack const& item) const;

    MCAPI int $reverseFindFirstSlotForItem(::ItemStack const& item) const;

    MCFOLD bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCFOLD bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCAPI void $setContainerChanged(int slot);

    MCAPI void $setContainerMoved();

    MCAPI void $setCustomName(::Bedrock::Safety::RedactableString const& name);

    MCAPI bool $hasCustomName() const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag);

    MCAPI void $createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );

    MCFOLD void $initializeContainerContents(::BlockSource& region);

    MCAPI bool $isEmpty() const;

    MCFOLD bool $isSlotDisabled(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
