#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftHandler;
class Recipe;
class Recipes;
struct AllowedAnywhereConsume;
struct ExpectedAnywhereConsume;
struct ExpectedSlotConsume;
struct FullContainerName;
struct RecipeNetIdTag;
// clang-format on

/**
 * @class CraftHandlerBase
 * @brief 处理合成相关操作的抽象基类。
 *
 * 这个类定义了处理来自客户端的合成请求的通用框架和接口。
 * 具体的合成逻辑（例如，工作台合成、创造模式合成、修复物品等）由其派生类实现。
 * 它负责验证合成的配方、处理原料的消耗以及返回操作结果。
 */
class CraftHandlerBase {
public:
    // 成员变量
    // NOLINTBEGIN

    // 对主合成请求处理器的引用，用于协作和状态管理。
    ::ll::TypedStorage<8, 8, ::ItemStackRequestActionCraftHandler&> mCraftRequestHandler;

    // 当前正在处理的合成操作类型。
    ::ll::TypedStorage<1, 1, ::ItemStackRequestActionType> mCraftActionType;

    // 一个标志位，指示对于尚未在服务器端完全实现的合成逻辑，是否应该信任客户端的预测结果。
    // 这可能用于开发或实验性功能。
    ::ll::TypedStorage<1, 1, bool> mNonImplementedTrustClientResults;

    // 期望从特定槽位消耗的原料列表。服务器会验证这些消耗是否正确发生。
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedSlotConsume>> mExpectedSlotConsumes;

    // 期望从玩家物品栏任何位置消耗的原料列表。
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedAnywhereConsume>> mExpectedAnywhereConsumes;

    // 允许从玩家物品栏任何位置消耗的原料列表。这可能用于处理更灵活的配方。
    ::ll::TypedStorage<8, 24, ::std::vector<::AllowedAnywhereConsume>> mAllowedAnywhereConsumes;

    // 标记当前请求是否是一个合成请求。
    ::ll::TypedStorage<1, 1, bool> mIsCraftRequest;
    // NOLINTEND

public:
    // 默认禁止构造和赋值
    CraftHandlerBase& operator=(CraftHandlerBase const&);
    CraftHandlerBase(CraftHandlerBase const&);
    CraftHandlerBase();

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 0
    // 虚析构函数，使用默认实现。
    virtual ~CraftHandlerBase() = default;

    // vIndex: 1
    // 处理一个被消耗的物品。服务器用此函数来验证客户端报告的原料消耗是否合法。
    virtual ::ItemStackNetResult handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);

    // vIndex: 2
    // 在处理具体操作之前执行的预处理步骤。
    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);

    // vIndex: 3
    // 在处理完一批请求后被调用，用于清理或最终确定状态。
    virtual void endRequestBatch();

    // vIndex: 4
    // 处理具体的合成操作。这是一个纯虚函数，必须由派生类根据其特定的合成逻辑来实现。
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&) = 0;

    // vIndex: 5
    // 在合成请求处理完毕后被调用，用于执行后续操作（例如返还多余物品）。
    virtual void _postCraftRequest(bool const wasSuccess);

    // vIndex: 6
    // 获取当前世界中可用的所有配方。
    virtual ::Recipes const* _getLevelRecipes() const;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN

    /**
     * @brief 根据网络ID获取配方对象。
     * @return 返回一个元组，包含操作结果和找到的配方指针（如果成功）。
     */
    MCAPI ::std::tuple<::ItemStackNetResult, ::Recipe const*> _getRecipeFromNetId(::RecipeNetId const& recipeNetId);

    /**
     * @brief 处理一个合成请求操作的入口点。
     * @param requestAction 具体的合成请求操作。
     * @param currentResult 当前的累积操作结果，用于链式处理。
     * @return 返回处理后的操作结果。
     */
    MCAPI ::ItemStackNetResult
    handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction, ::ItemStackNetResult currentResult);

    /**
     * @brief 在请求处理完成后调用，用于触发后续逻辑。
     * @param wasSuccess 请求是否成功处理。
     */
    MCAPI void postRequest(bool wasSuccess);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $endRequestBatch();

    MCFOLD void $_postCraftRequest(bool const wasSuccess);

    MCFOLD ::Recipes const* $_getLevelRecipes() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
